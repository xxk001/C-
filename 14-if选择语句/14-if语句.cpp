/*
if选择语句
作用：执行满足条件的语句
	三种形式：
		1、单行格式if语句
		2、多行格式if语句
		3、多条件的if语句
*/
#include <iostream>
using namespace std;

int main()
{
	//1、单行if语句
	//输入一个分数，如果分数大于600，视为考上一本大学，并打印
	/*
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您的分数为：" << score << endl;

	if (score > 600)  //注意：if条件表达式后不要加 ； 号
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	*/
	
	//2、多行if语句
	/*
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您的分数为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else
	{
		cout << "很遗憾您未能考上一本大学" << endl;
	}
	*/
	
	//多条件的if语句
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	
	cout << "您的分数为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了三本大学" << endl;
	}
	else
	{
		cout << "很遗憾您未考上本科" << endl;
	}

	system("pause");
	return 0;
}