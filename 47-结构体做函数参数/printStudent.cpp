#include "printStudent.h"

//值传递
void printStudent1(student stu)
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << '\t' <<
		"年龄：" << stu.age << '\t' <<
		"分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student* stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << '\t' <<
		"年龄：" << stu->age << '\t' <<
		"分数：" << stu->score << endl;
}