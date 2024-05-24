#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

/*
	printf("Nhap ten sinh vien :");
	gets_s(x.ten);
	printf("Nhap lop sinh vien :");
	gets_s(x.lop);
	printf("Nhap gpa :");
	scanf_s("%lf", &x.gpa);
	printf("%s %s %.lf\n", x.ten, x.lop, x.gpa);
	SinhVien y = x; //gán y vào x
	printf("%s %s %.lf\n", y.ten, y.lop, y.gpa);
*/

typedef struct SinhVien {

	char ten[100];
	char lop[100];
	double gpa;

} SinhVien;

//Nhập thông tin sainh viên và trả sinh viên sau khi nhập
SinhVien nhap(SinhVien x) {
	printf("Nhap ten :"); gets_s(x.ten);
	printf("Nhap lop :"); gets_s(x.lop);
	printf("Nhap gpa :"); scanf_s("%lf", &x.gpa);
	return x;
}

void in(SinhVien x) {
	printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int main() {

	int n;
	printf("Nhap so luong sinh vien :");
	scanf_s("%d", &n);

	// Khai báo mảng với kích thước n (sử dụng malloc)
	SinhVien* a = (SinhVien*)malloc(n * sizeof(SinhVien));
	if (a == NULL) {
		printf("Khong du bo nho!\n");
		return -1;
	}

	for (int i = 0; i < n; i++) {
		getchar();
		a[i] = nhap(a[i]);
		

	}
	printf("Danh sach sinh vien vua nhap :\n");
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
		











	return 0;
}

