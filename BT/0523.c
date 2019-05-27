#define _CRT_SECURE_NO_WARNINGS 1

//作业1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

//求100-200间的素数(i)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i<=200; i++)
//	{
//		
//		for (j = 2 ；j < i;j++）
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	//试除法
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}






////打印乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			//打印一列
//			printf("%d*%d=%d", i,j,i*j );
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//



//
////3. 判断1000年-- - 2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 4 != 100)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	/*	{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d", year);
//		}*/
//	}
//	system("pause");
//}
//
