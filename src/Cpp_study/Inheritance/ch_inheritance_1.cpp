//#include <iostream>
//using namespace std;
//
//class MyCar {
//public:
//	int dorNum;
//	char color[30];
//
//public:
//	MyCar() {
//
//	}
//
//	MyCar(int num, const char* str) {
//		dorNum = num;
//		strcpy(color, str);
//	}
//
//	void showCarInfo() {
//		cout << "문 개수:" << dorNum << ", 자동차 색깔:" << color << endl;
//	}
//
//};
//
//class MySunRoofCar : public MyCar {
//
//public:
//	bool bSunRoof;
//
//	MySunRoofCar(int door,const char* str, bool bSunR){
//		dorNum = door;
//		strcpy(color, str);
//		bSunR = bSunR;
//	}
//
//	void showCarInfo() {
//		cout << "Door Count : " << dorNum << ", Car Color : " << color << endl;
//
//		if (bSunRoof) {
//			cout << "SunRoof -> O" << endl;
//		}
//	}
//};
//
//
//int main() {
//	MyCar car1(4, "white");
//	car1.showCarInfo();
//
//	MyCar car2(3, "red");
//	car2.showCarInfo();
//
//	MySunRoofCar car3(4, "black", true);
//	car3.showCarInfo();
//
//	return 0;
//}