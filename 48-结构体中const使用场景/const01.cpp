#include "const01.h"

//const使用场景
void printStudent(const student *stu)
{
	//stu->age = 100; //操作失败，因为加了 const修饰
	cout << "姓名：" << stu->name << '\t' <<
		"年龄：" << stu->age << '\t' <<
		"分数：" << stu->score << endl;
}