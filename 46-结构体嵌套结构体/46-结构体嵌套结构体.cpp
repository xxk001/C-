/*
�ṹ��Ƕ�׽ṹ��
���ã��ṹ���еĳ�Ա ������ ��һ���ṹ��

����ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
*/

/*
�ܽ᣺�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������
*/

#include <iostream>
using namespace std;
 
//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name; //����
	int age;     //����
	int score;   //����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id;  //ְ�����
	string name;//��ʦ����
	int age;//��ʦ����
	struct student stu;//�ӽṹ��  ѧ��
};

int main()
{
	struct teacher t1; //���� ��ʦ�ṹ�����t1
	t1.id = 0001;
	t1.name = "����";
	t1.age = 24;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ�" << t1.id << '\t' <<
		"������" << t1.name << '\t' <<
		"���䣺" << t1.age << endl;

	cout << "����ѧԱ ������" << t1.stu.name << '\t' <<
		"���䣺" << t1.stu.age << '\t' <<
		"������" << t1.stu.score << endl;

	system("pause");
	return 0;
}