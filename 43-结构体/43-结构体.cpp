/*
�ṹ��
�﷨��struct �ṹ���� { �ṹ���Ա�б� }��
ͨ���ṹ�崴�����������ַ�ʽ��
	1��struct �ṹ���� ������
	2��struct �ṹ���� ������ = {��Ա1ֵ�� ��Ա2ֵ������}
	3������ṹ��ʱ��˳�㴴������
*/

/*
�ܽ᣺
	1������ṹ��ʱ�Ĺؼ����� struct ������ʡ��
	2�������ṹ�����ʱ���ؼ��� struct ����ʡ��
	3���ṹ��������� ������ ��."���ʳ�Ա
*/

#include <iostream>
using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;//����
	int age;   //����
	int score; //����
}stu3;		//�ṹ�����������ʽ 3

int main()
{
	//�ṹ�����������ʽ 1
	struct student stu1;  //struct �ؼ��ֿ���ʡ��

	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "����:" << stu1.name  << "���䣺" << stu1.age  << "������" << stu1.score  << endl;

	//�ṹ�����������ʽ 2
	struct student stu2 = { "����",19,60 };
	
	cout << "������" << stu2.name  << "���䣺" << stu2.age  << "������" << stu2.score  << endl;


	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;

	cout << "������" << stu3.name  << "���䣺" << stu3.age  << "������" << stu3.score  << endl;

	system("pause");
	return 0;
}