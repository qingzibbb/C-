#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include <stdio.h>
#include<stdlib.h>


//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

////4.
////��һ���ַ����������Ϊ:"student a am i",
////			���㽫��������ݸ�Ϊ"i am a student".
////			Ҫ��
////			����ʹ�ÿ⺯����
////			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//	//1.����һ���ַ���
//	int len = my_strlen(str);
//	assert(str != NULL);
//	reverse_str(str, str + len - 1);
//	//2.����һ������
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
	//1.����
	int len = my_strlen(str);
	assert(str != NULL);
	reverse_str(str, str + len - 1);
	//2.����
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