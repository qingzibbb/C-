#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
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

////2. ����������ʱ����������������������
////����1�����üӼ�
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

////����2���������
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



////3.��10 �����������ֵ��
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


////4.�����������Ӵ�С����� 
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


////5.�������������Լ����
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

////����2
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
