/*
嵌套if语句
案例：
	1、提示用户输入一个高考分数，根据分数做出以下判断
	2、分数如果大于600，考上一本，大于500考上二本，大于400考上三本，其余未考上本科
	3、在一本分数中，如果大于700，考入北大，大于650考入清华，大于600考入人大
*/
#include <iostream>
using namespace std;

/*
int main()
{
	int score = 0;
	cout << "请输入高考分数：" << endl;
	cin >> score;

	cout << "您的高考分数为: " << endl;

	if (score > 600)
	{
		cout << "恭喜您考上一本" << endl;
		if (score > 700)
		{
			cout << "恭喜您考上北大" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜您考上清华" << endl;
		}
		else
		{
			cout << "恭喜您考上人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上三本" << endl;
	}
	else
	{
		cout << "很遗憾您未能考上本科" << endl;
	}

	system("pause");

	return 0;

}
*/

/*
练习案例：三只小猪称体重
	有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重
*/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入小猪a的体重：" << endl;
	cin >> a;
	cout << "请输入小猪b的体重：" << endl;
	cin >> b;
	cout << "请输入小猪c的体重：" << endl;
	cin >> c;

	if (a > b)
	{
		if (a > c)
		{
			cout << "小猪a最重" << endl;
		}
		else 
		{
			cout << "小猪c最重" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "小猪b最重" << endl;
		}
		else
		{
			cout << "小猪c最重" << endl;
		}
	}

	system("pause");
	return 0;
}