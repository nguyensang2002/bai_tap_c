/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

Mặc dù là 2 người bạn thân nhưng Tí và Tèo lại rất khác nhau khi nói đến 28tech, Tí thì lại là người rất thích 28tech.

Vì thế Tí nhờ bạn đếm các từ 28tech xuất hiện trong một xâu S cho trước.



int check(char c[],const char *d) {
	if (strlen(c) != strlen(d))
		return 0;
	for (int i = 0; i < strlen(c); i++) {
		if (tolower(c[i]) != tolower(d[i]))
			return 0;
	}
	return 1;
}

int main()
{
	char c[10005];
	fgets(c, sizeof(c), stdin);
	char* context = NULL;
	char* word = strtok_s(c, " ", &context);
	int cnt=0;
	while (word != NULL)
	{
		if (check(word, "28tech"))
			cnt++;
		word = strtok_s(NULL, " ", &context);
	}
	printf("%d", cnt);

	return 0;
}
*/