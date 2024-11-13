//
// Created by xuxiao on 24-11-13.
//
#include <stdio.h>
// int my_strlen(char *str) {
//     int conunt = 0;
//     while (*str != '\0') {
//         conunt++;
//         str++;
//     }
//     return conunt;
// }
// int my_strlen(char *str) {
//     if (*str != '\0') {
//         return 1 + my_strlen(str + 1);
//     } else {
//         return 0;
//     }
//     //return *str != '\0' ? 1 + my_strlen(str + 1) : 0;
// }
// int main() {
//     char *arr = "abc";
//     int len = my_strlen(arr);
//     printf("%d", len);
// }
// int fac(int n) {
//     // if (n <= 1) {
//     //     return 1;
//     // } else {
//     //     return n * fac(n - 1);
//     // }
//     // return n <= 1 ? 1 : n * fac(n - 1);
//     // int ret;
//     // for (int i = 1; i<= n; i++) {
//     //    ret *= i;
//     // }
//     // return ret;
// }
// int main() {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = fac(n);
//     printf("%d",ret);
// }
// int Fib(int n) {
//     if (n <= 2) {
//         return 1;
//     } else {
//         return Fib(n - 1) + Fib(n - 2);
//     }
// }
// int Fib(int n) {
//     int a = 1,b = 1,c = 0;
//     while (n >= 3) {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }
// int main() {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = Fib(n);
//     printf("%d",ret);
// }
// void test(int n) {
//     if (n < 10000)
//         test(n + 1);
// }
// int main() {
//     test(1);
// }
