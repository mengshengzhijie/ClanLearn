//
// Created by xuxiao on 24-11-11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char arr1[] = "welcome to C !!!";
    char arr2[] = "################";

    int left = 0;
    int right = strlen(arr1)-1;
    // int right = sizeof(arr1)/sizeof(arr1[0])-2;

    while (left <= right) {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        sleep(1);
        system("clear");
        left ++;
        right --;
    }
    return 0;