//
// Created by xuxiao on 24-11-12.
//
#include <stdio.h>
#include <string.h>
// int main(){
//     unsigned int num = 0;
//     scanf("%u", &num);
//     while (num) {
//         printf("%d", num % 10);
//         num = num / 10;
//     }
// }
//递归的实现
// void print (unsigned int);
// void print(unsigned int n) {
//     if (n > 9) {
//         print(n / 10);
//     }
//     //递归退出条件
//     printf("%d", n % 10);
// }
//
// int main() {
//     unsigned int num = 1234;
//     print(num);
//     printf("\n\n");
//     printf("%d",123 % 10);
// }

int my_strlen(char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}
int main() {
    char arr[] = {"abc"};
    int len = my_strlen(arr);
    printf("%d\n",len);
}