/*
�ṹ��ָ��
���ã�ͨ��ָ����� �ṹ�� �еĳ�Ա
	1�����ò����� -> ����ͨ�� �ṹ��ָ�� ���� �ṹ������
*/

/*
�ܽ᣺�ṹ��ָ�� ����ͨ�� -> ������ �����ʽṹ���еĳ�Ա�����޸ĳ�Ա������
*/

#include <iostream>
using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name; //����
	int age;     //����
	int score;   //����
};

int main()
{
	struct  student stu = { "����",18,100 };

	struct student* p = &stu; //ָ��ָ�� �ṹ���� ��Ա�б�

	p->score = 80;//ָ��ͨ�� -> ���������� ���� �� �޸� ��Ա

	cout << "������" << p->name << '\t' <<
		"���䣺" << p->age << '\t' <<
		"������" << p->score << endl;
			
	system("pause");
	return 0;
}