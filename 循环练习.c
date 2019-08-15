#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

////1.计算n的阶乘
//int main()
//{
//	int i;
//	int n;
//	int sum=1;
//	printf("请输入n->\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////计算1!+2!+3!+...+10!
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		//ret = 1;//每次进入这个循环 ret要重新赋值0
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


////折半查找（二分查找）：数组必须有序
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
//			printf("找到了，下标是：%d\n", mid);
//			break;//找到了要跳出循环
//		}
//	}
//	if (left>right)
//		printf("找不到");
//	return 0;
//}


//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
////演示多字符从两边移动，到中间汇聚
//int main()
//{
//	char arr1[] = "bjyxszd ggdd2026";
//	char arr2[] = "################";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;//要取最后一个字
//	while (left <= right)//=因为最中间那个数也要被打印
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


////模拟用户登录，只能登三次，正确提示登陆成功，三次均错退出程序
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "bjyx") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}


////猜数字游戏
//#include <time.h>
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	//1.生成随机数:1-100内
//	ret = rand() % 100 + 1;//只能设置一次，用时间控制随机数，放在前防止循环内部更改
//	//2.猜数字
//	while (1)
//	{
//		printf("请输入要猜的数：>");
//		scanf("%d",& num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("****     1.开始游戏     ****\n");
//	printf("****     2.退出游戏     ****\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//		}	
//	} while (input);
//	return 0;
//}

