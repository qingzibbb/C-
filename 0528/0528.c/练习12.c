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


void reverse_str(char* left, char* right)
{
	assert(*left != NULL);
	assert(*right != NULL);
	while (left < right)
	{
		char tmp;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char* str)
{
	//1.整句
	int len = my_strlen(str);
	assert(str != NULL);
	reverse_str(str, str + len - 1);
	//2.单词
	while (*str != '\0')
	{
		char* start = str;
		while (*str != ' '&&*str != '\0')
		{
			str++;
		}
		reverse_str(start, str - 1);
		while (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}