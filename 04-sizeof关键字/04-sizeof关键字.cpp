/*
sizeof�ؼ���
���ã�����sizeof�ؼ��ֿ��� ͳһ����������ռ�ڴ��С
�﷨��sizeof���������� /������

	short < int <= long < long long
	2       4      4      8
*/

#include <iostream>
using namespace std;

int main() {
	cout << "short ������ռ�ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "int ������ռ�ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "long ������ռ�ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "long long ������ռ�ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	system("pause");
	return 0;
}