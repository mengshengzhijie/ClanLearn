//
// Created by xuxiao on 24-11-11.
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
//
// int main() {
//     char arr1[] = "welcome to C !!!";
//     char arr2[] = "################";
//
//     int left = 0;
//     int right = strlen(arr1)-1;
//     // int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//     while (left <= right) {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n",arr2);
//         sleep(1);
//         system("clear");
//         left ++;
//         right --;
//     }
//     return 0;
// }

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则//提示登录成，如果三次均输入错误，则退出程序。
//比较两个字符串不用==，用strcmp
//返回值是0，证明相等
#include <stdio.h>
#include <string.h>

int main() {
    int i =0;
    char password[20]= {0};
    for (i = 0; i < 3; i++) {
        printf("请输入密码:>");
        scanf("%s",password);//数组不需要取地址
        if (strcmp(password,"abcdef") == 0) {
            printf("密码正确\n");
            break;
        } else {
            printf("登陆错误");
        }
    }
    if (i == 3) {
        printf("三次密码都错误");
    }
}
