//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//using namespace std;
//
//void func_1_0() {
//	//Cpp start
//	int num = 20;
//	std::cout << "Hello world" << std::endl;
//	std::cout << "Hello" << "world" << std::endl;
//	std::cout << num << ' ' << 'A';
//	std::cout << ' ' << 3.14 << std::endl;
//}
//void func_1_1() {
//	//Cpp cout & cin
//	int val1;
//	std::cout << "Enter First number : ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "Enter Second number : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "Print result (plus) : " << result << std::endl;
//}
//void func_1_2() {
//	//Cpp operation
//	int val1, val2;
//	int result = 0;
//	
//	std::cout << "Enter two numbers : ";
//	std::cin >> val1 >> val2;
//
//	if (val1 < val2) {
//		for (int i = val1 + 1;i < val2;i++) {
//			result += i;
//		}
//	}else {
//		for (int i = val2 + 1;i < val1;i++) {
//			result += i;
//		}
//	}
//
//	std::cout << "Print result from val1 to val2 (plus) : " << result << std::endl;
//}
//void func_1_3() {
//	//Cpp char input & output
//	char name[100];
//	char phone[100];
//
//	std::cout << "Enter name";
//	std::cin >> name;
//
//	std::cout << "Enter phone number : ";
//	std::cin >> phone;
//
//	std::cout << "\nPrint info\n" << std::endl;
//
//	std::cout << "Name : " << name << "\nPhone number : " << phone << std::endl;
//}
////func_1_4();
////func_1_4('A');
////func_1_4(12, 13);
//void func_1_4(void) {
//	//Function overlodaing
//	std::cout << "func_1_4(void) called" << std::endl;
//}
//void func_1_4(char c) {
//	//Function overlodaing
//	std::cout << "func_1_4(char c) called" << std::endl;
//}
//void func_1_4(int a, int b) {
//	//Function overlodaing
//	std::cout << "func_1_4(int a, int b) called" << std::endl;
//}
//void ex_1_0() {
//	//plus operation
//	int val1, val2, result = 0;
//
//	std::cout << "Enter First number : ";
//	std::cin >> val1;
//	
//	std::cout << "Enter Second number : ";
//	std::cin >> val2;
//
//	result = val1 + val2;
//
//	std::cout << "Print result (plus) : " << result;
//}
//void ex_1_1() {
//	//gugudan
//	int num, result;
//
//	do {
//		std::cout << "Enter number ( 2 ~ 9 ) - '-1' is out : ";
//		std::cin >> num;
//
//		if (num == -1) break;
//
//		if (num < 2 || num > 9) {
//			std::cout << "Wrong number!!!" << std::endl;
//		}
//		else {
//			for (int i = 0;i < 9;i++) {
//				result = (i + 1) * num;
//				std::cout << num << " x " << i + 1 << " = " << result << std::endl;
//			}
//		}
//	} while (1);
//}
//int ex_1_2_getSum(int val1, int val2) {
//	//overlodaing test
//	int result;
//
//	std::cout << "Enter 2 numbers (int) : ";
//	std::cin >> val1 >> val2;
//
//	result = val1 + val2;
//
//	//std::cout << "Print result (int) : " << result << std::endl;
//
//	return result;
//}
//double ex_1_2_getSum(double val1, double val2) {
//	//overlodaing test
//	double result;
//
//	std::cout << "Enter 2 numbers (double) : ";
//	std::cin >> val1 >> val2;
//
//	result = val1 + val2;
//
//	//std::cout << "Print result (double) : " << result << std::endl;
//	
//	return result;
//}
//void ex_1_2() {
//	//overlodaing test
//	int result;
//	double result2;
//	result = ex_1_2_getSum(3, 4);
//	result2 = ex_1_2_getSum(3.1, 4.1);
//
//	std::cout << "\nPrint result (int) : " << result << std::endl;
//	std::cout << "\nPrint result (double) : " << result2 << std::endl;
//
//}
//void ex_1_3_swap(char *p1,char*p2) {
//	//char swap
//	char temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//void ex_1_3_swap(int* p1, int* p2) {
//	//int swap
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//void ex_1_3_swap(double* p1, double* p2) {
//	//double swap
//	double temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//void ex_1_3() {
//	//swap test
//	char chval1 = 'a', chval2 = 'b';
//	int inval1 = 10, inval2 = 20;
//	double doval1 = 10.1, doval2 = 20.2;
//
//	ex_1_3_swap(&chval1, &chval2);
//	ex_1_3_swap(&inval1, &inval2);
//	ex_1_3_swap(&doval1, &doval2);
//
//	std::cout << "Enter char val : " << chval1 << ", " << chval2 << std::endl;
//	std::cout << "Enter int val : " << inval1 << ", " << inval2 << std::endl;
//	std::cout << "Enter dobule val : " << doval1 << ", " << doval2 << std::endl;
//}
//int func_1_5_Adder(int num1 = 1, int num2 = 2);
//void func_1_5() {
//	//Function's default value
//	std::cout << func_1_5_Adder() << std::endl;
//	std::cout << func_1_5_Adder(5) << std::endl;
//	std::cout << func_1_5_Adder(3, 5) << std::endl;
//
//}
//int func_1_5_Adder(int num1, int num2) {
//	//Function's default value
//	return num1 + num2;
//}
//int func_1_6_BoxVolume(int length, int width = 1, int height = 1);
//void func_1_6() {
//	//Function's default value (X, O, O)
//	std::cout << "[3, 3, 3] : " << func_1_6_BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5, 5, D] : " << func_1_6_BoxVolume(5, 5) << std::endl;
//	std::cout << "[7, D, D] : " << func_1_6_BoxVolume(7) << std::endl;
//	//std::cout << "[D, D, D] : " << func_1_6_BoxVolume() << std::endl; // Error
//}
//int func_1_6_BoxVolume(int length, int width, int height) {
//	//Function's default value (X, O, O)
//	return length * width * height;
//}
//inline int func_1_7_SQUARE(int x) {
//	//Function inline - not mecro
//	return x * x;
//}
//void func_1_7() {
//	//Function inline - not mecro
//	std::cout << func_1_7_SQUARE(5) << std::endl;
//	std::cout << func_1_7_SQUARE(12) << std::endl;
//}
//namespace func_1_8_1 {
//	//namespace test
//	void func_1_8_11() {
//		std::cout << "func_1_8_11 by func_1_8_1" << std::endl;
//	}
//}
//namespace func_1_8_2 {
//	//namespace test
//	void func_1_8_21() {
//		std::cout << "func_1_8_21 by func_1_8_2" << std::endl;
//	}
//}
//void func_1_8() {
//	//namespace test
//	func_1_8_1::func_1_8_11();
//	func_1_8_2::func_1_8_21();
//}
//int ex_1_4_SimpleFunc(int a = 10) {
//	//Function's default value
//	return a + 1;
//}
//int ex_1_4_SimpleFunc() {
//	//Function's default value
//	return 10;
//}
//void ex_1_4() {
//	//Function's default value
//	int num;
//	num = ex_1_4_SimpleFunc(5);
//
//	std::cout << num;
//}