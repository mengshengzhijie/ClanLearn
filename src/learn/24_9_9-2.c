//
// Created by xuxiao on 24-9-9.
//

#include<stdio.h>

// int main() {
//     int ch = 0;
//     while  ((ch = getchar()) != EOF) {
//         putchar(ch);
//     }
//     return 0;
// }

int main() {
    char password[20] = {};
    printf("please input password:");
    scanf("%s",&password);
    printf("confirm password:(yes/no)");
    int con = getchar();
    if ('Y' == con) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}