//
// Created by xuxiao on 24-11-11.
//

// #include <stdio.h>
//
// // void swap(int x,int y) {
// //     int z = 0;
// //     z = x;
// //     x = y;
// //     y = z;
// // }
// void swap2(int *x,int *y) {
//     int z = 0;
//     z = *x;
//     *x = *y;
//     *y = z;
// }
//
// int add(int x, int y) {
//     int z = 0;
//     z = x + y;
//     return z;
// }
// int main() {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     printf("交换前 a = %d, b = %d\n",a,b);
//     // swap(a, b);
//     swap2(&a,&b);
//     printf("交换后 a = %d, b = %d\n",a,b);
//     add(a, b);
//     printf("a + b = %d\n",add(a,b));
// }

// #include <stdio.h>
// int main() {
//     int i = 0;
//     int flag = 1; //1表示是素数
//     for (i = 100; i <= 200; i++) {
//         int j = 0;
//         for (j = 2; j <= i -1; j++) {
//             if (i % j == 0) {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1) {
//             printf("%d\n", i);
//         }
//     }
//
// }
