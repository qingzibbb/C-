#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
//strcpy:拷贝字符串2进1里，包括‘\0’
//int main()
//{
//	char arr1[20] = "******";
//	char arr2[] = "bjyx";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

////memset
//int main()
//{
//	char arr[] = "xxxx2026";
//	memset(arr, 'b', 4);
//	printf("%s\n", arr);
//	return 0;
//}

////写一个函数求两数中的最大值
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max=get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


////交换两个数
////void Swap1(int x, int y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 2019;
//	int b = 2026;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);//错的 在swap1内部交换了，但没拿出来
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////判断一个数是不是素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////判断一年是不是闰年
//int is_leap_year(int n)
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	//	return 1;
//	//else
//	//	return 0;
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//简单
//}
//
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year)== 1)
//			printf("%d ", year);
//	}
//	return 0;
//}


////实现整形有序数组的二分查找
//int binary_search(int* arr, int x, int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//求平均值这么算
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else//把=放在后面，提高效率，因为大部分情况不等于
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int a;
//	printf("请输入要找的数：>");
//	scanf("%d", &a);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, a, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


////每调用一次函数，num就增加1
//void Add(int* pn)
//{
//	(*pn)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


////链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//返回值为打印字符串的个数
//	//printf("%d", printf("%d", 43))
//	//printf("%d", 2)
//	//1
//    //结果即4321
//	return 0;
//}


