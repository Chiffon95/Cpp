////����� �µ��� �� �ð� ���� ������ �Ϸ� ��� �µ��� ����ϴ� Ŭ����
////* Ŭ������ : Labs_Mng
////* ������� :
////	strLabsName: ����� ȣ���� ������ ���ڿ�
////	arr_temperature : 24���� �µ��� ������ �� �ִ� double �� �迭
////	avgTemperature : ��� �µ��� ������ double�� ����
////	count : ���� �� ��° �µ����� �����ߴ��� ������ int�� ����
////*����Լ� :
////	setCurrentTemperature()
////	getAvgTemperature()
////	getCount()
////	showLabsInfo()
////*������ :
////	����� ȣ���� �Ű����� �޴� ������
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
//		cout << strLabsName << "����� �µ� üũ ����" << endl;
//		showAllTemperature();
//		cout << "�µ� ���� Ƚ��: " << count << ", ��տµ� : " << avgTemperature << endl;
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
//	Labs_Mng myLabs("Lab_����ó��");
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