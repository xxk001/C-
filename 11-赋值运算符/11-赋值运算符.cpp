/*
赋值运算符
作用：用于将表达式的值赋给变量
	=，+=，-=，*=，/=，%=
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	a += 2;
	cout << "a = " << a << endl;

	a -= 2;
	cout << "a = " << a << endl;

	a *= 2;
	cout << "a = " << a << endl;

	a /= 2;
	cout << "a = " << a << endl;

	a %= 2;
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}