#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////1.ʵ��һ�����������������ַ����е�k���ַ���
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB

////����1���������
//void left_move(char* str, int k)
//{
//	int j = 0;
//	//��תk���ַ�
//	for (j = 0; j < k; j++)
//	{
//		//��ת1���ַ�
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


////����2����������
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
//	//ȡ��k����Ҫstr+k-1,ע�⡰-1��
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	//������k�����ַ�������
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




////2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC


////����1:����һ���Ƚ�һ��
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
//	//ȡ��k����Ҫstr+k-1,ע�⡰-1��
//	int len = 0;
//	assert(str != NULL);
//	len = strlen(str);
//	//������k�����ַ�������
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


//����2��ʹ�ÿ⺯�����Ӵ�׷��+�������ַ�����abcdefabcdef �������������һ�����������ҵ�
#include <assert.h>
int is_left_move(char* str1, char* str2)
{
	char* ret = NULL;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//�Ӵ�׷��
	strncat(str1, str1, len1);
	//�������ַ���
	ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	//��arr1[20],ʹ֮�ռ乻���ܷ�������str
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