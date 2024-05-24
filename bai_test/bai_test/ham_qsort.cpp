#include<stdio.h>
#include<stdlib.h>

//void qsort(array, so_luong_phan_tu, kich_thuc, int(*compar)(const void*, const void*));
// 
// sắp xếp tăng dần
int comp(const void *a,const void *b)
{
	// ép 2 con trỏ void sang con tro int
	int *x = (int*)a;
	int* y = (int*)b;
	if (*x < *y)
		return -1;
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	printf("Nhap so luong gia tri :");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		printf("Nhap gia tri a[i] = %d\n", i);
		scanf("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), comp);

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}

	return 0;
}
