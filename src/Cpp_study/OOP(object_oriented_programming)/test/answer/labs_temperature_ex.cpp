////실험실 온도를 한 시간 마다 측정해 하루 평균 온도를 계산하는 클래스
////* 클래스명 : Labs_Mng
////* 멤버변수 :
////	strLabsName: 실험실 호수를 저장할 문자열
////	arr_temperature : 24개의 온도를 저장할 수 있는 double 형 배열
////	avgTemperature : 평균 온도를 저장할 double형 변수
////	count : 현재 몇 번째 온도까지 측정했는지 저장할 int형 변수
////*멤버함수 :
////	setCurrentTemperature()
////	getAvgTemperature()
////	getCount()
////	showLabsInfo()
////*생성자 :
////	실험실 호수를 매개변수 받는 생성자
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//class Labs_Mng {
//
//private:
//	char strLabsName[30];
//	double arr_temperature[24];
//	double 	avgTemperature;
//	int count;
//
//public:
//	Labs_Mng(const char * str) {
//		strcpy(strLabsName, str);
//		count = 0;
//	}
//
//	void setCurrentTemperature(double t) {
//		arr_temperature[count++] = t;
//		avgTemperature = calcAverageTemperature();
//	}
//
//	double getAvgTemperature() {
//		return avgTemperature;
//	}
//
//	int getCount() {
//		return count;
//	}
//
//	void showLabsInfo() {
//
//		cout << strLabsName << "실험실 온도 체크 상태" << endl;
//		showAllTemperature();
//		cout << "온도 측정 횟수: " << count << ", 평균온도 : " << avgTemperature << endl;
//
//	}
//
//private:
//	void showAllTemperature() {
//		
//		for (int i = 0; i < count; i++) {
//			cout << arr_temperature[i] << ", ";
//		}
//
//		cout << endl;
//	}
//	double calcAverageTemperature() {
//
//		double sum = 0;
//		
//		for (int i = 0; i < count; i++) {
//			sum += arr_temperature[i];
//		}
//		avgTemperature = sum / count;
//
//		return avgTemperature;
//	}		
//
//};
//
//int labs_temperature() {
//
//	double temper;
//
//	Labs_Mng myLabs("Lab_영상처리");
//	
//	do {
//
//		cin >> temper;
//		if (temper == 3) {
//			break;
//		}
//
//		myLabs.setCurrentTemperature(temper);
//
//	} while (1);
//
//	myLabs.showLabsInfo();
//
//	return 0;
//}