//
// Created by xuxiao on 24-11-11.
//
#include <math.h>
#include <stdio.h>
// int main() {
//     int i = 0;
//     int cont = 0;
//     for (i = 100; i <= 200; i++) {
//     int flag = 1;//标志位，默认为1，表示素数
//         //判断i是否为素数，是就打印
//     int j = 0;
//         for (j = 2; j <= i -1; j++) {
//             if (i % j == 0) {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1) {
//             printf("%d\n", i);
//             cont++;
//
//         }
//     }
//     printf("%d",cont);
// }

//v2
// int main () {
//     int i = 0;
//     int cont = 0;
//     for (i = 101; i <= 200; i+=2) {
//         int flag = 0;
//         int j = 0;
//         for (j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             printf("%d\n", i);
//             cont++;
//         }
//     }
//     printf("%d",cont);
// }

int is_prime(int n) {
    int j = 0;
    for (j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++) {
       if(is_prime(i)) {
           printf("%d\n",i);
           count++;
       }
    }
    printf("%d\n",count);
}