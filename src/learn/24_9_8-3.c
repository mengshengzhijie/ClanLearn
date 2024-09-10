//
// Created by xuxiao on 24-9-8.
//
#include<stdio.h>

// int main() {
//     int a =10; // 向内存堆申请一个int大小的空间，并将a的值赋给该空间
//     int *p = &a;
//     printf("a = %d, p = %p\n", a,p );
//     return 0;
// }

// int main() {
//     printf("%d\n",sizeof(char*));
//     printf("%d\n",sizeof(short*));
//
//     return 0;
// }

// struct Stu {
//     //结构体成员
//     char name[20];
//     int age;
//     char sex[10];
//     char tele[12];
// };
// void print(struct Stu* ps) {
//     // printf("%s %d %s %s\n",ps->name,ps->age,ps->sex,ps->tele);
//     printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
// }
// int main() {
//     struct Stu s = {"zhangsan",20,"man","123456789"};
//     // printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
//     print(&s);
//     return  0;
// }
