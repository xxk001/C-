/*
�ַ���
���ã��ַ��ͱ������� ��ʾ�����ַ�
�﷨��char ch = 'a';
ע�⣺
	1������ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫����
	2����������ֻ����һ���ַ������������ַ���
C��C++���ַ��ͱ���ֻռ�� 1���ֽ�
�ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������뵽�洢��ҳ
*/

#include <iostream>
using namespace std;

int main()
{
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(ch) << endl;

	cout << (int)ch << endl;//�鿴�ַ�a��Ӧ��ASCII��
	ch = 97;//����ֱ����ASCII���ַ��ͱ�����ֵ 
	cout << ch << endl;

	system("pause");
	return 0;
}