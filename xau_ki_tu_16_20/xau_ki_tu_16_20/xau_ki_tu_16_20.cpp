/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

//--------------------------------
//cho xâu kí tự s, tiến hành sắp xếp kí tự trong xâu s theo thứ tự tăng dần, giảm dần theo thứ tự từ điển rồi in ra màn hình.
//
//đầu vào
//dòng duy nhất chứa xâu s
//
//giới hạn
//1 <= len(s) <= 1000
//
//s chỉ chứa kí tự là chữ cái hoặc chữ số.
//
//đầu ra
//dòng 1 in ra xâu s sau khi sắp tăng dần
//
//dòng 2 in ra xâu s sau khi sắp giảm dần
//--------------------------------------------

int tang_dan(const void* a, const void* b) {
    char x = *(char*)a;
    char y = *(char*)b;
    return x - y;
}

int main() {
    char c[10005];

    // Sử dụng "%s" đúng cách với `scanf_s` và cung cấp kích thước của bộ đệm
    scanf_s("%s", c, (unsigned)_countof(c));

    // qsort yêu cầu kích thước của mỗi phần tử và số lượng phần tử được truyền vào
    qsort(c, strlen(c), sizeof(char), tang_dan);
    printf("%s\n", c);

    // In chuỗi đã sắp xếp theo thứ tự ngược lại
    for (int i = strlen(c) - 1; i >= 0; i--) {
        printf("%c", c[i]);
    }


    return 0;
}

*/