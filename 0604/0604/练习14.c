#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////1.实现一个函数，可以左旋字符串中的k个字符。
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB

////方法1：暴力求解
//void left_move(char* str, int k)
//{
//	int j = 0;
//	//旋转k个字符
//	for (j = 0; j < k; j++)
//	{
//		//旋转1个字符
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 8);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


////方法2：逆序三次
////ab cdef
////ba fedc
////cdefab
//#include <assert.h>
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		assert(left != NULL);
//		assert(right != NULL);
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k)
//{
//	//取第k个数要str+k-1,注意“-1”
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	//不能让k大于字符串长度
//	assert(len >= k);
//	reverse_str(str, str + k-1);
//	reverse_str(str + k, str + len-1);
//	reverse_str(str, str +len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}




////2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC


////方法1:左旋一个比较一个
//#include <assert.h>
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		assert(left != NULL);
//		assert(right != NULL);
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* str, int k)
//{
//	//取第k个数要str+k-1,注意“-1”
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	//不能让k大于字符串长度
//	assert(len >= k);
//	reverse_str(str, str + k-1);
//	reverse_str(str + k, str + len-1);
//	reverse_str(str, str +len-1);
//}
//
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 1; i <= len; i++)
//	{
//		left_move(str1, 1);
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret=is_left_move(arr1, arr2);
//	if (ret ==1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	system("pause");
//	return 0;
//}


//方法2：使用库函数（子串追加+查找子字符串）abcdefabcdef 如果是逆序来的一定能在里面找到
#include <assert.h>
int is_left_move(char* str1, char* str2)
{
	char* ret = NULL;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//子串追加
	strncat(str1, str1, len1);
	//查找子字符串
	ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	//给arr1[20],使之空间够大，能放下两个str
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret=is_left_move(arr1, arr2);
	if (ret ==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	system("pause");
	return 0;
}