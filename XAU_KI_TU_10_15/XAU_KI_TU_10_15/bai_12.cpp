/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

Cho một xâu S bao gồm chữ cái và dấu cách, thực hiện đếm các từ là in hoa trong xâu S.

int check(char c[]) {
	for (int i = 0; i < strlen(c); i++) {
		if (islower(c[i]))  // check in thường
			return 0; //sai
	}
	return 1; // đúng
}

int main()
{
	char c[10005];
	gets_s(c);
	char* context = NULL;
	char* word = strtok_s(c," ", &context);
	int cnt = 0;
	while (word != NULL)
	{
		if (check(word)) {
			++cnt;
		}
		word = strtok_s(NULL," ", &context);
	}
	printf("%d", cnt);

	return 0;
}
*/