/*
�ṹ������
���ã����Զ���Ľṹ����뵽�����з���ά��
�﷨��struct �ṹ���� ��������Ԫ�ظ����� = { { }��{ }��...{ } }
*/
#include <iostream>
using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;	  //����
	int score;    //����
};

int main()
{
	//�ṹ������
	struct student arr[3] =
	{
		{"����",18,80},
		{"����",19,60},
		{"����",20,70},
	};

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << '\t' << 
					"���䣺" << arr[i].age << '\t' << 
						"������" << arr[i].score << endl;
	}

	system("pause");
	return 0;
}