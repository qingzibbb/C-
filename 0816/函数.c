#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
//strcpy:�����ַ���2��1�������\0��
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

////дһ�������������е����ֵ
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


////����������
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
//	//Swap1(a, b);//��� ��swap1�ڲ������ˣ���û�ó���
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////�ж�һ�����ǲ�������
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


////�ж�һ���ǲ�������
//int is_leap_year(int n)
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	//	return 1;
//	//else
//	//	return 0;
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//��
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


////ʵ��������������Ķ��ֲ���
//int binary_search(int* arr, int x, int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//��ƽ��ֵ��ô��
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else//��=���ں��棬���Ч�ʣ���Ϊ�󲿷����������
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
//	printf("������Ҫ�ҵ�����>");
//	scanf("%d", &a);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, a, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


////ÿ����һ�κ�����num������1
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


////��ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//����ֵΪ��ӡ�ַ����ĸ���
//	//printf("%d", printf("%d", 43))
//	//printf("%d", 2)
//	//1
//    //�����4321
//	return 0;
//}


