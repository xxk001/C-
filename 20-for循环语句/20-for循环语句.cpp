/*
forѭ�����
���ã�����ѭ��������ִ��ѭ�����
�﷨��for����ʼ���ʽ���������ʽ��ĩβѭ���壩{ ѭ����䣻}
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
������������
��������1��ʼ��100��������ָ�λ����7����������ʮλ����7�����߸�������7�ı�����
��ӡ�����ӣ���������ֱ�Ӵ�ӡ
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
			cout << "������" << endl;
		}
		else
		{
            cout << i << endl;
		}
		
	}

	system("pause");
	return 0;
}