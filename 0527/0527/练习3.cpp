#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
////1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
//int main()
//{
//	int arr1[4] = { 1, 3, 5, 7 };
//	int arr2[4] = { 2, 4, 6, 8 };
//	int tmp,i;
//	printf("第一个数组交换前：");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n第二个数组交换前：");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\n第一个数组交换后：");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n第二个数组交换后：");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}


//
////2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//int main()
//{
//	int i, j;
//	double num=0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			num = num + 1.0 / i;
//		}
//		if (i % 2 == 0)
//		{
//			num = num - 1.0 / i;
//		}
//	}
//	printf("num=%lf", num);
//	system("pause");
//}




//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。 
int main()
{
	int i;
	int num = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			num=num + 1;
		}
		if (i / 10 == 9)
		{
			num = num + 1;
		}
	}
	printf("%d", num);
	system("pause");
}


