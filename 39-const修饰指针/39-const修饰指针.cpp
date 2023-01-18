/*
const修饰指针
三种情况：
	1、const修饰指针  --  常量指针
	2、const修饰常量  --  指针常量
	3、const既修饰指针，又修饰常量
*/

/*
	tips: 
	看 const 右侧 紧跟的是指针还是常量，
	右侧是指针：就是 常量指针 ，常量指针的值不可修改
	右侧是常量：就是 指针常量 ，指针常量的指向不可修改
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;

	//const修饰的是指针，指针指向可以修改，指针指向的值不可修改
	const int* p1 = &a;
	p1 = &b;  //TRUE
	// *p1 = 100;//FALSE

	//const修饰的是常量，指针指向不可修改，指针指向的值可以修改
	int* const p2 = &a;
	//p2 = &b;  //FALSE
	*p2 = 100;//TRUE

	//const既修饰指针又修饰常量
	const int* const p3 = &a;
	//p3=&b;   //FALSE
	//*p3=100; //FALSE

	system("pause");
	return 0;
}