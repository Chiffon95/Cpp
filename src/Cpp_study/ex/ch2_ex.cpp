//#include <iostream>
//using namespace std;
//
////1.참조자를 이용해 인자로 전달한 int형 변수값을 1씩 증가하는 함수
//void ex2_1_increVal(int &val) {
//	val++;
//}
//
////2.참조자를 이용해 인자로 전달한 int 형 변수의 부호를 바꾸는 함수
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
////3.다음의 num의 주소값을 저장한 포인터 변수와 이 포인터 변수를 참조하는 참조자를 선언하고 
////이 포인터변수와 참조자를 이용해 num에 저장된 값을 출력하라
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
////4.길이를 매개변수로 받아서 해당 길이의 문자열을 저장할 수 있는 배열을 생성하고 
////그 주소값을 반환하는 함수를 만들고 이를 테스트하는 코드를 작성하라.
//char * ex2_4_newMem(int len) {
//
//	return  new char[len+1];
//}
//void ex2_4() {
//
//	int len;
//
//	cout << "생성할 배열의 크기를 입력하세요" << endl;
//	cin >> len;
//
//	char *ptr = ex2_4_newMem(len);
//	cin >> ptr;
//	cout << "입력한 문자열:" << ptr << endl;
//
//	delete[]ptr;
//}
//
////5.다음과 같은 Point 구조체를 정의하고 이를 매개변수로 하는 pntAdder 함수를 정의하라. 
////두 개 점의 덧셈연산을 pntAddr로 테스트 코드를 작성하라. 
////이 때 Point 구조체 변수는 new 연산자를 이용해야한다.
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