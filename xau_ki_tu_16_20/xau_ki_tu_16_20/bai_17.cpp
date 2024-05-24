/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


//Giải thích Đề bài
//Đề bài yêu cầu bạn thực hiện các bước sau :
//
//Đọc một xâu ký tự S chứa các từ được phân cách bởi một hoặc nhiều dấu cách.
//Sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần và giảm dần.
//In ra các từ đã sắp xếp theo thứ tự từ điển tăng dần trên dòng đầu tiên.
//In ra các từ đã sắp xếp theo thứ tự từ điển giảm dần trên dòng thứ hai.
//
//Các Bước Giải Quyết
//Đọc Xâu Ký Tự : Đọc xâu ký tự từ đầu vào.
//Tách Các Từ : Tách các từ trong xâu bằng cách sử dụng dấu cách làm dấu phân cách.
//Sắp Xếp Từ :
//Sắp xếp các từ theo thứ tự từ điển tăng dần.
//Sắp xếp các từ theo thứ tự từ điển giảm dần.
//In Kết Quả : In ra các từ đã sắp xếp theo thứ tự từ điển tăng dần và giảm dần.


//------------- cách 1-------------------//
//int tang_dan(const void* a, const void* b) {
//    char* x = (char*)a;
//    char* y = (char*)b;
//    return strcmp(x, y);
//}
//
//int main() {
//    char c[10005];
//
//    fgets(c, 10005, stdin);
//
//    // Loại bỏ ký tự newline nếu có
//    if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
//        c[strlen(c) - 1] = '\0';
//    }
//
//    char a[10000][50];
//    int n = 0;
//    char* context = NULL;
//    char* word = strtok_s(c, " ", &context);
//    while (word != NULL) {
//        strcpy_s(a[n], sizeof(a[n]), word); // Sử dụng strcpy_s thay cho strcpy
//        ++n;
//        word = strtok_s(NULL, " ", &context);
//    }
//
//    qsort(a, n, sizeof(a[0]), tang_dan);
//
//    // In các chuỗi đã sắp xếp
//    for (int i = 0; i < n; i++) {
//        printf("%s ", a[i]);
//    }
//    printf("\n");
//    for (int i = n - 1; i >= 0; i--) {
//        printf("%s ", a[i]);
//    }
//
//    return 0;
//}

//----------------------------

//----------------------cách 2--------------------//

// Hàm so sánh tăng dần
int tang_dan(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

//strcmp: Hàm so sánh hai chuỗi trong thư viện chuẩn C.Nó trả về một số nguyên :
//         Số âm nếu chuỗi thứ nhất nhỏ hơn chuỗi thứ hai.
//         Số 0 nếu hai chuỗi bằng nhau.
//         Số dương nếu chuỗi thứ nhất lớn hơn chuỗi thứ hai

// Hàm so sánh giảm dần
int giam_dan(const void* a, const void* b) {
    return strcmp(*(const char**)b, *(const char**)a);
}

int main() {
    char c[10005];

    // Đọc xâu từ đầu vào
    fgets(c, 10005, stdin);

    // Loại bỏ ký tự newline nếu có
    if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
        c[strlen(c) - 1] = '\0';
    }

    // Mảng để lưu các từ
    char* a[10000];
    int n = 0;
    char* context = NULL;
    char* word = strtok_s(c, " ", &context);

    // Tách các từ và lưu vào mảng
    while (word != NULL) {
        a[n] = word;
        ++n;
        word = strtok_s(NULL, " ", &context);
    }

    // Sắp xếp tăng dần
    qsort(a, n, sizeof(char*), tang_dan);
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }
    printf("\n");

    // Sắp xếp giảm dần
    qsort(a, n, sizeof(char*), giam_dan);
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }

    return 0;
}


//------------------------------------------------//


*/