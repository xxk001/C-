#include "printStudent.h"

//ֵ����
void printStudent1(student stu)
{
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << '\t' <<
		"���䣺" << stu.age << '\t' <<
		"������" << stu.score << endl;
}

//��ַ����
void printStudent2(student* stu)
{
	stu->age = 28;
	cout << "�Ӻ����� ������" << stu->name << '\t' <<
		"���䣺" << stu->age << '\t' <<
		"������" << stu->score << endl;
}