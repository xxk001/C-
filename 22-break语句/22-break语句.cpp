/*
break���
���ã���������  ѡ��ṹ  ��  ѭ���ṹ
breakʹ�ã�
	1��������switch��������У������� ��ֹcase������switch
	2��������ѭ������У������� ������ǰѭ�����
	3��������Ƕ��ѭ���У�����������ڲ�ѭ�����
*/
#include <iostream>
using namespace std;

//1��switch���
/*
int main()
{
	cout << "��ѡ������ս�ĸ����Ѷȣ�" << endl;
	cout << "1����" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int num = 0;
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "�򵥸�������" << endl;
		break;
	case 2:
		cout << "�еȸ�������" << endl;
		break;
	case 3:
		cout << "���Ѹ�������" << endl;
		break;
	default:
		cout << "���������쳣" << endl;
		break;
	}
	system("pause");
	return 0;
 }

*/


//2��ѭ�����
/*
int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break;//����ѭ��
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}
*/


//3��Ƕ��ѭ��
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
			cout << "��" << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/
