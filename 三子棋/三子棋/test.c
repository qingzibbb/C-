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
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//展示棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家玩
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑玩
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	if (ret == '#')
		printf("电脑赢\n");
	if (ret == 'P')
		printf("平局\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("请选择：>\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}

int main()
{
	test();
	return 0;
}