#include <iostream>
#include <string.h>
#include "Student.h"
using namespace std;

Student::Student(int id, const char* str, int kor, int eng, int math) {
	strcpy(name, str);
	this->id = id;
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	ave = -1;
}

const char* Student::getName() const {
	return name;
}
int Student::getid() const {
	return id;
}
int Student::getKor() const {
	return kor;
}
int Student::getEng() const {
	return eng;
}
int Student::getMath() const {
	return math;
}
double Student::getAve() {
	if (ave < 0) {
		ave = calAve();
	}

	return ave;
}
double Student::calAve() {
	if (kor >= 0 && eng >= 0 && math >= 0) {
		this->ave = ((double)kor + eng + math) / 3;
		return ave;
	}
	else {
		cout << "Error -> Enter All score!";
		return -1;
	}
}
void Student::SetKor(int kor) {
	this->kor = kor;
}
void Student::SetEng(int math) {
	this->math = math;
}
void Student::SetMath(int eng) {
	this->eng = eng;
}
void Student::setScore(int k, int e, int m) {
	kor = k;
	eng = e;
	math = m;
}
void Student::showInfo() const {
	cout << "Id : " << id << endl;
	cout << "Name : " << name << endl;
	cout << "Koran score : " << kor << endl;
	cout << " English score : " << eng << endl;
	cout << "Math score : " << math << endl;
	cout << "Averae score : " << ave << endl << endl;
}