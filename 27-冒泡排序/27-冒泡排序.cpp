/*
ð������
���ã���������Ԫ�ؽ�������
	1���Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������
	2����ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ
	3���ظ����ϲ��裬ÿ�αȽϴ��� -1��ֱ������Ҫ�Ƚ�
*/

#include <iostream>
using namespace std;

//ʾ����������{4,2,8,0,5,7,1,3,9,6}��������
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