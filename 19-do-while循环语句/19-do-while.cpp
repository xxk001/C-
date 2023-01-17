/*
do-while循环语句
作用：满足循环条件，执行循环语句
语法：do{ 循环机语句 } while （循环条件）；
注意：与while的区别在于  do-while会先执行一次循环语句，再判断循环条件
*/
#include <iostream>
using namespace std;

/*
int main()
{
	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 5);

	system("pause");

	return 0;
}
*/

/*
案例：水仙花数
描述：水仙花数是指一个3位数，它的每个位上的数字的 3次幂之和等于它本身
例如：1^3+5^3+3^3 = 153
do-whlie实现
*/
int main()
{
	
	int num = 0;
	num = 100;
	do
	{
		int geWei = 0;
		int shiWei = 0;
		int baiWei = 0;

		geWei = num % 10;
		shiWei = (num / 10 ) % 10;
		baiWei = num / 100;
		if ( num == geWei * geWei * geWei + shiWei * shiWei * shiWei + baiWei * baiWei * baiWei )
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	system("pause");
	return 0;
}