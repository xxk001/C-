/*
break语句
作用：用于跳出  选择结构  或  循环结构
break使用：
	1、出现在switch条件语句中，作用是 终止case并跳出switch
	2、出现在循环语句中，作用是 跳出当前循环语句
	3、出现在嵌套循环中，跳出最近的内层循环语句
*/
#include <iostream>
using namespace std;

//1、switch语句
/*
int main()
{
	cout << "请选择您挑战的副本难度：" << endl;
	cout << "1、简单" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;

	int num = 0;
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "简单副本开启" << endl;
		break;
	case 2:
		cout << "中等副本开启" << endl;
		break;
	case 3:
		cout << "困难副本开启" << endl;
		break;
	default:
		cout << "副本开启异常" << endl;
		break;
	}
	system("pause");
	return 0;
 }

*/


//2、循环语句
/*
int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break;//跳出循环
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}
*/


//3、嵌套循环
/*
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == 3)
			{
				break;
			}
			cout << "☆" << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/
