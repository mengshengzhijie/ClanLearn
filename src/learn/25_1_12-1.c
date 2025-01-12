//
// Created by xuxiao on 25-1-12.
//

#include <stdio.h>

int count_diff_bit(int m, int n) {
    int count = 0;
    // for (int i = 0; i < 32; ++i) {
    //     if (((m >> 1) & 1) != ((n >> 1) & 1)) {
    //         count++;
    //     }
    // }
    int ret = m ^ n;
    while (ret) {
        ret = ret & (ret - 1);
        count++;
    }
    return count;
}

int main() {
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int ret = count_diff_bit(m, n);
    printf("%d\n", ret);
}
