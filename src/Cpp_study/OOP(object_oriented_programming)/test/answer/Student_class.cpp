#ifndef STUDENT_H
#define STUDENT_H

class Student {

private:
	int id;
	int kor;
	int math;
	int eng;
	char name[30];
	double avg;
	int sum;

public:
	Student(int id, const char* s_name, int kor = -1, int math = -1, int eng = -1);

	int getKor() const;
	int getMath() const;
	int getEng() const;
	const char* getName() const;
	int getid() const;
	double getAvg();
	void showinfo();

	//void calcAvg();
	void SetKor(int);
	void SetMath(int);
	void SetEng(int);

};
#endif // !_STUDENT_H
