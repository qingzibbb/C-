#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

////1.����n�Ľ׳�
//int main()
//{
//	int i;
//	int n;
//	int sum=1;
//	printf("������n->\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////����1!+2!+3!+...+10!
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		//ret = 1;//ÿ�ν������ѭ�� retҪ���¸�ֵ0
//		//for (j = 1; j <= i; j++)
//		//{
//		//	ret *= j;
//		//}
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////�۰���ң����ֲ��ң��������������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int n;
//	scanf("%d", &n);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;//�ҵ���Ҫ����ѭ��
//		}
//	}
//	if (left>right)
//		printf("�Ҳ���");
//	return 0;
//}


//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
////��ʾ���ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "bjyxszd ggdd2026";
//	char arr2[] = "################";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;//Ҫȡ���һ����
//	while (left <= right)//=��Ϊ���м��Ǹ���ҲҪ����ӡ
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//1s
//		system("cls");
//	}
//	return 0;
//}


////ģ���û���¼��ֻ�ܵ����Σ���ȷ��ʾ��½�ɹ������ξ����˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password, "bjyx") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}


////��������Ϸ
//#include <time.h>
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	//1.���������:1-100��
//	ret = rand() % 100 + 1;//ֻ������һ�Σ���ʱ����������������ǰ��ֹѭ���ڲ�����
//	//2.������
//	while (1)
//	{
//		printf("������Ҫ�µ�����>");
//		scanf("%d",& num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�¶���\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("****     1.��ʼ��Ϸ     ****\n");
//	printf("****     2.�˳���Ϸ     ****\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������\n");
//		}	
//	} while (input);
//	return 0;
//}

