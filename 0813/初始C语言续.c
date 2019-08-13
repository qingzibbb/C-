#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

////操作符
////a++：先使用，再++
//int main()
//{
//	int a = 1;
//	int b = a++;
//	printf("%d\n", a);//2
//	printf("%d\n", b);//1
//	a = 1;
//	b = ++a;
//	printf("%d\n", b);//2 
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//(强制类型转换)
//	int a = (int)3.14;
//
//	//按位与（&）或（|） 
//	//逻辑与（&&）或（||)---只关注真假
//	int b = 3;
//	int c = 4;
//	int d = b&c;//011 100 000
//	int e = b&&c;//1
//	printf("%d %d\n", d, e);
//	system("pause");
//	return 0;
//}


////条件操作符
////逗号表达式:从左向右依次算，整个表达式只看最后一个式子的结果，
////          但最后一个式子又会因前面的式子发生改变。
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max = (a > b ? a : b);
//	printf("%d\n", b);
//
//	int c = 10;
//	int d = (b = a + 3, a = b - 5, c = c + b);//b=6,a=1,c=16---16
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}


////声明外部变量
////寄存器
//extern int bjyx;
//int main()
//{
//	printf("bjyxszd圆梦%d\n", bjyx);
//
//	//register-给编译器建议放进寄存器中
//	register int a = 10;
//	system("pause");
//	return 0;
//}


//类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	//unsigned int num1 = 0;
//	u_int num2 = 0;
//	system("pause");
//	return 0;
//}

////struct S
////{
////	int a;
////	char b;
////};
////改为
//typedef struct S
//{
//	int a;
//	char b;
//}S;
//int main()
//{
////	struct S s;//结构体的使用，这样较为麻烦
//	S ss;
//	system("pause");
//	return 0;
//}


////static:修饰局部变量---改变生命周期（变长）
////       修饰全局变量---改变作用域（只能在所在源文件中用）---改变了链接属性（外部->内部）
////       修饰函数-------改变作用域（只能在所在源文件中用）---改变了链接属性（外部->内部）
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);//1 2 3 4 5 6 7 8 9 10
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}


////#define定义标识符常量和宏
//#define max 1000
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = max;
//	printf("%d  %d", a, MAX(5, 10));
//	system("pause");
//	return 0;
//}


////指针
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	*p = 20;//a=20
//	printf("%p\n", &a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	int a = 2;
//	double b = 3.14;
//	char* pc = &ch;
//	int* pa = &a;
//	double* pb = &b;
//	printf("%d", sizeof(ch));//1
//	printf("%d", sizeof(a));//4
//	printf("%d", sizeof(b));//8
//
//	printf("%d", sizeof(pc));//4
//	printf("%d", sizeof(pa));//4
//	printf("%d", sizeof(pb));//4
//
//	system("pause");
//	return 0;
//}


//结构体
struct peoinfo
{
	char name[20];
	short age;
	char sex[10];
	short hight;
	float weight;
};
int main()
{
	struct peoinfo p = { "肖战", 28, "男", 183, 65.5f };
	struct peoinfo* ptr = &p;
	printf("%s %d\n", p.name, p.age);
	printf("%s %d\n", ptr->name, ptr->hight);
	system("pause");
	return 0;
}