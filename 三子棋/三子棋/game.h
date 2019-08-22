#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//‘*’--玩家赢
//‘#’--电脑赢
//‘p'--平局
//’c'--继续
char IsWin(char board[ROW][COL], int row, int col);

