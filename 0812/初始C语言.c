#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num =0;
//	printf("��������������>");
//	scanf("%d%d", &num1, &num2);
//	num = num1 + num2;//ǰ�治�ܼ�int
//	printf("%d", num);
//	system("pause");
//return 0;
//}

////ö�ٳ���
//enum sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	printf("%d", MALE);
//	system("pause");
//return 0;
//}


//�ַ���
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//�޸ģ�char arr2[] = { 'a', 'b', 'c' ,'0'};
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abcxxxx�������ޡ�\0��
//	printf("%s\n", "abc");//abc
//	system("pause");
//return 0;
//}

////ת���ַ���\n  \a(������)   \ddd-��ʾ1-3���˽�����     \xddd-��ʾ3��ʮ��������
//int main()
//{
//	printf("c:\test\60\test_80-10\test.c\n");// \t��ת���ַ���ˮƽ�Ʊ��
//	printf("c:\\test\\60\\test_8_10\\test.c\n");
//	//printf("(are you ok??)");
//	// ??)Ϊ����ĸ��
//	printf("(are you ok\?\?)\n");
//	//��'/'ת�壬ʹÿ����ĸΪ������Ҫ��
//
//	//Ӧ��
//	printf("\"");
//	printf("\n");
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	printf("\328\n");
//	// \328 \32:3*8^1+2*8^0=26  8:�˽��Ʋ��ܳ���8
//	printf("%c\n", '\x60');
//	system("pause");
//return 0;
//}


//
////ѡ�����
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��");
//		scanf("%d", &input);
//	//ѡ�����
//	if (input == 1)
//	{
//		printf("���ͣ�\n");
//	}
//	else if (input==0)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����������\n");
//	}
//	system("pause");
//return 0;
//}


////ѭ�����
//int main()
//{
//	int row = 0;
//	while (row < 20000)
//	{
//		printf("Ŭ���ù������д���\n");
//		row++;
//	}
//	if (row == 20000)
//	{
//		printf("���г�Ч");
//	}
//	system("pause");
//	return 0;
//}


////����(�ӷ�)
//int Add(int x,int y)
//{
//	int z = x + y;
////	return z;
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	printf("������������������>");
//	scanf("%d %d", &num1, &num2);
//	num= Add(num1, num2);//��������
//	printf("%d",num);
//	system("pause");
//	return 0;
//}


////����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	//char arr2[20] = { 0 };
//	int i = 0;
//	printf("%d\n", arr[0]);
//	//��ӡ����
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


////������
//int main()
//{
//	int a = 20;//0000 0000 0000 0000 0001 0100
//	int b = a >> 2;//���Ʋ�����-������λ00 0000 0000 0000 0000 0001 01
//	printf("%d\n", b);
//
//	a = 3;
//	b = 5;
//	//&-��λ�루��0��0��
//	int c = a&b;
//	//a-00000000 00000000 00000011
//	//b-00000000 00000000 00000101
//	//c-00000000 00000000 00000001
//	printf("%d\n", c);
//	
//	//��λ��(��1��1)
//	c = a|b;
//	//c-00000000 00000000 00000111
//	printf("%d\n", c);
//
//	//��λ���(����Ϊ1)
//	c = a^b;
//	//c-00000000 00000000 00000110
//	printf("%d\n", c);
//
//	//��λȡ��
//	int d = -1;//���ڴ��д洢����
//	//ԭ��-10000000 00000000 00000001
//	//����-11111111 11111111 11111110 
//	//����-11111111 11111111 11111111(�����һ)
//	d = 0;
//	printf("%d\n", ~d);//-1
//	//ԭ��-----00000000 00000000 00000000
//	//��λȡ��-11111111 11111111 11111111���������Ĳ��룩
//	//����---11111111 11111111 11111110
//	//��ԭ��---10000000 00000000 00000001
//	system("pause");
//	return 0;
//}

