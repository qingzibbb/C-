#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.����Ļ���������ͼ����
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
	//��ӡ�ϲ���
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��
	for (i = 0; i < line-1; i++)
	{
		//��ӡ�ո�
		for (j = 0; j<=i; j++)
		{
			printf(" ");
		}
		//��ӡ*
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