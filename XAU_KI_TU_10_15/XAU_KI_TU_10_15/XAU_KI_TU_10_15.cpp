/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define _CRT_SECURE_NO_WARNINGS //  tắt cảnh báo cho trình biên dịch

//-------------------------------
	char c[10005];
	gets_s(c);
	char* context = NULL;

	// Phân tách xâu với dấu cách làm dấu phân cách
	char* word = strtok_s(c, " ",&context); // context: là con trỏ tới con trỏ, nó lưu trữ trạng thái giữa các lần gọi hàm
//	char* word = strtok_s(c, " /.,", &context); tách cách, "/", phẩy , chấm
	while (word !=NULL)
	{
		printf("%s\n", word); //tu tach dc
		word = strtok_s(NULL, " ",&context);
	}
//------------------------

int main()
{
	char c[10005];
	gets_s(c);
	char* context = NULL;
	char a[100][100];
	int n = 0; // đếm số cần tách
	char* word = strtok_s(c, " ", &context);

	while (word != NULL)
	{
		//copy nội dung được in => dòng chữ n của mảng
		strcpy_s(a[n], word);
		++n;
		word = strtok_s(NULL, " ", &context);
	}
	printf("%d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", a[i]);
	}

	return 0;
}
*/