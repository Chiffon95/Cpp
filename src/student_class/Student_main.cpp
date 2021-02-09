#include<iostream>
#include<time.h>
#include "manage_students.h"
#include "menu_functions.h"

using namespace std;

typedef struct {
	char menu;
	void(*fptr)(ManageStudents&);

}MenuFunc;

MenuFunc funcMap[] = {
{'1', func_menu_1},
{'2', func_menu_2},
{'3', func_menu_3},
{'4', func_menu_4},
{'5', func_menu_5},
{'6', func_menu_6},
{'7', func_menu_7},
{'8', func_menu_8},
{'9', func_menu_9},
};

char const* arrMenuStr[] = { "1.  학생 정보 저장" , "2.  점수 저장", "3.  영어 점수 저장",
							"4.  수학 점수 저장" , "5.  평균 점수 계산 및 저장",  "6.  전체 학생의 평균 계산 및 저장",
							 "7.  성적순 출력", "8.  삭제" , "9.  전체 학생의 정보 출력", "q.  종료" };

void showMenus() {

	for (int i = 0; i < sizeof(arrMenuStr) / sizeof(char*); i++) {
		cout << arrMenuStr[i] << endl;
	}
}

int excuteMenu(char menu, ManageStudents& ms) {

	int result = 1;

	if (menu < '1' || menu > '9') {
		cout << "잘못된 입력입니다." << endl;
		return 0;
	}

	for (int i = 0; i < sizeof(funcMap) / sizeof(MenuFunc); i++) {
		if (funcMap[i].menu == menu) {
			funcMap[i].fptr(ms);
			result = true;
			break;
		}
	}

	return result;
}

int main() {

	ManageStudents ms;

	showMenus();

	while (1) {
		char menu = NULL;

		cout << "\r\n실행할 메뉴를 선택하세요: " << endl;
		cin >> menu;

		if (menu == 'q') {
			cout << "프로그램을 종료합니다" << endl;
			break;
		}

		if (!excuteMenu(menu, ms)) {
			cout << "잘못된 명령입니다. 다시 메뉴를 선택하세요 \n" << endl;
		}

	}

	return 0;

}

//int main() {
//
//	ManageStudents ms;
//	const char * arr[] = {
//		"강지윤", "고광서", "고재욱", "김기훈", "김민건", "박진호",
//		"엄기훈", "원도현", "윤영재", "윤용우", "이루미", "임의성",
//		"정다운", "조휘만", "최정재", "최현학"
//	};
//
//	for (int i = 0; i < 16 ; i++) {
//		ms.putStudent(i + 1, arr[i]);
//	}
//
//	srand((unsigned)time(NULL));
//	int k, e, m;
//	for (int i = 0; i < 16; i++) {
//		k = rand() % 100;
//		e = rand() % 100;
//		m = rand() % 100;
//		ms.setStudentScore(i, k, e, m);
//	}
//
//	ms.showAllStudents();
//
//	return 0;
//
//}