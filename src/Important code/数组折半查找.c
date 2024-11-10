//
// Created by xuxiao on 24-10-21.
//
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

    while (left <= right)
    {
//        int mid = (left + right) / 2; // 中间值下标
        int mid = left + (right - left) / 2;
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
