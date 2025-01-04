//
// Created by xuxiao on 25-1-5.
//
#include <stdio.h>
#include <string.h>
// int main () {
//     int a = 3;
//     int b = 5;
//     int c = a || b;
//     printf("%d\n", c);
//     if (a && b) {
//
//     }
// }

// int is_leap_yare(int y) {
//     //可以被4整除，但是不能被100整除，或者能被400整除
//     if (((y % 4 == 0)&&(y & 400 != 0))||(y % 400 == 0)) {
//         return 1;
//     } else {
//         return 0;
//     }
// }
//
// int main () {
//
// }

// int main () {
//     int i = 0, a = 0, b = 2, c = 3, d = 4;
//     i = a++ && b ++ && d ++;
//     printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
// }
struct Stu {
    char name[20];
    int age;
    double score;
};

void set_stu(struct Stu* ps) {
    // strcpy((*ps).name, "xuxiao");
    // (*ps).age = 10;
    // (*ps).score = 100;
    strcpy(ps->name, "xuxiao");
    ps->age = 10;
    ps->score = 100;
}

void print_stu(struct Stu ss) {
    printf("%s %d %f\n", ss.name, ss.age, ss.score);
}

int main() {
    struct Stu s = {0};
    set_stu(&s);
    print_stu(s);
}
