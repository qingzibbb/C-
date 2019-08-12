#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num =0;
//	printf("请输入两个数：>");
//	scanf("%d%d", &num1, &num2);
//	num = num1 + num2;//前面不能加int
//	printf("%d", num);
//	system("pause");
//return 0;
//}

////枚举常量
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


//字符串
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//修改：char arr2[] = { 'a', 'b', 'c' ,'0'};
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//随机值
//
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abcxxxx，由于无‘\0’
//	printf("%s\n", "abc");//abc
//	system("pause");
//return 0;
//}

////转义字符—\n  \a(报警音)   \ddd-表示1-3个八进制数     \xddd-表示3个十六进制数
//int main()
//{
//	printf("c:\test\60\test_80-10\test.c\n");// \t—转义字符，水平制表符
//	printf("c:\\test\\60\\test_8_10\\test.c\n");
//	//printf("(are you ok??)");
//	// ??)为三字母符
//	printf("(are you ok\?\?)\n");
//	//用'/'转义，使每个字母为我们想要的
//
//	//应用
//	printf("\"");
//	printf("\n");
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	printf("\328\n");
//	// \328 \32:3*8^1+2*8^0=26  8:八进制不能出现8
//	printf("%c\n", '\x60');
//	system("pause");
//return 0;
//}


//
////选择语句
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？");
//		scanf("%d", &input);
//	//选择语句
//	if (input == 1)
//	{
//		printf("加油！\n");
//	}
//	else if (input==0)
//	{
//		printf("放弃\n");
//	}
//	else
//	{
//		printf("请重新输入\n");
//	}
//	system("pause");
//return 0;
//}


////循环语句
//int main()
//{
//	int row = 0;
//	while (row < 20000)
//	{
//		printf("努力敲够两万行代码\n");
//		row++;
//	}
//	if (row == 20000)
//	{
//		printf("初有成效");
//	}
//	system("pause");
//	return 0;
//}


////函数(加法)
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
//	printf("请输入两个操作数：>");
//	scanf("%d %d", &num1, &num2);
//	num= Add(num1, num2);//函数传参
//	printf("%d",num);
//	system("pause");
//	return 0;
//}


////数组
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	//char arr2[20] = { 0 };
//	int i = 0;
//	printf("%d\n", arr[0]);
//	//打印数组
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


////操作符
//int main()
//{
//	int a = 20;//0000 0000 0000 0000 0001 0100
//	int b = a >> 2;//右移操作符-二进制位00 0000 0000 0000 0000 0001 01
//	printf("%d\n", b);
//
//	a = 3;
//	b = 5;
//	//&-按位与（有0出0）
//	int c = a&b;
//	//a-00000000 00000000 00000011
//	//b-00000000 00000000 00000101
//	//c-00000000 00000000 00000001
//	printf("%d\n", c);
//	
//	//按位或(有1出1)
//	c = a|b;
//	//c-00000000 00000000 00000111
//	printf("%d\n", c);
//
//	//按位异或(相异为1)
//	c = a^b;
//	//c-00000000 00000000 00000110
//	printf("%d\n", c);
//
//	//按位取反
//	int d = -1;//在内存中存储补码
//	//原码-10000000 00000000 00000001
//	//反码-11111111 11111111 11111110 
//	//补码-11111111 11111111 11111111(反码加一)
//	d = 0;
//	printf("%d\n", ~d);//-1
//	//原码-----00000000 00000000 00000000
//	//按位取反-11111111 11111111 11111111（所求数的补码）
//	//求反码---11111111 11111111 11111110
//	//求原码---10000000 00000000 00000001
//	system("pause");
//	return 0;
//}

