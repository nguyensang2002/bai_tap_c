/*

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?',

Hãy liệt kê các từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách

int main()
{
	char c[10005];
	fgets(c, sizeof(c), stdin);
	char* context = NULL; // được sử dụng để duy trì trạng thái của việc phân tích chuỗi
	char* word = strtok_s(c, " .,!?\n", &context);
	//context lưu trữ vị trí trong chuỗi mà hàm strtok_s sẽ tiếp tục tìm từ tiếp theo.
	while (word !=NULL)
	{
		printf("%s", word);
		word = strtok_s(NULL, " .,!?\n", &context);
		if (word != NULL)
			printf(" ");
	}

	return 0;
}
*/