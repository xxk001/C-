/*
结构体中const使用场景
作用：用const来防止误操作
*/
#include "const01.h"

int main()
{
	student stu = { "张三",18,100 };

	printStudent(&stu);

	system("pause");
	return 0;
}