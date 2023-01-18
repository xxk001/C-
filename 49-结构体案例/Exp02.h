#pragma once
#include <iostream>
using namespace std;

//英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序
void bubbleSort(hero arr[], int len);

//打印数组
void printHeros(hero arr[], int len);