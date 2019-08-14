#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

////1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{ 
//	int arr1[] = { 2, 0, 1, 9 };
//	int arr2[] = { 2, 0, 2, 6 };
//	int tmp,i;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//	system("pause");
//	return 0;
//}


////2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
//int main()
//{ 
//	int i;
//	double sum=0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;//必须要*1.0，使flag转换成double类型
//		//sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);//输出 用%lf
//	system("pause");
//	return 0;
//}


////3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{ 
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			sum++;
//		if (i / 10 == 9)
//			sum++;
//	}
//	printf("%d", sum);
//		system("pause");
//		return 0;
//}
