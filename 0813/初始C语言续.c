#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

////������
////a++����ʹ�ã���++
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
//	//(ǿ������ת��)
//	int a = (int)3.14;
//
//	//��λ�루&����|�� 
//	//�߼��루&&����||)---ֻ��ע���
//	int b = 3;
//	int c = 4;
//	int d = b&c;//011 100 000
//	int e = b&&c;//1
//	printf("%d %d\n", d, e);
//	system("pause");
//	return 0;
//}


////����������
////���ű��ʽ:�������������㣬�������ʽֻ�����һ��ʽ�ӵĽ����
////          �����һ��ʽ���ֻ���ǰ���ʽ�ӷ����ı䡣
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


////�����ⲿ����
////�Ĵ���
//extern int bjyx;
//int main()
//{
//	printf("bjyxszdԲ��%d\n", bjyx);
//
//	//register-������������Ž��Ĵ�����
//	register int a = 10;
//	system("pause");
//	return 0;
//}


//�����ض���
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
////��Ϊ
//typedef struct S
//{
//	int a;
//	char b;
//}S;
//int main()
//{
////	struct S s;//�ṹ���ʹ�ã�������Ϊ�鷳
//	S ss;
//	system("pause");
//	return 0;
//}


////static:���ξֲ�����---�ı��������ڣ��䳤��
////       ����ȫ�ֱ���---�ı�������ֻ��������Դ�ļ����ã�---�ı����������ԣ��ⲿ->�ڲ���
////       ���κ���-------�ı�������ֻ��������Դ�ļ����ã�---�ı����������ԣ��ⲿ->�ڲ���
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


////#define�����ʶ�������ͺ�
//#define max 1000
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = max;
//	printf("%d  %d", a, MAX(5, 10));
//	system("pause");
//	return 0;
//}


////ָ��
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


//�ṹ��
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
	struct peoinfo p = { "Фս", 28, "��", 183, 65.5f };
	struct peoinfo* ptr = &p;
	printf("%s %d\n", p.name, p.age);
	printf("%s %d\n", ptr->name, ptr->hight);
	system("pause");
	return 0;
}