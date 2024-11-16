//
// Created by xuxiao on 24-11-16.
//
#include <stdio.h>
// int main() {
//     int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 4; ++j) {
//             printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main () {
//     // int arr[] = {1,2,3,4,5,6};
//     // for (int i = 0; i < 7; ++i) {
//     //     printf("%d",arr[i]);
//     // }
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for (int i = 0; i < 1; ++i) {
//         for (int j = 0; j <=4; ++j) {
//             printf("%d",arr[i][j]);
//         }
//     }
// }
// void bubble_sort(int arr[] ,int sz) {
//     //大小可写可不写，但是必须指点是数组
//     for (int i = 0; i < sz - 1; ++i) {
//         for (int j = 0; j < sz - 1 - i; ++j) {
//             if(arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     //改变数组顺序
//     //冒泡排序，对数组排序
//     int sz = (sizeof(arr) / sizeof(arr[0])) - 1;
//     bubble_sort(arr,sz);
//     for (int i = 0; i < sz - 1; ++i) {
//         printf("%d ",arr[i]);
//     }
// }

// int main () {
//     int arr[10];
//     printf("%p\n",arr);
//     printf("%p\n",arr+1);
//     printf("\n");
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[0] + 1);
//     printf("\n");
//     printf("%p\n",&arr);
//     printf("%p\n",&arr + 1);
//
// }

// int main () {
//     int arr[3][4] = {};
//     printf("%p\n",arr);
//     printf("%p\n",arr + 1);
//     printf("%d\n",sizeof(arr) / sizeof(arr[1]));
//     printf("%d\n",sizeof(arr[0]) / sizeof(arr[0][0]));
// }