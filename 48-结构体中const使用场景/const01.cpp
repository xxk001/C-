#include "const01.h"

//constʹ�ó���
void printStudent(const student *stu)
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ���� const����
	cout << "������" << stu->name << '\t' <<
		"���䣺" << stu->age << '\t' <<
		"������" << stu->score << endl;
}