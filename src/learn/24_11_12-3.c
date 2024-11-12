//
// Created by xuxiao on 24-11-12.
//
#include <stdio.h>
// int main(){
//     unsigned int num = 0;
//     scanf("%u", &num);
//     while (num) {
//         printf("%d", num % 10);
//         num = num / 10;
//     }
// }
//递归的实现
void print(unsigned int n) {
    if (n > 9) {
        print(n / 10);
    }
    printf("%d", n % 10);
}

int main() {
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);
}
