#pragma once
#include <iostream>
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name; //姓名
	int age;     //年龄
	int score;   //分数
};

//值传递
void printStudent1(student stu);

//地址传递
void printStudent2(student* stu);