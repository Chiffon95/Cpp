//#include<iostream>
//#include<math.h>
//
////1. ������ Ŭ������ �����Ͻÿ�(50��)
////Ŭ������ : MyPoint
////	������� : int x, int y
////	����Լ� : void setXY(int a, int b) - �Ű�����f�� x, y ������� ���� ����
////	int getX() - x ��ǥ ��ȯ,
////	int getY() - y ��ǥ ��ȯ
////	void showInfo() - x, y ���
////	������ : �⺻ ������ - x, y ��ǥ�� ���� 0���� �ʱ�ȭ
////	������(�Ű����� 2��) - �Ű������� x, y ��ǥ�� �ʱ�ȭ
////
////	2. �� Ŭ������ �ΰ��� �ν��Ͻ��� �����ϰ� ��ǥ�� �ʱ�ȭ�� ��
////	�� �� ������ �Ÿ��� ���Ͻÿ�(50��)
////	* �� �� ������ �Ÿ�
////	<math.h> sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
////
////*���� Ư�̻��� : 1���� ��������� private���� �Ǿ� ������ 50��, �׷��� ������ 40��
////* 2���� getX(), getY()�� ��ǥ���� ������ 50��, �׷��� ������ 40��
//using namespace std;
//
//class MyPoint {
//private:
//	int x;
//	int y;
//
//public:
//	MyPoint() {
//		x = 0; y = 0;
//	}
//
//	MyPoint(int a, int b) {
//		x = a; y = b;
//	}
//
//	void setXY(int a, int b) {
//		x = a; y = b;
//	}
//
//	int getX() { return x; }
//	int getY() { return y; }
//
//	void showInfo() {
//		cout << x << ", " << y << endl;
//	}
//};
//
//int ch4_ex() {
//
//	MyPoint p1(10, 30);
//	MyPoint p2(5, 40);
//
//	double dist = sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) +
//		(p1.getY() - p2.getY()) * (p1.getY() - p2.getY()));
//
//	cout << "point 1 : "; p1.showInfo(); cout << endl;
//	cout << "point 2 : "; p2.showInfo(); cout << endl;
//
//	cout << "�� �� ������ �Ÿ� : " << dist << endl;
//
//	return 0;
//}