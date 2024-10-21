//
// Created by xuxiao on 24-9-8.
//

#include <stdio.h>
int main() {
    int a = 3;
    if ( a == 3 ) {
        printf("3=3");
    }
    int age;
    // if ( age >= 18 ) {
    //     printf("成年了");
    // }
    if ( age < 18 ) {
        printf("未成年");
    } else {
        printf("成年了");
    }
    int age = 10;
    if (age < 18) {
        printf("青少年");
    } else if(age >= 18 && age < 28) {
        printf("青年");
    } else {
        printf("老年");
    }
    }
int main() {
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("偶数");
    } else {
        printf("奇数");
    }
}
int main() {
    int i = 0;
    while (i <= 100) {
        if(i % 2 != 0)
            printf("%d\n", i);
        i++;
    }
}
int main() {
    int day = 0;
    scanf("%d", &day);
    if (day == 1) {
        printf("星期一");
    } else if (day == 2) {
        printf("星期二");
    } else if (day == 3) {
        printf("星期三");
    } else if (day == 4) {
        printf("星期四");
    } else if (day == 5) {
        printf("星期五");
    } else if (day == 6) {
        printf("星期六");
    } else if (day == 7) {
        printf("星期日");
    } else {
        printf("输入错误");
    }
     switch (day) {
         case 1:
             printf("星期一");
             break;
         case 2:
             printf("星期二");
             break;
         case 3:
             printf("星期三");
             break;
         case 4:
             printf("星期四");
             break;
         case 5:
             printf("星期五");
             break;
         case 6:
             printf("星期六");
             break;
         case 7:
             printf("星期日");
             break;
     }
    switch (day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日");
            break;
        case 6:
        case 7:
            printf("休息日");
            break;
        default:
            printf("输入错误");
    }
}

int main() {
    int n = 1;
    int m = 2;
    switch (n) {
        case 1:m++;
        case 2:n++;
        case 3:
            switch (n) {
                case 1:n++;
                case 2:m++;n++;
                    break;
                default:
                    break;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("m=%d,n=%d", m, n);
    return 0;
}
int main() {
    // while (1) {
    //     printf("la");
    // }
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
}


