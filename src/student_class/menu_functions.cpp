#include<iostream>
#include "manage_students.h"

using namespace std; 

void func_menu_1(ManageStudents & ms) {
	char name[100];
	int id = 0;

	cout << "학생의 이름:" << endl;
	cin >> name;

	cout << "학생의 아이디" << endl;
	cin >> id;

	ms.putStudent(id, name);
}
void func_menu_2(ManageStudents & ms) {
	cout << "222" << endl;

}
void func_menu_3(ManageStudents & ms) {
	cout << "333" << endl;

}
void func_menu_4(ManageStudents & ms) {
	cout << "444" << endl;

}
void func_menu_5(ManageStudents & ms) {
	cout << "555" << endl;
}
void func_menu_6(ManageStudents & ms) {
	cout << "666" << endl;
}
void func_menu_7(ManageStudents & ms) {
	cout << "777" << endl;
}
void func_menu_8(ManageStudents & ms) {
	cout << "888" << endl;
}
void func_menu_9(ManageStudents & ms) {
	cout << "999" << endl;

}
void func_menu_10(ManageStudents & ms) {
	cout << "000" << endl;
}
