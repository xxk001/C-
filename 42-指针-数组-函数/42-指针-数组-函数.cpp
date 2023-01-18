/*
指针、数组、函数
案例：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
	如：int arr[10] = {4,3,6,9,1,2,10,8,7,5}
*/

/*
总结：当数组名传入到函数 作为参数 时，被退化为指向 首元素的 指针
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