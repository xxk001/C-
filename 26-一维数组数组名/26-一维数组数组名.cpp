/*
一维数组数组名
	1、可以统计整个数组在内存中的长度
	2、可以获取数组在内存中的首地址
注意：数组名是常量，不可以赋值
总结：
	1、直接打印数组名，可以查看数组所占内存的首地址
	2、对数组名进行sizeof，可以获取整个数组占内存空间的大小
*/

#include <iostream>
using namespace std;

/*
int main()
{
	//1、获取整个数组占用的内存空间大小
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "整个数组所占用内存空间：" << sizeof(arr) << endl;
	cout << "每个元素所占内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、通过数组名获取数组首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	//数组名是常量，因此不可以赋值

	system("pause");
	return 0;
}
*/

/*
案例1：五只小猪称体重
	在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	找出并打印最重的小猪体重
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
案例2：数组元素逆置
	请声明一个5个元素的数组，并且将元素逆置
	如原数组元素：1,3,2,5,4
	逆置后输出：4,5,2,3,1
*/
/*
int main()
{
	int arr[5] = { 1,3,2,5,4 };
	cout << "原数组元素：" << endl;
	int len = (sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	int start = 0; //下标起始位
	int end = (sizeof(arr) / sizeof(arr[0])) - 1; //下标结束位

	while (start < end)
	{
		int temp = arr[start]; //定义temp为中间交换数，将第一个数赋值给temp
		arr[start] = arr[end]; //数据互换
		arr[end] = temp; //实现头尾数据调换

		//调换后数据更新
		start++;
		end--;
	}

	cout << endl;

	cout << "逆置后数组元素：" << endl;
	//遍历数组元素
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}
*/