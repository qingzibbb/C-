#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//������
//int main()
//{ 
//	int age = 4;
//	if (5 == age)//ֵдǰ��
//	{
//		printf("cute");
//	}
//	system("pause");
//	return 0;
//}

////��ӡ1-100�������
//int main()
//{ 
//	int i;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 == 0)
//	//		;
//	//	else
//	//		printf("%d ", i);
//	//}
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


////switch���
//int main()
//{ 
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//		printf("weekday\n");
//		break;
//	case 4:
//		printf("weekend\n");
//		break;
//	default:
//		printf("����������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//whileѭ��
//int main()
//{ 
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

////��ȡ����ӡ�ַ���
//int main()
//{ 
//	int ch = 0;
//	//EOF---end of file---�ı��ļ�������־
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	system("pause");
//	return 0;
//}

////ֻ��ӡ�����ַ�
////��дתСд
//int main()
//{ 
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//if (ch<'0' || ch>'9')
//		//	continue;
//		//putchar(ch);
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);//ASC||
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}

////��ѭ����ı��˱�����ֵ��������ѭ��
////���1
//int main()
//{ 
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)//Ӧ����==
//			printf("bjyx ");
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

////���2��arr[12]���ʵ���i�ĵ�ַ�����Ҹ�ֵ0���ı��˱���i��ֵ
//int main()
//{ 
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("bjyxszd \n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//forѭ������1
//int main()
//{ 
//	for (;;)
//		printf("bjyx\n");//��ѭ��������ʡ�����ж�
//	system("pause");
//	return 0;
//}

//Ӧ�ã��������,��Ӧ��ӡ100��������jû��ʼ�����ڵڶ��ν���jѭ��ʱj=9
int main()
{ 
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
			printf("�����˵�ټ�\n");
	}
	system("pause");
	return 0;
}