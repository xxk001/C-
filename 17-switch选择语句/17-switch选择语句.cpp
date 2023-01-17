/*
Switch语句
作用：执行多条件分支语句
语法：
	switch(表达式)
	{
		case 结果1：执行语句；break；
		case 结果2：执行语句；break；
		case 结果3：执行语句；break；
		...
		default：执行语句；break；
	}
注意：
	1、Switch语句中表达式类型只能是整型或字符型
	2、case里面如果没有break，那么程序会一直向下执行
总结：与if语句想必你，对于多条件判断时，Switch的结构清晰，执行效率高，但不能判断区间
*/
#include <iostream>
using namespace std;

int main()
{
	//请给该剧评分
	/*
	10-9  经典
	8-7   非常好
	6-5   一般
	5分以下 烂片
	*/

	int score = 0;
	cout << "请给该剧评分：" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	system("pause");
	return 0;
}