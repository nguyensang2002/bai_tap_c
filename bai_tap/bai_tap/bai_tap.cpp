/*


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int check(char c[]) {
	for (int i = 0; i < strlen(c) - 1; i++)//khong duyet to cuoi vi no so sanh voi ki tu NULL
	{
		if (abs(c[i] - c[i + 1]) != 1){ //so sanh gia tri truoc lon hon 1 hay nho hon 1
			return 0;
		}
	}
	return 1;
}


int main()
{
	char c[10001];
	scanf_s("%s", c);
	if (check(c)) printf("YES");
	else
	{
		printf("NO");
	}
	return 0;
}


*/