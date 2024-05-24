/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Hàm so sánh cho qsort
int so_sanh(const void* a, const void* b) {
     char* x = (char*)a;
     char* y = (char*)b;
    return strcmp(x, y);
}

int main() {
    char c[10005];
    fgets(c, 10005, stdin);

    // Loại bỏ ký tự newline nếu có
    if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
        c[strlen(c) - 1] = '\0';
    }

    // Chuyển đổi tất cả các ký tự thành chữ thường
    for (int i = 0; i < strlen(c); i++) {
        c[i] = tolower(c[i]);
    }

    // Mảng con trỏ để lưu trữ các từ
    char a[10000][50];
    int n = 0;
    char* context = NULL;
    char* word = strtok_s(c, " ", &context);

    while (word !=NULL)
    {

        strcpy_s(a[n], sizeof(char), word);
        ++n;
        word = strtok_s(NULL, " ", &context);
    }

    qsort(a, n, sizeof(a[0]), so_sanh);
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (strcmp(a[i], a[i - 1]) != 0) {
            ++cnt;
        }
    }

    printf("%d", cnt);

    return 0;
}

*/