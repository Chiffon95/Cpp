
#ifndef STUDENT
#define STUDENT

class Student {

private:
	int id;
	char name[30];
	int kor;
	int math;
	int eng;
	double ave;
	int sum;

public:
	Student();
	Student(int id, const char* s_name, int kor = -1, int math = -1, int eng = -1);
	const char* getName() const;
	int getid() const;
	int getKor() const;
	int getEng() const;
	int getMath() const;
	double getAve();
	double calAve();
	void SetKor(int);
	void SetEng(int);
	void SetMath(int);
	void setScore(int, int, int);
	void showInfo() const;

};
#endif // !_STUDENT
