/*
�ṹ������������
���ã����ṹ����Ϊ���������д���
���ݷ�ʽ��	
	1��ֵ����
	2����ַ����
*/

/*
�ܽ᣺��������޸��������е����ݣ���ֵ����
     ��֮���õ�ַ����
*/

#include "printStudent.h"

int main()
{
	student stu = { "����",18,100 };
	//ֵ����
	printStudent1(stu);
	cout << "�������� ������" << stu.name << '\t' <<
		"���䣺" << stu.age << '\t' <<
		"������" << stu.score << endl;

	cout << endl;

	//��ַ����
	printStudent2(&stu);
	cout << "�������� ������" << stu.name << '\t' <<
		"���䣺" << stu.age << '\t' <<
		"������" << stu.score << endl;

	system("pause");
	return 0;
}