/*
函数
定义：
	1、返回值类型
	2、函数名
	3、参数列表
	4、函数体语句
	5、return 表达式
语法：
	返回值类型 函数名 （参数列表）
	{
		函数体语句

		return 表达式
	}
	1、返回值类型：一个函数可以返回一个值。在函数定义中
	2、函数名：给函数起个名称
	3、参数列表：使用该函数时，传入的数据
	4、函数体语句：花括号内的代码，函数内需要执行的语句
	5、return 表达式：和返回值类型挂钩，函数执行完后，返回相应的数据
*/

/*
示例：定义一个加法函数，实现两数相加
*/
#include <iostream>
using namespace std;

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int x, y;
	cout << "请输入第一个数：" << endl;
	cin >> x;
	cout << "请输入第二个数：" << endl;
	cin >> y;

	cout << "两数之和为：" << add(x, y) << endl;

	system("pause");
	return 0;
 }