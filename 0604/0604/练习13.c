#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


////1.调整数组使奇数全部都位于偶数前面。 
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
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
//		//从左边找一个偶数，从右边找一个奇数，交换两个数
//{
//		int left = 0;
//		int right = sz - 1;
//		int tmp;
//		while (left < right)
//		{
//			//添加(left < right)&&：防止一直找不到奇数或偶数而越界
//			//找到一个偶数
//			while ((left < right)&&(arr[left] % 2 != 0))
//			{
//				left++;
//			}
//			//找到一个奇数
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
////杨氏矩阵 
////有一个二维数组.
////数组的每行从左到右是递增的，每列从上到下是递增的.
////在这样的数组中查找一个数字是否存在。
////时间复杂度小于O(N);
////
////数组：
////1 2 3
////2 3 4
////3 4 5
////
////1 3 4
////2 4 5
////4 5 6
////
////例如使用以下找7：
////1 2 3
////4 5 6
////7 8 9
////思想：因为要求时间复杂度小于O(N)，所以利用左上（右下）的数消去一行或一列
////难点：要同时返回两个数
////方法1：利用结构体
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
////	//找7
////	ret = FindNum(arr, 7, 3, 3);
////	if (ret.x == -1)
////	{
////		printf("找不到");
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
////方法2：利用返回性参数
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
//			return;//找到了，在这里返回
//		}
//	}
//	//找不到，输出不存在的的行和列
//	*prow = -1;
//	*pcol = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int x = 3;
//	int y = 3;
//	//返回性参数
//    FindNum(arr, 7, &x, &y);
//	if (x == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("%d %d", x, y);
//	}
//	system("pause");
//	return 0;
//}
