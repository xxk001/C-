#include "Exp02.h"

//ð������
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

//��ӡ����
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << arr[i].name << '\t' <<
			"���䣺" << arr[i].age << '\t' <<
			"�Ա�" << arr[i].sex << endl;
	}
}