/*
结构体指针
作用：通过指针访问 结构体 中的成员
	1、利用操作符 -> 可以通过 结构体指针 访问 结构体属性
*/

/*
总结：结构体指针 可以通过 -> 操作符 来访问结构体中的成员（可修改成员参数）
*/

#include <iostream>
using namespace std;

//结构体定义
struct student
{
	//成员列表
	string name; //姓名
	int age;     //年龄
	int score;   //分数
};

int main()
{
	struct  student stu = { "张三",18,100 };

	struct student* p = &stu; //指针指向 结构体内 成员列表

	p->score = 80;//指针通过 -> 操作符可以 访问 并 修改 成员

	cout << "姓名：" << p->name << '\t' <<
		"年龄：" << p->age << '\t' <<
		"分数：" << p->score << endl;
			
	system("pause");
	return 0;
}