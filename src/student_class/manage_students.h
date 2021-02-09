#ifndef MANAGESTUDENTS
#define MANAGESTUDENTS
#include "student.h"

class ManageStudents {
private:
	Student* arrStudents[16];
	int count;

public:
	ManageStudents();
	~ManageStudents();

	const int MAX_COUNT = 16;
	void putStudent(Student& std);
	void putStudent(int id, char* name);
	void showAllStudents();

	void setStudentKor(int kor);
	void setStudentEng(int eng);
	void setStudentMath(int math);

	void setStudentScore(int index, int kor, int eng, int math);
	Student getStudent(int id);
	Student getStudent(char* strName);
};
#endif