/*
����
���ã����ڼ�¼�����в��ɸ��ĵ�����
c++���峣�����ַ�ʽ��
	1��#define �곣����#define ������ ����ֵ
		ͨ�����ļ��Ϸ����壬��ʾһ������
	2��const ���εı��� const �������� ������ = ����ֵ
		ͨ���ڱ�������ǰ�ӹؼ��� const ���θñ���Ϊ�����������޸�
*/

#include <iostream>
using namespace std;

#define day 7

int main() {
	cout << "һ���ܹ��� " << day << "��" << endl;
	//day = 8; //�����곣�������޸�

	//const���α���
	const int month = 12;
	cout << "һ���� " << month << "����" << endl;
	//month = 24;//����const���εĳ��������޸�

	system("pause");

	return 0;
	
}