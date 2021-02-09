//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class OOP_0_Car {
//	//class start
//public:
//	char color[30];
//	int door;
//
//	void showCarInfo() {
//		cout << "Car color : " << color << ", Car door number : " << door << endl;
//	}
//};
//void func_oop_0() {
//	//class start
//
//	OOP_0_Car c1;
//	strcpy(c1.color, "Blue");
//	c1.door = 4;
//	c1.showCarInfo();
//
//	OOP_0_Car c2;
//	strcpy(c2.color, "Red");
//	c2.door = 2;
//	c2.showCarInfo();
//}
//#define CARDCNT 52
//class OOP_1_Card {
//	//class practice 1
//public:
//	char shape[20];
//	int number;
//
//	void showCardInfo() {
//		cout << "Car shape : " << shape << ", Card number : " << number << endl;
//	}
//	void inputCardInfo() {
//
//	}
//};
//void func_oop_1() {
//	//class practice 1
//	OOP_1_Card card[CARDCNT];
//
//	for (int i = 0;i < CARDCNT;i++) {
//		cout << "[" << i + 1 << "]. Enter card shape : ";
//		cin >> card[i].shape;
//		cout << "[" << i + 1 << "]. Enter card number : ";
//		cin >> card[i].number;
//	}
//
//	for (int i = 0;i < CARDCNT;i++) {
//		card[i].showCardInfo();
//	}
//}
//class OOP_2_Car {
//	//private & public + generators
//private:
//	char color[20];
//	int door;
//	char user[30];
//
//public:
//	OOP_2_Car() {
//		strcpy(color, "White");
//		door = 4;
//	}
//	OOP_2_Car(const char*str,int num) {
//		strcpy(color, str);
//		door = num;
//	}
//	void setCarInfo(const char* str, int a) {
//		strcpy(color, str);
//		door = a;
//	}
//	void showCarInfo() {
//		cout << "Car color : " << color << ", Car door : " << door << endl;
//	}
//};
//void func_oop_2() {
//	//private & public + generators
//	OOP_2_Car mycar1;
//	mycar1.showCarInfo();
//
//
//	OOP_2_Car mycar2("Red", 3);
//	mycar2.showCarInfo();
//}
////defined CARDCNT 52
//#define CARDPERCNT 13
//class OOP_3_MyCard {
//	//private & public + generators
//private:
//	int cardNum;
//	char cardShape[20];
//
//public:
//	OOP_3_MyCard() {
//		cardNum = 1;
//		strcpy(cardShape, "Diamond");
//	}
//	OOP_3_MyCard(int a, const char* str) {
//		cardNum = a;
//		strcpy(cardShape, str);
//	}
//	void showCardInfo() {
//		cout << "Card number : " << cardNum << ", Card Shape : " << cardShape << endl;
//	}
//	void shuffleCard() {
//
//	}
//};
//void func_oop_3() {
//	//private & public + generators
//	OOP_3_MyCard card1;
//	card1.showCardInfo();
//
//	OOP_3_MyCard card2(7, "Heart");
//	card2.showCardInfo();
//}
//class OOP_4_MyCar {
//private:
//	int dorNum;
//	char color[30];
//
//public:
//	OOP_4_MyCar(int num, const char* str) {
//		dorNum = num;
//		strcpy(color, str);
//	}
//
//	int getDoorNum() const {
//		//dorNum = 3;
//		return dorNum;
//	}
//
//	void showCarInfo() {
//		cout << "Door number : " << dorNum << ", Car color : " << color << endl;
//	}
//};
