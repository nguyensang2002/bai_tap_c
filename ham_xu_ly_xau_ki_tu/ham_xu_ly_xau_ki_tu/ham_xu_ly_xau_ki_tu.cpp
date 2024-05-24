#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

/*
	char c[] = "nguyenhuusang$@1232AD";
int lower = 0, upper = 0, digit = 0, alpha = 0;
for (int i = 0; i < strlen(c); i++)
{
	if (isdigit(c[i])) //kiểm tra chữ số
		++digit;
	else if (islower(c[i])) // Kiểm tra chữ in thường
		++lower;
	else if (isupper(c[i])) // Kiểm tra chữ in hoa
		++upper;
	if (isalpha(c[i])) // kiểm tra chữ cái
		++alpha;
}
printf("%d %d %d %d\n", digit, lower, upper,alpha);
*/

/*
	char c = 'a', v = 'A';
	char d = toupper(c); // chuyển sang in hoa
	char e = tolower(v); // chuyển sang in thường
	printf("%c\n", d);
	printf("%c\n", e);
*/

/*
void lower(char c[]) { //chuyển tất cả sang in thường
	for (int i = 0; i < strlen(c); i++)
		c[i] = tolower(c[i]); // không được cho mỗi tolower(c[i]) phải có c[i] để gán vào
}

void upper(char c[]) { //chuyển tất cả sang in Hoa
	for (int i = 0; i < strlen(c); i++)
		c[i] = toupper(c[i]);
}

	char c[] = "abcdfr";
	char d[] = "abcdfr";
	printf("%d", strcmp(c, d)); //hàm so sánh xe có giống nhau không
*/

int nt(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);

	// Khai báo mảng hai chiều a có kích thước n x m
	int** a = (int**)malloc(n * sizeof(int*));
	if (a == NULL) {
		printf("Khong du bo nho!\n");
		return -1;
	}
	for (int i = 0; i < n; i++) {
		a[i] = (int*)malloc(m * sizeof(int));
		if (a[i] == NULL) {
			printf("Khong du bo nho!\n");
			// Giải phóng bộ nhớ đã cấp phát cho các hàng trước đó
			for (int j = 0; j < i; j++) {
				free(a[j]);
			}
			free(a); //giải phóng bộ nhớ cho mảng a
			return -1;
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j <m; j++)
			scanf_s("%d", &a[i][j]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			if (nt(a[i][j]))
				printf("%d ", a[i][j]);
		}
		printf("\n");
	}
		
	  

	return 0;
}





