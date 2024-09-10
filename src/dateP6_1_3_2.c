//
// Created by xuxiao on 24-8-15.
//
#include<stdio.h>
#include <stdio.h>

#define N 100 // 假设矩阵的最大可能尺寸

int main() {
    int n = 5; // 假设 n 的值为 5
    int a[N][N], b[N][N], c[N][N]; // 定义矩阵

    // 假设 a 和 b 已经初始化
    // ...

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            c[i][j] = 0;
            for (int k = 1; k <= n; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // 输出结果或其他处理
    printf("结果如下：\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    // ...

    return 0;
}
