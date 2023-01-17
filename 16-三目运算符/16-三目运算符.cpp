/*
三目运算符
作用：通过三目运算符实现简单的判断
语法：表达式1 ？ 表达式2 ：表达式3
解释：如果表达式1的值为真，执行表达式二，返回表达式2的结果
	  如果表达式1的值为假，执行表达式三，返回表达式3的结果
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << "c = " << c << endl;

	//c++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}