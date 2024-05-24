#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
int comp(const void* a, const void* b) // hàm so sánh tăng dần
{
    int* x = (int*)a;
    int* y = (int*)b;

    return abs(*x) - abs(*y);
}
int nguyento(int n) // tìm giá trị số nguyên tố
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}
*/

int main()
{
	int n;
	scanf_s("%d", &n);

    // Khai báo mảng với kích thước n (sử dụng malloc)
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return -1;
    }
    for (int i = 0; i < n; i++)
        scanf_s("%d", &a[i]);

    int min = 1e9;
    for (int i = 0; i < n; i++)
        if (min > a[i])
            min = a[i];
        // min = fmin(min,a[i]);

    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == min)
            ++count;

    printf("%d", count);
            
	return 0;
}