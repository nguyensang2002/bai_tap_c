/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S

int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c));
	int k;
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++) //in các kí tự đến k
	{
		printf("%c", c[i]);
	}
	printf("28tech"); // in ra dòng này

	for (int i = k; i < strlen(c); i++) // in các kí tự từ k đến cuối
	{
		printf("%c", c[i]);
	}

	return 0;
}
*/