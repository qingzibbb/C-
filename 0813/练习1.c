#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

////1.��ӡ100-200֮�������
////����1:��i�� 2��i-1 ������������������Ϊ����
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

////����2:��i�� 2����ƽ��i ������������������Ϊ����
////     ��ż��������Ϊ������ȥ��ż��
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


////2.����˷��ھ���  %-2d:�����  %2d:�Ҷ���
//int main()
//{
//	int i, j;
//	int k;
//	printf("��������Ҫ�ĳ˷���>");
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

////3.�ж�1000-2000��������
////������4�Ҳ�������100
////������400
//// �ṹ ()||()   �ǵü����ţ���
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