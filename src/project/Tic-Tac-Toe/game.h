//
// Created by xuxiao on 24-11-16.
//

#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROW 3
#define COL 3

//初始化棋盘
void IntBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下的位置随机下
void ComeputerMove(char board[ROW][COL], int row, int col);

//输赢
//电脑赢 - #
//玩家赢 - *
//平局 - Q
//继续 - C
char IsWin(char [ROW][COL],int row, int col);

//判断棋盘是否有满
int IsFull(char board[ROW][COL],int row,int col);

#endif //GAME_H
