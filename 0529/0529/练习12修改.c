#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include <stdio.h>
#include<stdlib.h>


//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include <math.h>

unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		//sum += ((n >> i)&1)*pow(2, 31 - i);//方法1：直接乘2的（31-1）次方，把要得到的那位直接搞过去
		                                     //弊端：调用库函数会很慢
		//sum += ((n >> i) & 1)*(1<<(31-i));//方法2:不用库函数把要的位搞过去
		sum <<= 1;//方法3：取出每位，一位一位往前移动
		sum |= ((n >> i) & 1);
	}
	return sum;
}
int main()
{
	int num = 0;
	unsigned int ret = 0;
	scanf("%d", &num);
	ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
 


//
////2.不使用（a+b）/2这种方式，求两个数的平均值。 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avg = a + (b - a) / 2;
//	int avg = (a&b) + (a^b) / 2;//只适用于整数
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}
////            按位异或^
////0异或任何数，其结果 = 任何数
////1异或任何数，其结果 = 任何数取反
////任何数异或自己，等于把自己置0
//



////3.编程实现： 
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
//int main()
//{
//	////方法1：按位异或
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	ret ^= arr[i];
//	//}
//	//printf("ret=%d", ret);
//
//	//方法2:每项都与各项排列组合进行对比,相同时直接返回继续查找9*9,
//	//     通过count的数值（0或1）判断是否结束循环
//	int j;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//			break;
//	}
//	printf("%d\n", arr[i]);
//	system("pause");
//	return 0;
//}



////4.
////有一个字符数组的内容为:"student a am i",
////			请你将数组的内容改为"i am a student".
////			要求：
////			不能使用库函数。
////			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_str(char* left,char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str)
//{
//	//1.逆序一个字符串
//	int len = my_strlen(str);
//	assert(str != NULL);
//	reverse_str(str, str + len - 1);
//	//2.逆序一个单词
//	while (*str != '\0')
//	{
//		char* start = str;
//		while (*str != ' '&&*str != '\0')
//		{
//			str++;
//		}
//		reverse_str(start, str - 1);
//		if (*str == ' ')
//		{
//			str++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//


