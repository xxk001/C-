/*
函数的调用
功能：使用定义好的函数
语法：函数名（参数）

总结：函数定义里小括号内称为 形参，函数调用时传入的参数称为 实参
*/
#include <iostream>
using namespace std;
//示例

//函数定义
int add(int num1, int num2)//定义中的num1，num2称为形式参数，简称形参
{
	return num1 + num2;
}

int main()
{
	int a = 10;
	int b = 10;
	//调用add函数
	int sum = add(a, b);//调用时的a,b,称为实际参数，简称实参
	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add(a, b);
	cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}