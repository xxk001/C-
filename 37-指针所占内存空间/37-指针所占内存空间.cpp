/*
ָ����ռ�ڴ�ռ�
	�ʣ�ָ��Ҳ��һ���������ͣ���ô������������ռ�ö����ڴ�ռ䣿
	���е�ָ�������� 64λ����ϵͳ���� 8 ���ֽ�
	���е�ָ�������� 32λ����ϵͳ���� 4 ���ֽ�
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	
	int* p;
	p = &a; //ָ��ָ������ a �ĵ�ַ  

	cout << *p << endl; // * ������  ==>  *p = a 
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	system("pause");
	return 0;
}

