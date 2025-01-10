//
// Created by xuxiao on 25-1-10.
//

#include <stdio.h>

// int main () {
//     int a = 1;
//     int b = (++a) + (++a) + (++a);
//     printf("%d\n", b);
// }

// int fib(int n) {
//     if (n < 2)
//         return n;
//     else
//         return fib(n - 1) + fib(n - 2);
// }
//
// int main () {
//     int  n;
//     scanf("%d", &n);
//     int m = fib(n);
//     printf("%d\n", m);
//
// }

int main () {
    int n = 0;
    scanf("%d",&n);
    int arr[n],arr2[n-1];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    int del = 0;
    scanf("%d",&del);
    for (int i = 0,j = 0; i < n; ++i) {
        if (arr[i] != del)
            arr[j++] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr2[i]);
    }
}