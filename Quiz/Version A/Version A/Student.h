#pragma once
class Student
{
private:
	int studentId;
	char studentName[20];
	int markOOC;
	int markSPM;
	int markISDM;

public:
	Student();
	Student(int sid, const char sname[], int ooc, int spm, int isdm);
	void setStudentDetails(int sid, const char sname[]);
	void setMarksOOC(int ooc);
	void setMarksSPM(int spm);
	void setMarksISDM(int isdm);
	int getMarksOOC();
	int getMarksSPM();
	int getMarksISDM();
	~Student();
};

