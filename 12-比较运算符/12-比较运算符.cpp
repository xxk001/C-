/*
比较运算符
作用：用于表达式的比较，并返回一个真值或假值
	==，！=，<，>，<=，>=，
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a <= b) << endl;
	cout << (a >= b) << endl;

	system("pause");

	return 0;
}