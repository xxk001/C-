/*
�����ĳ�����ʽ
	1���޲��޷�
	2���в��޷�
	3���޲��з�
	4���в��з�
*/
#include <iostream>
using namespace std;

//1���޲��޷�
void test01()
{
	//void a = 10; //�����Ͳ����Դ���������ԭ���޷������ڴ�
	cout << "this is test01" << endl;
	//test01(); ��������
}

//2���в��޷�
void test01(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}

//3���޲��з�
int test03()
{
	cout << "this is test03" << endl;
	return 10;
}

//4���в��з�
int test04(int a, int b)
{
	cout << "this is test04" << endl;
	int sum = a + b;
	return sum;
}