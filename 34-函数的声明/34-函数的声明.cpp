/*
函数的声明
作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义
	1、函数的 声明 可以多次，但函数的 定义只能有一次
*/
#include <iostream>
using namespace std;

//示例
//声明
int max(int a, int b);
int max(int a, int b);
//定义
int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 100;
	int b = 200;

	cout << max(a, b) << endl;

	return 0;
}
