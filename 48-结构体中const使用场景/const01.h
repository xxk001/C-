#pragma once
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

//constʹ�ó���
void printStudent(const student* stu);  //��const��ֹ�������е������