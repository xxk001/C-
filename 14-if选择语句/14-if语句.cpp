/*
ifѡ�����
���ã�ִ���������������
	������ʽ��
		1�����и�ʽif���
		2�����и�ʽif���
		3����������if���
*/
#include <iostream>
using namespace std;

int main()
{
	//1������if���
	//����һ�������������������600����Ϊ����һ����ѧ������ӡ
	/*
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "���ķ���Ϊ��" << score << endl;

	if (score > 600)  //ע�⣺if�������ʽ��Ҫ�� �� ��
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	*/
	
	//2������if���
	/*
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "���ķ���Ϊ��" << score << endl;

	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	else
	{
		cout << "���ź���δ�ܿ���һ����ѧ" << endl;
	}
	*/
	
	//��������if���
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	
	cout << "���ķ���Ϊ��" << score << endl;

	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	else if (score > 500)
	{
		cout << "��ϲ�������˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ��������������ѧ" << endl;
	}
	else
	{
		cout << "���ź���δ���ϱ���" << endl;
	}

	system("pause");
	return 0;
}