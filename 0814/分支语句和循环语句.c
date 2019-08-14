#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//代码风格
//int main()
//{ 
//	int age = 4;
//	if (5 == age)//值写前面
//	{
//		printf("cute");
//	}
//	system("pause");
//	return 0;
//}

////打印1-100间的奇数
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


////switch语句
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
//		printf("请重新输入\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//while循环
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

////获取并打印字符串
//int main()
//{ 
//	int ch = 0;
//	//EOF---end of file---文本文件结束标志
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	system("pause");
//	return 0;
//}

////只打印数字字符
////大写转小写
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

////在循环里改变了变量的值，陷入死循环
////情况1
//int main()
//{ 
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)//应该用==
//			printf("bjyx ");
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}

////情况2：arr[12]访问到了i的地址，并且赋值0，改变了变量i的值
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

//for循环变种1
//int main()
//{ 
//	for (;;)
//		printf("bjyx\n");//死循环，由于省略了判断
//	system("pause");
//	return 0;
//}

//应用：错误举例,本应打印100个，由于j没初始化，在第二次进入j循环时j=9
int main()
{ 
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
			printf("陈情令不说再见\n");
	}
	system("pause");
	return 0;
}