/*
continue���
���ã��� ѭ����� �У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
*/
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}