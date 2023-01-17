/*
冒泡排序法
作用：对数组内元素进行排序
	1、比较相邻的元素。如果第一个比第二个大，就交换它们
	2、对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
	3、重复以上步骤，每次比较次数 -1，直到不需要比较
*/

#include <iostream>
using namespace std;

//示例：将数组{4,2,8,0,5,7,1,3,9,6}进行排序
int main()
{
	int arr[] = { 4,2,8,0,9,5,7,1,3,6 };
	int len = (sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < len - 1 ; i++)
	{
		for (int j = 0; j < len - 1 - i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}