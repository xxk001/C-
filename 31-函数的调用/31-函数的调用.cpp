/*
�����ĵ���
���ܣ�ʹ�ö���õĺ���
�﷨����������������

�ܽ᣺����������С�����ڳ�Ϊ �βΣ���������ʱ����Ĳ�����Ϊ ʵ��
*/
#include <iostream>
using namespace std;
//ʾ��

//��������
int add(int num1, int num2)//�����е�num1��num2��Ϊ��ʽ����������β�
{
	return num1 + num2;
}

int main()
{
	int a = 10;
	int b = 10;
	//����add����
	int sum = add(a, b);//����ʱ��a,b,��Ϊʵ�ʲ��������ʵ��
	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add(a, b);
	cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}