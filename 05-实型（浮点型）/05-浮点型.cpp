/*
实型（浮点型）
作用：用于 表示小数
浮点型变量：
	1、单精度float
	2、双精度double
区别：表示的有效数字范围不同
数据类型	占用空间	有效数字范围
float		4字节		7位有效数字
double		8字节		15-16位有效数字
*/

#include <iostream>
using namespace std;

int main() {
	float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float sizeof = " << sizeof(float) << endl;
	cout << "double sizeof = " << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;//3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-1;//3 * 0.1 ^ 2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}