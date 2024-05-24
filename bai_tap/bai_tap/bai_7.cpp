/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.

int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c)); // (unsigned)_countof(c) để xác định độ rộng của chuỗi đọc.
	for (int i = 0; i < strlen(c); i++)
	{
		if (isdigit(c[i]))
			printf("%c", c[i]);
	}
	printf("\n");
	for (int i = 0; i < strlen(c); i++)
	{
		if (isalpha(c[i]))
			printf("%c", c[i]);
	}


	return 0;
}
*/