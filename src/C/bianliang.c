//
// Created by xuxiao on 24-9-1.
//
#include <stdio.h>
int x;
int y;
int a,q;

int addtwonum() {
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    return x + y;
}
int xuxiao() {
    extern a;
    extern q;
    a = 1;
    q = 2;
    return a + q;
}
int main() {
 int result = addtwonum();
    printf("result 的数值 %d\n", result);
int xuxiao = xuxiao();
    printf("xuxiao 的数值 %d\n", xuxiao);
}
