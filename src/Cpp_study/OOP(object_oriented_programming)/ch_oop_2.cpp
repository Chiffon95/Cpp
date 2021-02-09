//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//class oop_2_0_Seller {
//	int price;
//	int numOfProdut;
//	int myMoney;
//public:
//	oop_2_0_Seller(int price, int num, int money) : price(price), numOfProdut(numOfProdut), myMoney(myMoney)
//	{};
//	void ShowSalesResult() const {
//		cout << "Product Price :" << price << endl;
//		cout << "Number Of Product : " << numOfProdut << endl;
//		cout << "My Money : " << myMoney << endl << endl;
//	}
//};
//class oop_2_1_Person {
//private:
//	char* name;
//	int age;
//public:
//	oop_2_1_Person(const char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void ShowPersonInfo() const {
//		cout << "Name : " << name << endl;
//		cout << "Age : " << age << endl;
//	}
//	~oop_2_1_Person() {
//		delete[]name;
//		cout << "Called Destructor!!!" << endl;
//	}
//};
//void oop_2_1() {
//	oop_2_1_Person man1("Jennifer", 29);
//	oop_2_1_Person man2("Sunny", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//}
//
//int main() {
//	oop_2_1();
//
//	return 0;
//}