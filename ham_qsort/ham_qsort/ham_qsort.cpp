#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh cho qsort
int comp(const void* a, const void* b)
{
    int* x = (int*)a;
    int* y = (int*)b;
    if (*x < *y)
        return -1;
    else if (*x > *y)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Nhap so luong gia tri: ");
    scanf("%d", &n);

    // Khai báo mảng với kích thước n (sử dụng malloc)
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return -1;
    }

    // Nhập giá trị cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sắp xếp mảng
    qsort(a, n, sizeof(int), comp);

    // In ra mảng đã sắp xếp
    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ đã cấp phát
    free(a);

    return 0;
}
