/*
Switch���
���ã�ִ�ж�������֧���
�﷨��
	switch(���ʽ)
	{
		case ���1��ִ����䣻break��
		case ���2��ִ����䣻break��
		case ���3��ִ����䣻break��
		...
		default��ִ����䣻break��
	}
ע�⣺
	1��Switch����б��ʽ����ֻ�������ͻ��ַ���
	2��case�������û��break����ô�����һֱ����ִ��
�ܽ᣺��if�������㣬���ڶ������ж�ʱ��Switch�Ľṹ������ִ��Ч�ʸߣ��������ж�����
*/
#include <iostream>
using namespace std;

int main()
{
	//����þ�����
	/*
	10-9  ����
	8-7   �ǳ���
	6-5   һ��
	5������ ��Ƭ
	*/

	int score = 0;
	cout << "����þ����֣�" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}