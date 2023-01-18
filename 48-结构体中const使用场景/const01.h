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

//const使用场景
void printStudent(const student* stu);  //加const防止函数体中的误操作