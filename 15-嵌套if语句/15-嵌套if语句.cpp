/*
Ƕ��if���
������
	1����ʾ�û�����һ���߿����������ݷ������������ж�
	2�������������600������һ��������500���϶���������400��������������δ���ϱ���
	3����һ�������У��������700�����뱱�󣬴���650�����廪������600�����˴�
*/
#include <iostream>
using namespace std;

/*
int main()
{
	int score = 0;
	cout << "������߿�������" << endl;
	cin >> score;

	cout << "���ĸ߿�����Ϊ: " << endl;

	if (score > 600)
	{
		cout << "��ϲ������һ��" << endl;
		if (score > 700)
		{
			cout << "��ϲ�����ϱ���" << endl;
		}
		else if (score > 650)
		{
			cout << "��ϲ�������廪" << endl;
		}
		else
		{
			cout << "��ϲ�������˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�����϶���" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ����������" << endl;
	}
	else
	{
		cout << "���ź���δ�ܿ��ϱ���" << endl;
	}

	system("pause");

	return 0;

}
*/

/*
��ϰ��������ֻС�������
	����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС������
*/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������С��a�����أ�" << endl;
	cin >> a;
	cout << "������С��b�����أ�" << endl;
	cin >> b;
	cout << "������С��c�����أ�" << endl;
	cin >> c;

	if (a > b)
	{
		if (a > c)
		{
			cout << "С��a����" << endl;
		}
		else 
		{
			cout << "С��c����" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "С��b����" << endl;
		}
		else
		{
			cout << "С��c����" << endl;
		}
	}

	system("pause");
	return 0;
}