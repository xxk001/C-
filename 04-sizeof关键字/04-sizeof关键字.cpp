/*
sizeof关键字
作用：利用sizeof关键字可以 统一数据类型所占内存大小
语法：sizeof（数据类型 /变量）

	short < int <= long < long long
	2       4      4      8
*/

#include <iostream>
using namespace std;

int main() {
	cout << "short 类型所占内存空间为：" << sizeof(short) << endl;
	cout << "int 类型所占内存空间为：" << sizeof(int) << endl;
	cout << "long 类型所占内存空间为：" << sizeof(long) << endl;
	cout << "long long 类型所占内存空间为：" << sizeof(long long) << endl;

	system("pause");
	return 0;
}