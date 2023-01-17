/*
逻辑运算符
作用：用于根据表达式的值返回真值或假值
	！  &&  ||
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << !a << endl;
	cout << !a << endl;

	int b = 10;
	cout << (a && b) << endl;
	cout << (a || b) << endl;

	b = 0;
	cout << (a && b) << endl;
	cout << (a || b) << endl;

	a = 0;
	cout << (a && b) << endl;
	cout << (a || b) << endl;

	system("pause");

	return 0;
}