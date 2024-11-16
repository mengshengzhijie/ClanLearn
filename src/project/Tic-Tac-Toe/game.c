//
// Created by xuxiao on 24-11-16.
//

#include "game.h"

void IntBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            board[i][j] = ' ';
        }
    }
}

// //v1
// void DisplayBoard(char board[ROW][COL] , int row , int col) {
//     for (int i = 0; i < row; ++i) {
//         //打印数据
//         printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//         //打印分割线
//         if (i < row-1) {
//             printf("---|---|---\n");
//         }
//     }
// }
//v2
void DisplayBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        if (i < row) {
            for (int j = 0; j < row; ++j) {
                printf("---");
                if (j < row - 1)
                    printf("|");
            }
            if (i < row - 1)
                printf("\n");
        }
    }
    printf("\n");
}

void PlayMove(char board[ROW][COL], int row, int col) {
    int x = 0, y = 0;
    printf("玩家输入: >");
    while (1) {
        printf("请输入坐标");
        scanf("%d%d", &x, &y);
        if ((x >= 1 && x <= row) && (y >= 1 && y <= col)) {
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            } else {
                printf("位置被占用\n");
            }
        } else {
            printf("坐标非法\n");
        }
    }
}

void ComeputerMove(char board[ROW][COL], int row, int col) {
    printf("电脑下棋：>\n");
    int x = 0;
    int y = 0;
    while (1) {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ') {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL],int row,int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

char IsWin(char board [ROW][COL],int row, int col) {
    //row
    for (int i = 0; i < row; ++i) {
        if((board[i][0] == board[i][1] ) && (board[i][1] == board[i][2]) && board[i][1]!= ' ') {
            return board[i][1];
        }
    }
    //col
     for (int j = 0; j < col; ++j) {
        if((board[0][j] == board[1][j] ) && (board[1][j] == board[2][j]) && board[1][j]!= ' ') {
            return board[1][j];
        }
    }
    //X
    if((board[0][0] == board[1][1]) &&(board[1][1] == board[2][2])) {
        return board [1][1];
    }
    if((board[0][2] == board[1][1]) &&(board[1][1] == board[2][0])) {
        return board [1][1];
    }
    //没有人赢
    if(IsFull(board,row,col)) {
        return 'Q';
    }
    //游戏继续
    return 'C';
}

