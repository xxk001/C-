/*
一维数组定义的三种方式：
	1、数据类型  数组名【数组长度】；
	2、数据类型  数组名【数组长度】= {值1，值2...}；
	3、数据类型  数组名【 】= {值1，值2，...}；
数组中下标是从 0 开始索引的
*/
#include <iostream>
using namespace std;

int main()
{
	//方式1
	//1、数据类型  数组名【数组长度】；
	int score1[10];

	//利用下标赋值
	score1[0] = 100;
	score1[1] = 95;
	score1[2] = 85;

	//利用下标输出
	cout << score1[0] << endl;
	cout << score1[1] << endl;
	cout << score1[2] << endl;

	//方式2
	//2、数据类型  数组名【数组长度】 = { 值1，值2... }；
	//如果{ } 内不足 10 个数据，用 0 补全
	int score2[10] = { 2,1,4,6,9,5,7,3,8,0 };

	//逐个输出太麻烦，采用循环输出
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}


	//方式3
	//3、数据类型  数组名【 】= {值1，值2，...}；
	int score3[] = { 1,2,5,4,6,3,8,9,7,0};
	for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}

	system("pause");
	return 0;
}