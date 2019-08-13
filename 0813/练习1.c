#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

////1.打印100-200之间的素数
////方法1:用i除 2到i-1 的数，都除不尽，则为素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	system("pause");
//	return 0;
//}

////方法2:用i除 2到开平方i 的数，都除不尽，则为素数
////     且偶数不可能为素数，去除偶数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", j);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	system("pause");
//	return 0;
//}


////2.输出乘法口诀表  %-2d:左对齐  %2d:右对齐
//int main()
//{
//	int i, j;
//	int k;
//	printf("请输入需要的乘法表：>");
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//	printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////3.判断1000-2000年间的闰年
////能整除4且不能整除100
////能整除400
//// 结构 ()||()   记得加括号！！
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	system("pause");
//	return 0;
//}


int bjyx = 2026;