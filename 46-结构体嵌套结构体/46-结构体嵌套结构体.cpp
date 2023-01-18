/*
结构体嵌套结构体
作用：结构体中的成员 可以是 另一个结构体

例：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
*/

/*
总结：在结构体中可以定义另一个结构体作为成员，用来解决实际问题
*/

#include <iostream>
using namespace std;
 
//学生结构体定义
struct student
{
	//成员列表
	string name; //名字
	int age;     //年龄
	int score;   //分数
};

//老师结构体定义
struct teacher
{
	//成员列表
	int id;  //职工编号
	string name;//老师姓名
	int age;//老师年龄
	struct student stu;//子结构体  学生
};

int main()
{
	struct teacher t1; //创建 老师结构体变量t1
	t1.id = 0001;
	t1.name = "老许";
	t1.age = 24;

	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号：" << t1.id << '\t' <<
		"姓名：" << t1.name << '\t' <<
		"年龄：" << t1.age << endl;

	cout << "辅导学员 姓名：" << t1.stu.name << '\t' <<
		"年龄：" << t1.stu.age << '\t' <<
		"分数：" << t1.stu.score << endl;

	system("pause");
	return 0;
}