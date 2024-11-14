//
// Created by xuxiao on 24-11-15.
//
#include <stdio.h>

// int main () {
//     for (int i = 1; i < 100; i++) {
//         if (i % 3 == 0) {
//             printf("%d\t", i);
//         }
//     }
// }

// int main() {
//     int a = 24, b = 18, c;
//     // scanf("%d %d", &a, &b);
//     // if (a < b) {
//     //     int c;
//     //     c = a, a = b, b = c;
//     // }
//     // for (int i = 0; i <= b; i++) {
//     //     if (a % i == 0 && b % i == 0) {
//     //         printf("%d\n", i);
//     //         return 0;
//     //     }
//     //     printf("%d不是",i);
//     // }
//     // int min = a < b ? a : b;
//     // int m = min;
//     // while (1) {
//     //     if (a % m == 0 && b % m == 0) {
//     //         printf("%d\n", m);
//     //         return 0;
//     //     }
//     //     m--;
//     // }
//
//     while ((c = a % b)) {
//             a = b;
//             b = c;
//     }
//     printf("%d",b);
// }

// int main() {
//     int count = 0;
//     for (int i = 1; i < 100; i++) {
//         if (i % 10 == 9)
//             count ++;
//         if (i / 10 == 9)
//             count++;
//     }
//     printf("%d",count);
// }

int main() {
    double m = 0;
    int flag = 1;
    for (int i = 1; i < 100; i++) {
        m = m + flag * (1.0 / i);
        flag = - flag;
    }
    printf("%lf", m);
}
