//#include <iostream>
//using namespace std;
//
////1.�����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
//void ex2_1_increVal(int &val) {
//	val++;
//}
//
////2.�����ڸ� �̿��� ���ڷ� ������ int �� ������ ��ȣ�� �ٲٴ� �Լ�
//void ex2_2_convVal(int &val) {
//	val = -val;
//}
//void ex2_2() {
//
//	int num = 1;
//
//	ex2_2_convVal(num);
//	cout << num << endl;
//
//	ex2_2_convVal(num);
//	cout << num << endl;
//}
//
////3.������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ� �����ڸ� �����ϰ� 
////�� �����ͺ����� �����ڸ� �̿��� num�� ����� ���� ����϶�
////const int num = 12;
//void ex2_3_func3() {
//
//	const int num = 12;
//	const int * ptr = &num;
//	const int * &ref = ptr;
//
//	cout << *ptr << endl;
//	cout << *ref << endl;
//
//	//int num = 20;
//	//const int * ptr = &num;
//	//ptr = NULL;
//	//int * const ptr2 = &num;
//	//*ptr2 = 30;
//	//ptr2 = NULL;
//
//}
//
////4.���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� 
////�� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
//char * ex2_4_newMem(int len) {
//
//	return  new char[len+1];
//}
//void ex2_4() {
//
//	int len;
//
//	cout << "������ �迭�� ũ�⸦ �Է��ϼ���" << endl;
//	cin >> len;
//
//	char *ptr = ex2_4_newMem(len);
//	cin >> ptr;
//	cout << "�Է��� ���ڿ�:" << ptr << endl;
//
//	delete[]ptr;
//}
//
////5.������ ���� Point ����ü�� �����ϰ� �̸� �Ű������� �ϴ� pntAdder �Լ��� �����϶�. 
////�� �� ���� ���������� pntAddr�� �׽�Ʈ �ڵ带 �ۼ��϶�. 
////�� �� Point ����ü ������ new �����ڸ� �̿��ؾ��Ѵ�.
//
////typedef struct {
////	int xpoint;
////	int ypoint;
////}ex2_test;
////ex2_test& ex2_testFunc(const ex2_test& p1, const ex2_test& p2) {
////
////	ex2_test* ptr = new ex2_test;
////
////	ptr->xpoint = p1.xpoint + p2.xpoint;
////	ptr->ypoint = p1.ypoint + p2.ypoint;
////
////	return *ptr;
////}
//typedef struct {
//	int xpos;
//	int ypos;
//}ex2_5_Point;
//ex2_5_Point& ex2_5_PntAdder(const ex2_5_Point&p1, const ex2_5_Point&p2) {
//
//	ex2_5_Point* ptr = new ex2_5_Point;
//
//	ptr->xpos = p1.xpos + p2.xpos;
//	ptr->ypos = p1.ypos + p2.ypos;
//
//	return *ptr;
//}
//void ex2_5() {
//	ex2_5_Point* ptr1 = new ex2_5_Point;
//	ptr1->xpos = 10;
//	ptr1->ypos = 20;
//
//	ex2_5_Point*ptr2 = new ex2_5_Point;
//	ptr2->xpos = 5;
//	ptr2->ypos = 15;
//
//	ex2_5_Point& ref = ex2_5_PntAdder(*ptr1, *ptr2);
//	cout << ref.xpos << ", " << ref.ypos << endl;
//
//	delete ptr1;
//	delete ptr2;
//	delete &ref;
//
//}
//
//int ch2_ex() {
//
//	//ex2_1();
//	//ex2_2();
//	//ex2_3();
//	//ex2_4();
//	//ex2_5();
//
//	int num = 20;
//	int num2 = 30;
//
//	num = 30;
//	int *ptr = &num;
//	*ptr = 40;
//
//	const int * ptr2 = &num;
//	ptr2 = &num2;
//	//*ptr2 = 50;
//
//	int * const ptr3 = &num;
//	//ptr3 = &num2;
//	*ptr3 = 100;
//
//
//	return 0;
//
//}