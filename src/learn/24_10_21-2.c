#include <stdio.h>
//
// Created by xuxiao on 24-10-21.
//
// int main() {
//     int i = 1;
//     do
//         printf("%d\n", i);
//     while (i++ < 10);
//     return 0;
// }
// int main() {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     scanf("%d",&n);
//     for (i = 1;i <= n ; i++) {
//         ret = ret * i;
//         printf("|%d\n",ret);
//     }
//     printf("\n%d\n",ret);
// }

// int main() {
//     int j = 0;
//     for (int i = 1; i <= 10; i++) {
//         j+=i;
//         printf(" |%d",j);
//     }
//     printf("\n%d\n",j);
// }

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    // for (i = 0; i < sz; i++) {
    //     if (arr[i] == k) {
    //         printf("下标是%d",i);
    //         break;
    //     }
    //     }
    // if (i == sz) {
    //     printf("没有找到");
    // }
    int left = 0; // 左边界
    int right = sz - 1; // 右边界

    while (left <= right) {
        int mid = (left + right) / 2; // 中间值下标
        if (arr[mid] < k) {
            left = mid + 1;
        } else if (arr [mid] > k) {
            right = mid - 1;
        }
        else {
            printf("下标是%d",mid);
            break;
        }
    }
    if (left > right) {
        printf("没有找到");
    }
}
