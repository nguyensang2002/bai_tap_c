#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct Sinhvien {
    char ten[100];
    char lop[100];
    double gpa;
} Sinhvien;

void nhap(Sinhvien* x) {
    printf("Nhap ten :");
    gets_s(x->ten, sizeof(x->ten));
    printf("Nhap lop :");
    gets_s(x->lop, sizeof(x->lop));
    printf("Nhap gpa :");
    scanf_s("%lf", &x->gpa);
}

void in(Sinhvien x) {
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int main() {
    int n;
    printf("Nhap so luong sinh vien : ");
    scanf_s("%d", &n);

    // Allocate memory for an array of Sinhvien
    Sinhvien* a = (Sinhvien*)malloc(n * sizeof(Sinhvien));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return -1;
    }

    // Read each student's information
    for (int i = 0; i < n; i++) {
        getchar(); // Clear the newline character from input buffer
        nhap(&a[i]);
    }

    printf("Danh sach sinh vien vua nhap\n");

    // Print each student's information
    for (int i = 0; i < n; i++) {
        in(a[i]);
    }

    // Free the allocated memory
    free(a);

    return 0;
}
