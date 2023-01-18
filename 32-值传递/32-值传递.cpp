/*
值传递
	1、值传递 就是 函数调用时 实参 将 数值 传入给 形参
	2、值传递时，如果 形参 发生，并不会影响 实参
*/
#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	cout << "main中的 a = " << a << endl;
	cout << "main中的 b = " << b << endl;

	system("pause");
	return 0;
}

//总结：值传递时，形参修饰不了实参