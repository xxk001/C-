#pragma once
#include <iostream>
using namespace std;

//Ӣ�۽ṹ��
struct hero
{
	string name;
	int age;
	string sex;
};

//ð������
void bubbleSort(hero arr[], int len);

//��ӡ����
void printHeros(hero arr[], int len);