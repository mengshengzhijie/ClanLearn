//
// Created by xuxiao on 24-11-16.
//

#include "game.h""

void meun() {
    printf("********************************\n");
    printf("******1 : play   0 : exit*******\n");
    printf("********************************\n");
}

void game() {
    char board[ROW][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char ret = 0;
    //初始化棋盘函数
    IntBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
    //开始下棋
    while (1) {
        PlayMove(board,ROW,COL);
        //判断输赢
        ret = IsWin(board,ROW,COL);
        if (ret != 'C') {
            break;
        }
        ComeputerMove(board,ROW,COL);
        //判断输赢
        ret = IsWin(board,ROW,COL);
        if (ret != 'C') {
            break;
        }
        DisplayBoard(board,ROW,COL);
    }
    if (ret == '*') {
        printf("玩家赢");
    } else if (ret == '#') {
        printf("电脑赢");
    } else {
        printf("平局");
    }
}

int main() {
    srand((unsigned int) time(NULL));
    int input;
    do {
        meun();
        printf("请选择:\n");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                sleep(2);
                break;
            case 0:
                printf("推出游戏");
                break;
            default:
                printf("选择错误");
                break;
        }
    } while (input);
}
