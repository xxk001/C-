#include "Exp02.h"

//冒泡排序
void bubbleSort(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << arr[i].name << '\t' <<
			"年龄：" << arr[i].age << '\t' <<
			"性别：" << arr[i].sex << endl;
	}
}