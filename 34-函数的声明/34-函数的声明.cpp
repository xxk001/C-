/*
����������
���ã����߱������������Ƽ���ε��ú�����������ʵ��������Ե�������
	1�������� ���� ���Զ�Σ��������� ����ֻ����һ��
*/
#include <iostream>
using namespace std;

//ʾ��
//����
int max(int a, int b);
int max(int a, int b);
//����
int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 100;
	int b = 200;

	cout << max(a, b) << endl;

	return 0;
}
