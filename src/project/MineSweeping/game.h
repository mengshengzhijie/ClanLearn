//
// Created by xuxiao on 24-11-17.
//

#ifndef GAME_H
#define GAME_H

#define ROW 9
#define COL 9
#define EASY_COUNT 10
#define ROWS ROW+2
#define COLS COL+2

//初始化
void initBoard(char board[ROWS][COLS], int row, int col,char c);

//显示
void displayBoard(char board[ROWS][COLS],int row,int col);

//随机雷
void setMine(char board[ROWS][COLS], int row, int col);

//排查
void findMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

//统计
int getMineCount(char board[ROWS][COLS], int x, int y);
#endif //GAME_H
