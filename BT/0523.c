#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

//��100-200�������(i)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i<=200; i++)
//	{
//		
//		for (j = 2 ��j < i;j++��
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
//	//�Գ���
//	for(i=101; i<=200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
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
//			printf("%d ", i);//����
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}






////��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			//��ӡһ��
//			printf("%d*%d=%d", i,j,i*j );
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//



//
////3. �ж�1000��-- - 2000��֮�������
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
