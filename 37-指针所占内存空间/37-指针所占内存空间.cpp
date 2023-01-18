/*
指针所占内存空间
	问：指针也是一种数据类型，那么这种数据类型占用多少内存空间？
	所有的指针类型在 64位操作系统下是 8 个字节
	所有的指针类型在 32位操作系统下是 4 个字节
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	
	int* p;
	p = &a; //指针指向数据 a 的地址  

	cout << *p << endl; // * 解引用  ==>  *p = a 
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	system("pause");
	return 0;
}

