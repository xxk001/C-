/*
结构体做函数参数
作用：将结构体作为参数向函数中传递
传递方式：	
	1、值传递
	2、地址传递
*/

/*
总结：如果不想修改主函数中的数据，用值传递
     反之，用地址传递
*/

#include "printStudent.h"

int main()
{
	student stu = { "张三",18,100 };
	//值传递
	printStudent1(stu);
	cout << "主函数中 姓名：" << stu.name << '\t' <<
		"年龄：" << stu.age << '\t' <<
		"分数：" << stu.score << endl;

	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << '\t' <<
		"年龄：" << stu.age << '\t' <<
		"分数：" << stu.score << endl;

	system("pause");
	return 0;
}