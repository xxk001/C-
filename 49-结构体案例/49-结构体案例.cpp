/*
案例1：
	学校正在做毕设项目，每名老师带领5个学生，总共用3名老师，需求如下：
		设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
		学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
		最终打印出老师数据及老师所带的学生数据
*/


/*
#include "Exp01.h"
int main()
{
	srand((unsigned int)time(NULL));//随机数种子，头文件 #include <ctime>

	Teacher tArray[3]; //老师数组

	int len = sizeof(tArray) / sizeof(Teacher);

	allocateSpace(tArray, len);  //创建数据

	printTeacher(tArray, len);   //打印数据

	system("pause");
	return 0;
}
*/

/*
案例2：
	设计一个英雄的结构体，包括成员姓名，年龄，性别；
	创建结构体数组，数组中存放5名英雄

	通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果

	五名英雄信息如下：
		{"刘备",23,"男"}
		{"关羽",22,"男"}
		{"张飞",20,"男"}
		{"赵云",21,"男"}
		{"貂蝉",19,"女"}
*/

#include "Exp02.h"
int main()
{
	//创建英雄结构体变量
	struct hero arr[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(arr) / sizeof(hero);//获取数组元素个数
	//cout << len << endl;

	bubbleSort(arr, len);//排序

	printHeros(arr, len);//打印

	system("pause");

	return 0;
}