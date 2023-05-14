#ifndef GAME_H
#define GAME_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#endif // GAME_H
#define ROW 3
#define COL 3

//函数声明
//初始化
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL],int row, int col);
//玩家下棋
void PlayerMove(char board[][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[][COL],int row, int col);

//玩家赢 - *
//电脑赢 - #
//平局 - Q
//继续 - C
char IsWin(char board[][COL],int row, int col);
