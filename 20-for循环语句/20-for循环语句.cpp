/*
for循环语句
作用：满足循环条件，执行循环语句
语法：for（起始表达式；条件表达式；末尾循环体）{ 循环语句；}
*/
#include <iostream>
using namespace std;

/*
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}

	system("pause");
}
*/

/*
案例：敲桌子
描述：从1开始到100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，
打印敲桌子，其余数字直接打印
*/
int main()
{
	int geWei = 0;
	int shiWei = 0;

	for (int i = 1; i <= 100; i++)
	{
		geWei = i % 10;
		shiWei = i / 10 % 10;
		if (geWei == 7 || shiWei == 7 || i % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
            cout << i << endl;
		}
		
	}

	system("pause");
	return 0;
}