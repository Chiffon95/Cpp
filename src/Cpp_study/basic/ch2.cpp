//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//using namespace std;
//
//bool func_2_0_isPositive(int num) {
//	//using namespace & bool type test
//	if (num < 0) return false;
//	else return true;
//}
//void func_2_0() {
//	//using namespace & bool type test
//	bool isPos;
//	int num;
//	cout << "Input number : ";
//	cin >> num;
//
//	isPos = func_2_0_isPositive(num);
//	if (isPos) cout << "Positive number" << endl;
//	else cout << "Negative number" << endl;
//}
//void func_2_1() {
//	//&(reference) meaming
//	int num1 = 1020;
//	int& num2 = num1;
//
//	cout << "VAL : " << num1 << endl;
//	cout << "REF : " << num2 << endl;
//
//	cout << "VAL : " << &num1 << endl;
//	cout << "REF : " << &num2 << endl << endl;
//
//	num2 = 3047;
//
//	cout << "VAL : " << num1 << endl;
//	cout << "REF : " << num2 << endl;
//
//	cout << "VAL : " << &num1 << endl;
//	cout << "REF : " << &num2 << endl;
//
//}
//void func_2_2_SwapByRef2(int& ref1, int& ref2) {
//	//&(reference) swap
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//void func_2_2() {
//	//&(reference) swap
//	int val1 = 10;
//	int val2 = 20;
//
//	func_2_2_SwapByRef2(val1, val2);
//	cout << "val1 : " << val1 << endl;
//	cout << "val2 : " << val2 << endl;
//}
//int& func_2_3_RefRetFuncOne(int& ref) {
//	//Function reference 1
//	ref++;
//	return ref;
//}
//void func_2_3() {
//	//Function reference 1
//	int num1 = 1;
//	int& num2 = func_2_3_RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num1 : " << num1 << endl;
//	cout << "num2 : " << num2 << endl;
//
//	cout << "num1 address : " << &num1 << endl;
//	cout << "num2 address : " << &num2 << endl;
//}
//int& func_2_4_RefRetFuncOne(int& ref) {
//	//Function reference 2
//	ref++;
//	return ref;
//}
//void func_2_4() {
//	//Function reference 2
//	int num1 = 1;
//	int num2 = func_2_4_RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num1 : " << num1 << endl;
//	cout << "num2 : " << num2 << endl;
//
//	cout << "num1 address : " << &num1 << endl;
//	cout << "num2 address : " << &num2 << endl;
//}
//char* func_2_5_MarkeStrAdr(int len) {
//	//malloc / free & new / delete
//	char* str = (char*)malloc(sizeof(char) * len);
//	return str;
//}
//void func_2_5() {
//	//malloc / free & new / delete
//	char* str = func_2_5_MarkeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout << str << endl;
//	free(str);
//}
//char* func_2_6_MakeStrAdr(int len) {
//	//malloc / free & new / delete
//	char* str = new char[len];
//	return str;
//}
//void func_2_6() {
//	//malloc / free & new / delete
//	char* str = func_2_6_MakeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout << str << endl;
//	delete[]str;
//}
//void func_2_7() {
//	//new & delete
//	int* ptr1 = new int;
//	double* ptr2 = new double;
//
//	int* ptr3 = new int[10];
//	double* ptr4 = new double[10];
//
//	delete ptr1;
//	delete ptr2;
//	delete[]ptr3;
//	delete[]ptr4;
//}
//typedef struct {
//	//new & delete
//	int xpos;
//	int ypos;
//}func_2_8_Point;
//void func_2_8() {
//	//new & delete
//	func_2_8_Point* ptr = new func_2_8_Point;
//	ptr->xpos = 10;
//	ptr->ypos = 20;
//
//	delete ptr;
//}
//
////ex
//
////1. �����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
//void ex_2_0_Add(int& ref) {
//	ref++;
//}
//void ex_2_0() {
//	int num = 1;
//
//	ex_2_0_Add(num);
//
//	cout << "num: " << num << endl;
//}
////2. �����ڸ� �̿��� ���ڷ� ������ int�� ������ ��ȣ�� �ٲٴ� �Լ�
//void ex_2_1_reverse(int& ref) {
//	ref *= (-1);
//}
//void ex_2_1() {
//	int num = -1;
//
//	ex_2_1_reverse(num);
//
//	cout << "num: " << num << endl;
//}
////3. ������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ�
////�����ڸ� ����, �� �����ͺ����� �����ڸ� �̿��Ͽ� num�� ����� �� ���
//void ex_2_2() {
//	int num = 12;
//	int* ptr = &num;
//	int*& ref = ptr;
//
//	cout << "ptr : " << *ptr << endl;
//	cout << "ref : " << *ref << endl;
//}
////4. ���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� ����,
////�� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ �ϴ� �ڵ� �ۼ�
//char* ex_2_3_func_len(int len) {
//	char* str = new char[len];
//	return str;
//}
//void ex_2_3() {
//	char* str = ex_2_3_func_len(20);
//	strcpy(str, "Hello World!!!");
//	cout << str << endl;
//	delete[]str;
//}
////5. ������ ���� Point����ü�� �����ϰ� �̸� �Ű������� �ϴ� pntAdder�Լ��� ����,
////pntAdder�Լ��� �Ű������� ���� ���� �� �� ���� x��ǥ���� ����,
////y��ǥ���� ���� �������� ���ο� Point�� �ʱ�ȭ �ؼ� ��ȯ�ϴ� �Լ�
//typedef struct ex_2_4_Point {
//	int xpos;
//	int ypos;
//};
//ex_2_4_Point& PntAdder(const ex_2_4_Point& ptr1, const ex_2_4_Point& ptr2) {
//	ex_2_4_Point* ptr3 = new ex_2_4_Point;
//
//	ptr3->xpos = ptr1.xpos + ptr2.xpos;
//	ptr3->ypos = ptr1.ypos + ptr2.ypos;
//
//	return *ptr3;
//	delete[]ptr3;
//}
//void func_0202_test5() {
//
//	ex_2_4_Point* ptr1 = new ex_2_4_Point;
//	ex_2_4_Point* ptr2 = new ex_2_4_Point;
//
//	ptr1->xpos = 10;
//	ptr1->ypos = 20;
//
//	ptr2->xpos = 30;
//	ptr2->ypos = 40;
//
//
//
//	ex_2_4_Point ptr4 = PntAdder(*ptr1, *ptr2);
//
//	cout << "x: " << ptr4.xpos << " " << "y: " << ptr4.ypos << endl;
//
//	delete[]ptr1;
//	delete[]ptr2;
//
//}