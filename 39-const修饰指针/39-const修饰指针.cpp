/*
const����ָ��
���������
	1��const����ָ��  --  ����ָ��
	2��const���γ���  --  ָ�볣��
	3��const������ָ�룬�����γ���
*/

/*
	tips: 
	�� const �Ҳ� ��������ָ�뻹�ǳ�����
	�Ҳ���ָ�룺���� ����ָ�� ������ָ���ֵ�����޸�
	�Ҳ��ǳ��������� ָ�볣�� ��ָ�볣����ָ�򲻿��޸�
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;

	//const���ε���ָ�룬ָ��ָ������޸ģ�ָ��ָ���ֵ�����޸�
	const int* p1 = &a;
	p1 = &b;  //TRUE
	// *p1 = 100;//FALSE

	//const���ε��ǳ�����ָ��ָ�򲻿��޸ģ�ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	//p2 = &b;  //FALSE
	*p2 = 100;//TRUE

	//const������ָ�������γ���
	const int* const p3 = &a;
	//p3=&b;   //FALSE
	//*p3=100; //FALSE

	system("pause");
	return 0;
}