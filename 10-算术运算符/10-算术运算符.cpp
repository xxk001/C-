/*
算术运算符
作用：用于处理四则运算
	+，-，*，/，%，++，--
1、除法、取模运算中，除数不能为 0
2、小数不可以取模
*/
#include <iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	cout << a1 % b1 << endl;
}