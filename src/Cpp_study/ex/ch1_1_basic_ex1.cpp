//#include <iostream>
//
//void ex1_1() {
//	int val1;
//	std::cout << "첫 번째 숫자 입력:";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두 번 째 숫자 입력 : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//
//	std::cout << "연산결과\n" << std::endl;
//	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
//}
//
//void ex1_2() {
//
//	int val;
//
//	std::cout << "몇 단의 구구단을 출력할까요?  ";
//	std::cin >> val;
//
//	for (int i = 0; i < 9; i++) {
//		std::cout << val << "*" << i + 1 << "=" << val * (i + 1) << std::endl;
//	}
//}
//
//int ex1_3(int a, int b) {
//
//	return a + b;
//}
//
//double  ex1_4_getSum(double a, double b) {
//
//	return a + b;
//}
//
//void ex1_4() {
//
//	int a = 3, b = 4;
//	double c = 3.1, d = 4.1;
//
//	std::cout << "정수연산: " << a << "+" << b << "=" << ex1_4_getSum(a, b) << std::endl;
//
//	std::cout << "실수연산: " << c << "+" << d << "=" << ex1_4_getSum(c, d) << std::endl;
//
//}
//
//void ex1_5_swap(char *ptr1, char *ptr2) {
//	char temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void ex1_5_swap(int *ptr1, int *ptr2) {
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void ex1_5_swap(double *ptr1, double *ptr2) {
//	double temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//void ex1_5() {
//
//	char a = 'a', b = 'b';
//	ex1_5_swap(&a, &b);
//	std::cout << a << ", " << b << std::endl;
//
//	int n1 = 10, n2 = 20;
//	ex1_5_swap(&n1, &n2);
//	std::cout << n1 << ", " << n2 << std::endl;
//
//	double db1 = 1.1, db2 = 2.2;
//	ex1_5_swap(&db1, &db2);
//	std::cout << db1 << ", " << db2 << std::endl;
//
//
//}