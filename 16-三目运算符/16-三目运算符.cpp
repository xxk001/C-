/*
��Ŀ�����
���ã�ͨ����Ŀ�����ʵ�ּ򵥵��ж�
�﷨�����ʽ1 �� ���ʽ2 �����ʽ3
���ͣ�������ʽ1��ֵΪ�棬ִ�б��ʽ�������ر��ʽ2�Ľ��
	  ������ʽ1��ֵΪ�٣�ִ�б��ʽ�������ر��ʽ3�Ľ��
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << "c = " << c << endl;

	//c++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}