#include <iostream>
#include <string.h>
#include "Student.h"
#include "manage_students.h"
using namespace std;

ManageStudents::ManageStudents(){
	count = 0;
}
ManageStudents::~ManageStudents() {
	for (int i = 0;i < count;i++) {
		delete arrStudents[i];
	}
}

void ManageStudents::putStudent(Student& std) {}
void ManageStudents::putStudent(int id, char* name) {
	if (count >= MAX_COUNT) {
		cout << "��������� �����ϴ�.";
		return;
	}

	arrStudents[count++] = new Student(id, name);
}
void ManageStudents::showAllStudents() {
	for (int i = 0;i <count;i++) {
		cout << arrStudents[i]->getName();

		if (arrStudents[i]->getAve() < 0) {
			cout << "  ��� �Է� �� " << endl;
		}
		else {
			printf(" ��� : %.2f\n", arrStudents[i]->getAve());
		}
	}
}
void ManageStudents::setStudentScore(int index, int k, int e, int m) {
	if (index < 0 && index > MAX_COUNT - 1) {
		cout << "�߸��� ���ڰ��Դϴ�" << endl;
		return;
	}
	if (arrStudents[index] == NULL) {
		cout << "�л� �ν��Ͻ� �������Դϴ�." << endl;
		return;
	}
	arrStudents[index]->setScore(k, e, m);
	arrStudents[index]->calAve();
}


Student getStudent(int id);
Student getStudent(char* strName);