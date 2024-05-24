#include<stdio.h>

int main()
{
	int a = 100;
	int *ptr; // đây là con trỏ 
	ptr = &a;
	printf("Dia chi cua a = %d\n", &a);
	printf("Gia tri dia chi con tro ptr : %d\n", ptr);

	*ptr = 500; // đây là tham chiếu
	printf("Gia tri cua con tro la : %d\n", a);

	int *ptr2 = ptr;
	*ptr2 = 1000;
	printf("Gia tri cua bien a : %d\n", a);

	return 0;

}