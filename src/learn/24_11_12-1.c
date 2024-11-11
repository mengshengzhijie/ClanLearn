//
// Created by xuxiao on 24-11-12.
//
#include <stdio.h>
#include <stdbool.h>
// int main() {
//     int year = 0;
//     for (year = 1000; year <= 2000; year++) {
//         if (year % 4 == 0) {
//             if (year % 100 !=0) {
//                 printf(" |>%d",year);
//             }
//         }if(year % 400 == 0) {
//             printf(" |>%d", year);
//         }
//     }
// }

// int main() {
//     int year = 0;
//     for (year = 1000;year <= 2000; year++) {
//        if ( (year % 4 == 0) && (year % 100 != 0) || year % 400 == 0) {
//            printf(" |>%d", year);
//        }
//     }
// }
// int is_leap_year(int y) {
//     if ( (y % 4 == 0) && (y % 100 != 0) || y % 400 == 0) {
//         return 1;
//     } else {
//         return 0;
//     }
// }
// int main () {
//     for (int year = 1000;year <= 2000; year++ ) {
//         if (is_leap_year(year)) {
//             printf("%d ",year);
//         }
//     }
// }

// int binary_search(int arr[],int k, int sz) {
//     int left = 0;
//     int right = sz - 1;
//     while (left <= right) {
//         int mid = left + (right - left) /2 ;
//         printf("%d",mid);
//         if (arr[mid] < k) {
//             left = mid + 1;
//         } else if (arr[mid] > k) {
//             right = mid - 1;
//         } else {
//             return mid;
//         }
//     }
//     return  -1;
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     //找到来返回下标
//     //找不到返回-1
//     int ret = binary_search(arr,k,sz);
//     if (ret == -1) {
//         printf("没有找到");
//     } else {
//         printf("找到了，下标是%d",ret);
//     }
//
// }

// int  binary_search(int arr[],int k) {
//     int left = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int right = sz - 1;
//     while (left <= right) {
//         int mid = left + (right - left) /2 ;
//         printf("%d",mid);
//         if (arr[mid] < k) {
//             left = mid + 1;
//         } else if (arr[mid] > k) {
//             right = mid - 1;
//         } else {
//             return mid;
//         }
//     }
//     return  -1;
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     //找到来返回下标
//     //找不到返回-1
//     int ret = binary_search(arr,k);
//     if (ret == -1) {
//         printf("没有找到");
//     } else {
//         printf("找到了，下标是%d",ret);
//     }
//
// }

// bool is_prime(int n ) {
//     for (int j = 2; j <= n; j++) {
//         if (n % j == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     for (int i = 100; i <=200; i++) {
//         if (is_prime(i)) {
//             printf("%d ",i);
//         }
//     }
// }
// void add(int *p) {
//     *p += 1;
// }
//
// int main() {
//     int num = 0;
//     add(&num);
//     printf("%d",num);
//     add(&num);
//     printf("%d",num);
//     add(&num);
//     printf("%d",num);
//     add(&num);
//     printf("%d",num);
//
//
// }

// int add(int n) {
//     return n + 1;
// }
//
// int main() {
//     int num = 0;
//     add(num);
//     printf("%d",num);
//     add(num);
//     printf("%d",num);
//     add(num);
//     printf("%d",num);
//     add(num);
//     printf("%d",num);
//
//
// }
