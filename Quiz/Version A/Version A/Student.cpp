#include "Student.h"
#include<iostream>
#include<cstring>;

using namespace std;

Student::Student() {
	studentId = 0;
	strcpy_s(studentName,"");
	markOOC =0;
	markSPM = 0;
	markISDM = 0;
}

Student::Student(int sid, const char sname[], int ooc, int spm, int isdm) {
	studentId = sid;
	strcpy_s(studentName, sname);
	markOOC = ooc;
	markSPM = spm;
	markISDM = isdm;
}

void Student::setStudentDetails(int sid, const char sname[]) {
	studentId = sid;
	strcpy_s(studentName, sname);
}

void Student::setMarksOOC(int ooc) {
	markOOC = ooc;
}

void Student::setMarksSPM(int spm) {
	markSPM = spm;
}

void Student::setMarksISDM(int isdm) {
	markISDM = isdm;
}

int Student::getMarksOOC() {
	return markOOC;
}

int Student::getMarksSPM() {
	return markSPM;
}

int Student::getMarksISDM() {
	return markISDM;
}

Student::~Student() {
	cout << "Student removed" << endl;
}
