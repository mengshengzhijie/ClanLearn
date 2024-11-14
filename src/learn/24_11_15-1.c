//
// Created by xuxiao on 24-11-15.
//

#include <stdio.h>

int main() { //如何优雅的写出一陀屎
    int arr[3] = {0};
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    if (arr[0] > arr[1]) {
        if (arr[0] > arr[2]) {
            printf("%d ", arr[0]);
            if (arr[1] > arr[2]) {
                printf("%d ", arr[1]);
                printf("%d\n", arr[2]);
            } else {
                printf("%d ", arr[2]);
                printf("%d\n", arr[1]);
            }
        } else {
            printf("%d ", arr[2]);
            printf("%d ", arr[0]);
            printf("%d\n", arr[1]);
        }
    } else {
        if (arr[1] > arr[2]) {
            printf("%d ", arr[1]);
            if (arr[0] > arr[2]) {
                printf("%d ", arr[0]);
                printf("%d\n", arr[2]);
            } else {
                printf("%d ", arr[2]);
                printf("%d\n", arr[0]);
            }
        } else {
            printf("%d ", arr[2]);
            printf("%d ", arr[1]);
            printf("%d\n", arr[0]);
        }
    }

    return 0;
}


void printSortedArray(int arr[], int size) {
    int tempArr[3];
    for (int i = 0; i < 3; ++i) {
        tempArr[i] = arr[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (tempArr[i] < tempArr[j]) {
                int temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }
        }
    }
    printf("%d %d %d\n", tempArr[0], tempArr[1], tempArr[2]);
}

int main() {
    int arr[] = {5, 1, 3};
    // scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int size = sizeof(arr) / sizeof(arr[0]);
    printSortedArray(arr, size);
    return 0;
}
