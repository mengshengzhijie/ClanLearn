//
// Created by xuxiao on 24-9-1.
//
#include <stdio.h>
#include<float.h>
int main() {
    int i =10;
    float f = 3.14;
    double d = i + f;
    int ii;
    ii = (int)d;
    printf("d = %f\n", d);
    printf("ii = %d\n", ii);
    return 0;
}