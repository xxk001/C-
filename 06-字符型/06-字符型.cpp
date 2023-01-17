/*
字符型
作用：字符型变量用于 显示单个字符
语法：char ch = 'a';
注意：
	1、在显示字符型变量时，用单引号将字符括起来，不要用双引号
	2、单引号内只能有一个字符，不可以是字符串
C和C++中字符型变量只占用 1个字节
字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单页
*/

#include <iostream>
using namespace std;

int main()
{
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(ch) << endl;

	cout << (int)ch << endl;//查看字符a对应的ASCII码
	ch = 97;//可以直接用ASCII给字符型变量赋值 
	cout << ch << endl;

	system("pause");
	return 0;
}