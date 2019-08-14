#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1. 给定两个整形变量的值，将两个值的内容进行交换。 
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

////2. 不允许创建临时变量，交换两个数的内容
////方法1：运用加减
//int main()
//{
//	int a = 2;
//	int b = 3;
//	a = a + b;//5
//	b = a - b;//2
//	a = a - b;//3
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

////方法2：运用异或
//int main()
//{ 
//	int a = 2;//00000000 00000000 00000000 00000010
//	int b = 3;//00000000 00000000 00000000 00000011
//	a = a^b;//  00000000 00000000 00000000 00000001
//	b = a^b;//  00000000 00000000 00000000 00000010
//	a = a^b;//  00000000 00000000 00000000 00000011
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}



////3.求10 个整数中最大值。
//int main()
//{ 
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = 0;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d ", max);
//	system("pause");
//	return 0;
//}


////4.将三个数按从大到小输出。 
//int main()
//{ 
//	int a = 3;
//	int b = 2;
//	int c = 5;
//	int tmp;;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}


////5.求两个数的最大公约数。
//int main()
//{ 
//	int a = 100;
//	int b = 50;
//	int tmp;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int i;
//	for (i = 1; i <= b; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			tmp = i;
//	}
//	printf("%d", tmp);
//	system("pause");
//	return 0;
//}

////方法2
//int main()
//{ 
//	int a = 18;
//	int b = 24;
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	system("pause");
//	return 0;
//}
