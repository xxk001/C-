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

//ֵ����
void printStudent1(student stu);

//��ַ����
void printStudent2(student* stu);