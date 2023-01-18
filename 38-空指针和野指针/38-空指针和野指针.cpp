/*
空指针和野指针
空指针：指针变量指向内存中编号为 0 的空间
用途：初始化指针变量
注意：空指针指向的内存 是不可以访问的
*/

/*
总结：空指针和野指针 都不是我们申请的空间，因此不可访问
*/
#include <iostream>
using namespace std;

//空指针
/*
int main()
{
	//指针变量 p 指向内存地址编号为 0 的空间
	int* p = NULL;

	//访问空指针报错
	//内存编号 0~255为系统占用内存，不允许用户访问
	cout << *p << endl;

	system("pause");
	return 0;
}
*/

//野指针：指针变量指向非法的内存空间
//野指针
/*
int main()
{
	//指针变量 p 指向内存地址编号为 0x1100 的空间
	int* p = (int*)0x1100;

	//访问野指针报错
	cout << *p << endl;

	system("pause");
	return 0;
}
*/
