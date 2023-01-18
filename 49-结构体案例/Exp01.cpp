#include "Exp01.h"

void allocateSpace(Teacher tArray[], int len)
{
	string tName = "导师";
	string sName = "学生";
	string nameSeed = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tArray[i].name = tName + nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeacher(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t姓名：" <<
				tArray[i].sArray[j].name << '\t' << "分数：" <<
				tArray[i].sArray[j].score << endl;
		}
	}
}