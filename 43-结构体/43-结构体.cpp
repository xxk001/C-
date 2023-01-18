/*
结构体
语法：struct 结构体名 { 结构体成员列表 }；
通过结构体创建变量的三种方式：
	1、struct 结构体名 变量名
	2、struct 结构体名 变量名 = {成员1值， 成员2值。。。}
	3、定义结构体时，顺便创建变量
*/

/*
总结：
	1、定义结构体时的关键字是 struct ，不可省略
	2、创建结构体变量时，关键字 struct 可以省略
	3、结构体变量利用 操作符 “."访问成员
*/

#include <iostream>
using namespace std;

//结构体定义
struct student
{
	//成员列表
	string name;//姓名
	int age;   //年龄
	int score; //分数
}stu3;		//结构体变量创建方式 3

int main()
{
	//结构体变量创建方式 1
	struct student stu1;  //struct 关键字可以省略

	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名:" << stu1.name  << "年龄：" << stu1.age  << "分数：" << stu1.score  << endl;

	//结构体变量创建方式 2
	struct student stu2 = { "李四",19,60 };
	
	cout << "姓名：" << stu2.name  << "年龄：" << stu2.age  << "分数：" << stu2.score  << endl;


	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;

	cout << "姓名：" << stu3.name  << "年龄：" << stu3.age  << "分数：" << stu3.score  << endl;

	system("pause");
	return 0;
}