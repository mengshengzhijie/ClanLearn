
int my_strlen(char *str) {
    if (*str != '\0') {
        return 1 + my_strlen(str + 1);
    } else {
        return 0;
    }
    //return *str != '\0' ? 1 + my_strlen(str + 1) : 0;
}
int main() {
    char *arr = "abc";
    int len = my_strlen(arr);
    printf("%d", len);
}