#pragma once
#include <iostream>
#include <time.h>
using namespace std;

//ѧ���ṹ�嶨��
struct Student
{
	string name; //ѧ������
	int score;   //���Է���
};

//��ʦ�ṹ�嶨��
struct Teacher
{
	string name; //��ʦ����
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len);

void printTeacher(Teacher tArray[], int len);