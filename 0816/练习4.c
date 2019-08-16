#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.在屏幕上输出以下图案：
//      *//6  1
//     ***//5  3
//    *****//4  5
//   *******//3  7
//  *********//2  9
// ***********//1  11
//*************//0  13  
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;
	int j = 0;
	//打印上部分
	for (i = 0; i < line; i++)
	{
		//打印空格
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下
	for (i = 0; i < line-1; i++)
	{
		//打印空格
		for (j = 0; j<=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < (line-1-i)*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}