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

char const* arrMenuStr[] = { "1.  �л� ���� ����" , "2.  ���� ����", "3.  ���� ���� ����",
							"4.  ���� ���� ����" , "5.  ��� ���� ��� �� ����",  "6.  ��ü �л��� ��� ��� �� ����",
							 "7.  ������ ���", "8.  ����" , "9.  ��ü �л��� ���� ���", "q.  ����" };

void showMenus() {

	for (int i = 0; i < sizeof(arrMenuStr) / sizeof(char*); i++) {
		cout << arrMenuStr[i] << endl;
	}
}

int excuteMenu(char menu, ManageStudents& ms) {

	int result = 1;

	if (menu < '1' || menu > '9') {
		cout << "�߸��� �Է��Դϴ�." << endl;
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

		cout << "\r\n������ �޴��� �����ϼ���: " << endl;
		cin >> menu;

		if (menu == 'q') {
			cout << "���α׷��� �����մϴ�" << endl;
			break;
		}

		if (!excuteMenu(menu, ms)) {
			cout << "�߸��� ����Դϴ�. �ٽ� �޴��� �����ϼ��� \n" << endl;
		}

	}

	return 0;

}

//int main() {
//
//	ManageStudents ms;
//	const char * arr[] = {
//		"������", "����", "�����", "�����", "��ΰ�", "����ȣ",
//		"������", "������", "������", "�����", "�̷��", "���Ǽ�",
//		"���ٿ�", "���ָ�", "������", "������"
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