#pragma once
#include <iostream>
#include <time.h>
using namespace std;

//学生结构体定义
struct Student
{
	string name; //学生姓名
	int score;   //考试分数
};

//老师结构体定义
struct Teacher
{
	string name; //老师姓名
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len);

void printTeacher(Teacher tArray[], int len);