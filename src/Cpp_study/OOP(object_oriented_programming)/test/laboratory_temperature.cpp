//#include <iostream>
//#include <string.h>
//using namespace std;
//
//#define LABNAMESPACE 20
//#define DAYTIME 24
//#define LABSCNT 3
//class Lab_Temperature {
//
//private:
//	char strLabName[LABNAMESPACE];
//	double arr_temperature[DAYTIME];
//	double avgTemperature;
//	int count;
//
//	void calAvgTemperature() {
//		double temSum = 0;
//		for (int i = 0;i <= count + 1;i++) {
//			temSum += arr_temperature[i];
//		}
//		avgTemperature = temSum / count;
//	}
//public:
//	Lab_Temperature() {
//		strcpy(strLabName, "420");
//		for (int i = 0;i < DAYTIME;i++) {
//			arr_temperature[i] = 0;
//		}
//		avgTemperature = 0;
//		count = 0;
//	}
//	void setCurrentTemperature(double* temperature) {
//		arr_temperature[count] = *temperature;
//		cout << "Entered temperature : " << *temperature << endl << endl;
//		count++;
//
//		if (count >= DAYTIME) {
//			cout << "Count is over 24!!!" << endl << endl;
//			count = 0;
//		}
//		calAvgTemperature();
//	}
//	void getCount() {
//		cout << "Count number : " << count << endl << endl;
//	}
//	void showLabsInfo(const char* str) {
//		if (count == 0) { //Error - when count '0'
//			cout << "No Data!!!" << endl << endl;
//		}
//		else {
//			for (int i = 0;i < LABSCNT;i++) {
//				if (*str != strLabName[i]) continue;
//
//				cout << "Lab name : " << strLabName << endl;
//				cout << "Lab current temperature : " << arr_temperature[count - 1] << endl;
//				cout << "Lab average temperature : " << avgTemperature << endl;
//				cout << "Count : " << count << endl << endl;
//			}
//		}
//	}
//};
//void ex_oop_0() {
//	char labName[LABNAMESPACE];
//	double currentTemperature;
//	int operation = 0;
//	Lab_Temperature Laboratory1; // need to add more array
//
//	do {
//		cout << "Labs temeprature check (enter '-1' is out)" << endl;
//		cout << "1 : Show Lab Info, 2 :  Set temperature, 3 : Get Count" << endl;
//		cin >> operation;
//
//		if (operation == -1) break;
//
//		switch (operation) {
//		case 1:
//			cout << "Enter Laboratory name : ";
//			cin >> labName;
//			Laboratory1.showLabsInfo(labName);
//			break;
//		case 2:
//			cout << "Enter Current Temerature : ";
//			cin >> currentTemperature;
//			Laboratory1.setCurrentTemperature(&currentTemperature);
//			break;
//		case 3:
//			Laboratory1.getCount();
//			break;
//		default:
//			cout << "Wrong Number!!!" << endl << endl;
//			break;
//		}
//	} while (1);
//}