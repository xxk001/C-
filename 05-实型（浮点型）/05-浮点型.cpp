/*
ʵ�ͣ������ͣ�
���ã����� ��ʾС��
�����ͱ�����
	1��������float
	2��˫����double
���𣺱�ʾ����Ч���ַ�Χ��ͬ
��������	ռ�ÿռ�	��Ч���ַ�Χ
float		4�ֽ�		7λ��Ч����
double		8�ֽ�		15-16λ��Ч����
*/

#include <iostream>
using namespace std;

int main() {
	float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float sizeof = " << sizeof(float) << endl;
	cout << "double sizeof = " << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-1;//3 * 0.1 ^ 2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}