//
// Created by xuxiao on 25-1-10.
//


// int main (){
//     // int a = 10; // a是整形变量，占用4个字节的内存空间
//     // int *p = &a; // p是整形指针变量，占用4个字节的内存空间
//     // int **q = &p; // q是整形指针指针变量，占用4个字节的内存空间
//     int a = 0x11223344;
//
// }
// #include <stdio.h>
//
// // int* text() {
// //     int a = 10;
// //     return &a;
// // }
// // int main () {
// //     int *p = text();
// //     printf("%d\n", *p);
// //     return 0;
// // }
//
// int main() {
//     int a = 10;
//     int* b = NULL;
//     *b = a;
// }

// #define N_V 5
// float values[N_V]
// float* vp
// for (vp = values[0]; vp < &values) {
//         *vp = 0.0;
// }

int main() {
    int arr[10] = {0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    // for (i = 0; i < sz; i++) {
    //     arr[i] = 1;
    // }
    int *p = arr;
    for (int i = 0; i < sz; ++i) {
        *p = 1;
        p++;
    }
}

