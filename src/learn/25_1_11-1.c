//
// Created by xuxiao on 25-1-11.
//

#include <stdio.h>

int count_num_of_1(unsigned int n) {
    int count = 0;
    while (n != 0) {
        if ((n % 2) == 1) {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int count_num_of_2(int n) {
    int count = 0;
    for (int i = 0; i < 32; ++i) {
        if (((n >> i) & 1) == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    scanf("%d",&num);
    int n = count_num_of_1(num);
    int u = count_num_of_2(num);
    printf("%d\n%d",n,u);
}