//
// Created by xuxiao on 24-11-15.
//
#include <stdio.h>
// int main() {
//     int n = 10;
//     int arr[] = {0};
//     char arr1[] = {0};
//     double date[1+1] = {0};
//     float as[n] = {0};
//
// }

int main () {
    // int arr[10];
    // char ch[5+5];
    // int n = -10;
    // double date[20 + n];
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // // for (int i = 0; i < sz; ++i) {
    // //     printf("%d ",arr[i]);
    // // }
    // for (int i = sz -1; i >= 0; --i) {
    //     printf("%d ",arr[i]);
    // }
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int arr [][4] = {0};
    char arr2[5][10];
    int sarr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d",arr[i][j]);
        }
    }

}