/*
while循环语句
作用：满足循环条件，执行循环语句
语法：while（循环条件）{ 循环语句 }
解释：只要循环条件的结果为真，就执行循环语句
注意：在执行循环语句时，程序必须提供跳出循环的出口，否则出现死循环
*/
#include <iostream>
using namespace std;
#include <time.h>  //随机数
#include <stdlib.h>

/*
int main()
{
	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	system("pause");
	return 0;
}
*/

/*
案例：猜数字
描述：系统随机生成一个1-100之间的数字，玩家进行猜测，
如果 猜测，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并退出游戏
*/
int main()
{
	srand(time(0));
	int num = rand() % 100 +1;
	int guessNum = 0;
	int flag = 5;  //标志位，猜5次
	cout << "生成的随机数为：" << num << endl;

	while (flag--)
	{
		cout << "请输入您要猜的数：" << endl;
		cin >> guessNum;
		if (guessNum > num)
		{
			cout << "您猜的数大了" << endl;
		}
		else if (guessNum < num)
		{
			cout << "您猜的数小了" << endl;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}