//#include<iostream>
//#include<math.h>
//
////1. 다음의 클래스를 정의하시오(50점)
////클래스명 : MyPoint
////	멤버변수 : int x, int y
////	멤버함수 : void setXY(int a, int b) - 매개변수f로 x, y 멤버변수 값을 설정
////	int getX() - x 좌표 반환,
////	int getY() - y 좌표 반환
////	void showInfo() - x, y 출력
////	생성자 : 기본 생성자 - x, y 좌표를 각각 0으로 초기화
////	생성자(매개변수 2개) - 매개변수로 x, y 좌표를 초기화
////
////	2. 위 클래스로 두개의 인스턴스를 생성하고 좌표를 초기화한 후
////	두 점 사이의 거리를 구하시오(50점)
////	* 두 점 사이의 거리
////	<math.h> sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
////
////*배점 특이사항 : 1번은 멤버변수가 private으로 되어 있으면 50점, 그렇지 않으면 40점
////* 2번은 getX(), getY()로 좌표값을 받으면 50점, 그렇지 않으면 40점
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
//	cout << "두 점 사이의 거리 : " << dist << endl;
//
//	return 0;
//}