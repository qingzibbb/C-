#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("****   1. game   ****\n");
	printf("****   0. exit   ****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	int ret = 0;
	//��ʼ������
	InitBoard(board, ROW, COL);
	//չʾ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	if (ret == '#')
		printf("����Ӯ\n");
	if (ret == 'P')
		printf("ƽ��\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("��ѡ��>\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("�����������������\n");
		break;
	}
}

int main()
{
	test();
	return 0;
}