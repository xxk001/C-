/*
Ƕ��ѭ��
���ã���ѭ��������Ƕ��һ��ѭ�������һЩʵ������
*/
#include <iostream>
using namespace std;

/*
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " *" << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/

/*
�������žų˷���
*/
int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "x" << i << "=" << i * j << " ";
		}
		cout << endl;
	}
	system("pause");
}