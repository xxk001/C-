/*
do-whileѭ�����
���ã�����ѭ��������ִ��ѭ�����
�﷨��do{ ѭ������� } while ��ѭ����������
ע�⣺��while����������  do-while����ִ��һ��ѭ����䣬���ж�ѭ������
*/
#include <iostream>
using namespace std;

/*
int main()
{
	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 5);

	system("pause");

	return 0;
}
*/

/*
������ˮ�ɻ���
������ˮ�ɻ�����ָһ��3λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
���磺1^3+5^3+3^3 = 153
do-whlieʵ��
*/
int main()
{
	
	int num = 0;
	num = 100;
	do
	{
		int geWei = 0;
		int shiWei = 0;
		int baiWei = 0;

		geWei = num % 10;
		shiWei = (num / 10 ) % 10;
		baiWei = num / 100;
		if ( num == geWei * geWei * geWei + shiWei * shiWei * shiWei + baiWei * baiWei * baiWei )
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	system("pause");
	return 0;
}