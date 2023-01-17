/*
布尔类型
作用：布尔数据类型代表 真 或 假 的值
bool类型值：
	true  --  真 （1）
	false --  假 （0）
bool类型占 1个字节 大小
*/
#include <iostream>
using namespace std;

int main()
{
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	cout << "size of bool = " << sizeof(bool) << endl;

	system("pause");
	return 0;
}