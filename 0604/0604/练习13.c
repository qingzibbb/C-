#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


////1.��������ʹ����ȫ����λ��ż��ǰ�档 
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//		printf("\n");
//	}
//}
//void MoveOddEven(int arr[], int sz)
//		//�������һ��ż�������ұ���һ������������������
//{
//		int left = 0;
//		int right = sz - 1;
//		int tmp;
//		while (left < right)
//		{
//			//���(left < right)&&����ֹһֱ�Ҳ���������ż����Խ��
//			//�ҵ�һ��ż��
//			while ((left < right)&&(arr[left] % 2 != 0))
//			{
//				left++;
//			}
//			//�ҵ�һ������
//			while ((left < right) && (arr[right] % 2 == 0))
//			{
//				right--;
//			}
//			if (left < right)
//			{
//				tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//		}
//	}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};
//	int sz = sizeof(arr) / sizeof(*arr);
//	MoveOddEven(arr, sz);
//	PrintArr(arr, sz);
//	system("pause");
//	return 0;
//}





////2. 
////���Ͼ��� 
////��һ����ά����.
////�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
////�������������в���һ�������Ƿ���ڡ�
////ʱ�临�Ӷ�С��O(N);
////
////���飺
////1 2 3
////2 3 4
////3 4 5
////
////1 3 4
////2 4 5
////4 5 6
////
////����ʹ��������7��
////1 2 3
////4 5 6
////7 8 9
////˼�룺��ΪҪ��ʱ�临�Ӷ�С��O(N)�������������ϣ����£�������ȥһ�л�һ��
////�ѵ㣺Ҫͬʱ����������
////����1�����ýṹ��
////struct Point
////{
////	int x;
////	int y;
////};
////struct Point FindNum(int arr[3][3], int k, int row, int col)
////{
////	struct Point ret = { -1, -1 };
////	int x = 0;
////	int y = col - 1;
////	while (y >= 0 && x < row)
////	{
////		if (arr[x][y] > k)
////		{
////			y--;
////		}
////		else if (arr[x][y] < k)
////		{
////			x++;
////		}
////		else
////		{
////			ret.x = x;
////			ret.y = y;
////			return ret;
////		}
////	}
////}
////int main()
////{
////	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////	struct Point ret = { 0 };
////	//��7
////	ret = FindNum(arr, 7, 3, 3);
////	if (ret.x == -1)
////	{
////		printf("�Ҳ���");
////	}
////	else
////	{
////		printf("%d %d", ret.x, ret.y);
////	}
////	system("pause");
////	return 0;
////}
//
//
////����2�����÷����Բ���
//void FindNum(int arr[3][3], int k, int* prow, int* pcol)
//{
//	int x = 0;
//	int y = *pcol - 1;
//	while (y >= 0 && x < *prow)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;//�ҵ��ˣ������ﷵ��
//		}
//	}
//	//�Ҳ�������������ڵĵ��к���
//	*prow = -1;
//	*pcol = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int x = 3;
//	int y = 3;
//	//�����Բ���
//    FindNum(arr, 7, &x, &y);
//	if (x == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("%d %d", x, y);
//	}
//	system("pause");
//	return 0;
//}
