/*
ָ�롢���顢����
��������װһ������������ð������ʵ�ֶ������������������
	�磺int arr[10] = {4,3,6,9,1,2,10,8,7,5}
*/

/*
�ܽ᣺�����������뵽���� ��Ϊ���� ʱ�����˻�Ϊָ�� ��Ԫ�ص� ָ��
*/

#include "array.h"

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(int);

	bubbleSort(arr, len);

	printArray(arr, len);
	
	system("pause");
	return 0;

	//cout << len << endl;
}