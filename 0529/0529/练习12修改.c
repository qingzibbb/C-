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
#include <math.h>

unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		//sum += ((n >> i)&1)*pow(2, 31 - i);//����1��ֱ�ӳ�2�ģ�31-1���η�����Ҫ�õ�����λֱ�Ӹ��ȥ
		                                     //�׶ˣ����ÿ⺯�������
		//sum += ((n >> i) & 1)*(1<<(31-i));//����2:���ÿ⺯����Ҫ��λ���ȥ
		sum <<= 1;//����3��ȡ��ÿλ��һλһλ��ǰ�ƶ�
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
////2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avg = a + (b - a) / 2;
//	int avg = (a&b) + (a^b) / 2;//ֻ����������
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}
////            ��λ���^
////0����κ��������� = �κ���
////1����κ��������� = �κ���ȡ��
////�κ�������Լ������ڰ��Լ���0
//



////3.���ʵ�֣� 
////һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
////���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	////����1����λ���
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
//	//����2:ÿ������������Ͻ��жԱ�,��ͬʱֱ�ӷ��ؼ�������9*9,
//	//     ͨ��count����ֵ��0��1���ж��Ƿ����ѭ��
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


