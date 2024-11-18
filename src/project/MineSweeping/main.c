//
// Created by xuxiao on 24-11-17.
//

#include <stdio.h>

#include "game.h"

void menu() {
    printf("1. Play\n");
    printf("0. Exit\n");
}

void game() {
    char mine[ROWS][COLS] = {0}; // 存放布置好雷的信息
    char show[ROWS][COLS] = {0}; // 存放用户显示的信息
    initBoard(mine,ROWS,COLS,'0');
    initBoard(show,ROWS,COLS,'*');
    setMine(mine,ROW,COL);
    // displayBoard(mine,ROW,COL);
    displayBoard(show,ROW,COL);
    //
    findMine(mine,show,ROW,COL);
}

int main() {
    int input = 0;
    do {
        menu();
        printf("请选择\n ");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏'\n");
                break;
            default:
                printf("输入错误\n");
        }
    } while (input);
}
