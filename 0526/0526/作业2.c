#define _CRT_SECURE_NO_WARNINGS 1
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找/折半查找
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


////作业2

#include<stdio.h>
#include<stdlib.h>
////1. 给定两个整形变量的值，将两个值的内容进行交换。 
//int main()
//{
//	int a;
//	int b;
//	int tmp = 0;
//	scanf("%d%d",&a,&b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//}
//


////2. 不允许创建临时变量，交换两个数的内容（附加题） 
//int main()
//
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
////方法1:数学运算
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
////方法2：按位异或
//	//a = a^b;
//	//b = a^b;
//	//a = a^b;
//
//
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}






////3.求10 个整数中最大值。
////方法1：挨个比较
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = 0;
//	int i = 0;
//	for (i = 1; i<10; i++)
//	{
//		if (arr1[i]>max)
//		{
//			max = arr1[i];
//		}
//	}
//	printf("最大值为：%d", max);
//  system("pause");
//	return 0;
//}
//
//
////方法2：冒泡排序
//int main()
//{
//	int arr2[] = { 3, 5, 7, 9, 1, 2, 4, 6, 8, 10 };
//	int i, j;
//	int tmp = 0;
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)//所有数一共要比较这么多次
//	{
//		for (j = 0; j < sizeof(arr2) / sizeof(arr2[0]) - i; j++)//一个数要比较这么多次
//		{
//			if (arr2[j]>arr2[j + 1])
//			{
//				arr2[j] = tmp;
//				tmp = arr2[j + 1];
//				arr2[j + 1] = arr2[j];
//			}
//		}
//	}
//	printf("%d", arr2[9]);
//	system("pause");
//}
//





////4.将三个数按从大到小输出。 
//int main()
//{
//	int a, b, c, tmp;
//	printf("请输入三个数：\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//

//	//优化：运用swap函数
//void swap(int* a, int* b)
//{
//	int  t;
//	t =*a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a, b, c;
//	printf("请输入三个数：\n");
//	scanf("%d %d %d",&a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//






//5.求两个数的最大公约数。
int main()
{
	////方法1：更相减损法
 //           /*1.如果a>b  a = a - b;
	//        2.如果b>a    b = b - a;
	//        3.假如a = b ，则 a或b  是最大公约数
	//	      4.如果a != b, 则继续从1开始执行
	//	      5.也就是说循环的判断条件为a != b  ，直到a = b时，循环结束。*/
	//int a, b;
	//scanf("%d %d",&a, &b);
	//while (a != b)
	//{
	//	if (a > b)
	//		a = a - b;
	//	else
	//		b = b - a;
	//}
	//printf("最大公约数为：%d", a);
	//system("pause");
	//return 0;

	//方法2：辗转相除法
	/*思路：
		1.将两整数求余 a%b = c
		2.如果c = 0; 则b为最大公约数
		3.如果c != 0, 则 a = b；b = c；继续从1开始执行
		4.也就是说该循环的是否继续的判断条件就是c是否为0*/
	int a, b,c;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	while (c != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("最大公约数为：%d", a);
	system("pause");
	return 0;

}
