/*
whileѭ�����
���ã�����ѭ��������ִ��ѭ�����
�﷨��while��ѭ��������{ ѭ����� }
���ͣ�ֻҪѭ�������Ľ��Ϊ�棬��ִ��ѭ�����
ע�⣺��ִ��ѭ�����ʱ����������ṩ����ѭ���ĳ��ڣ����������ѭ��
*/
#include <iostream>
using namespace std;
#include <time.h>  //�����
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
������������
������ϵͳ�������һ��1-100֮������֣���ҽ��в²⣬
��� �²⣬��ʾ������ֹ�����С������¶Թ�ϲ���ʤ�������˳���Ϸ
*/
int main()
{
	srand(time(0));
	int num = rand() % 100 +1;
	int guessNum = 0;
	int flag = 5;  //��־λ����5��
	cout << "���ɵ������Ϊ��" << num << endl;

	while (flag--)
	{
		cout << "��������Ҫ�µ�����" << endl;
		cin >> guessNum;
		if (guessNum > num)
		{
			cout << "���µ�������" << endl;
		}
		else if (guessNum < num)
		{
			cout << "���µ���С��" << endl;
		}
		else
		{
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}