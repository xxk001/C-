/*
һά����������
	1������ͳ�������������ڴ��еĳ���
	2�����Ի�ȡ�������ڴ��е��׵�ַ
ע�⣺�������ǳ����������Ը�ֵ
�ܽ᣺
	1��ֱ�Ӵ�ӡ�����������Բ鿴������ռ�ڴ���׵�ַ
	2��������������sizeof�����Ի�ȡ��������ռ�ڴ�ռ�Ĵ�С
*/

#include <iostream>
using namespace std;

/*
int main()
{
	//1����ȡ��������ռ�õ��ڴ�ռ��С
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "����������ռ���ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "�����Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2��ͨ����������ȡ�����׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	//�������ǳ�������˲����Ը�ֵ

	system("pause");
	return 0;
}
*/

/*
����1����ֻС�������
	��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
	�ҳ�����ӡ���ص�С������
*/
/*
int main()
{
	int max = 0;
	int arr[5] = { 300,350,200,400,250 };
	int len = (sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;
	//cout << sizeof(arr) /sizeof(arr[0]) << endl;
	system("pause");
	return 0;
}
*/

/*
����2������Ԫ������
	������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
	��ԭ����Ԫ�أ�1,3,2,5,4
	���ú������4,5,2,3,1
*/
/*
int main()
{
	int arr[5] = { 1,3,2,5,4 };
	cout << "ԭ����Ԫ�أ�" << endl;
	int len = (sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	int start = 0; //�±���ʼλ
	int end = (sizeof(arr) / sizeof(arr[0])) - 1; //�±����λ

	while (start < end)
	{
		int temp = arr[start]; //����tempΪ�м佻����������һ������ֵ��temp
		arr[start] = arr[end]; //���ݻ���
		arr[end] = temp; //ʵ��ͷβ���ݵ���

		//���������ݸ���
		start++;
		end--;
	}

	cout << endl;

	cout << "���ú�����Ԫ�أ�" << endl;
	//��������Ԫ��
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}
*/