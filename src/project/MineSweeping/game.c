//
// Created by xuxiao on 24-11-17.
//

#include "game.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initBoard(char board[ROWS][COLS], int row, int col, char c) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            board[i][j] = c;
        }
    }
}

void displayBoard(char board[ROWS][COLS], int row, int col) {
    for (int i = 0; i < col + 10; ++i) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i <= col; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= row; ++i) {
        printf("%d ", i);
        for (int j = 1; j <= col; ++j) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < col + 10; ++i) {
        printf("-");
    }
    printf("\n");
}

void setMine(char board[ROWS][COLS], int row, int col) {
    int count = EASY_COUNT;
    srand((unsigned int) time(NULL));
    while (count) {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0') {
            board[x][y] = '1';
            count--;
        }
    }
}

int getMineCount(char board[ROWS][COLS], int x, int y) {
    return (board[x - 1][y] +
            board[x - 1][y - 1] +
            board[x][y - 1] +
            board[x + 1][y - 1] +
            board[x + 1][y] +
            board[x + 1][y + 1] +
            board[x][y + 1] +
            board[x - 1][y + 1] - 8 * '0');
    //int sum = 0;
    // for (int dx = -1; dx <= 1; ++dx) {
    //     for (int dy = -1; dy <= 1; ++dy) {
    //         if (dx == 0 && dy == 0) continue; // 跳过当前位置
    //         int nx = x + dx;
    //         int ny = y + dy;
    //         if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
    //             sum += board[nx][ny];
    //         }
    //     }
    // }
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT) {
        printf("输入行号和列号");
        scanf("%d %d", &x, &y);
        if (show[x][y] != '*') {
            printf("请勿重复点击");
        } else {
            if ((x >= 1 && x <= row) && (y >= 1 && y <= col)) {
                if (mine[x][y] == '1') {
                    printf("你死了");
                    displayBoard(mine, row, col);
                    break;
                } else {
                    int count = getMineCount(mine, x, y);
                    show[x][y] = count + '0';
                    displayBoard(show, row, col);
                    win++;
                }
            } else {
                printf("输入有误");
            }
        }
    }
    if (win == row * col - EASY_COUNT) {
        printf("你赢啦");
        displayBoard(show, row, col);
    }
}
