/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define _CRT_SECURE_NO_WARNINGS //  tắt cảnh báo cho trình biên dịch

Cho ngày sinh của một người theo dạng ngày / tháng / năm.Bạn hãy chuẩn hóa ngày sinh này về dạng dd / mm / yyyy.

Ví dụ : nếu ngày sinh là 1 / 10 / 2002 thì được chuẩn hóa thành 01 / 10 / 2002, hoặc 5 / 2 / 2002 thì được
chuẩn hóa thành 05 / 02 / 2002.


int main()
{
	char c[10005]; // ví dụ 1/12/2002
	scanf_s("%s", c, (unsigned)_countof(c));
	char* context = NULL;
	char* word = strtok_s(c, "/", &context); //lệnh tách nhau bằng dấu "/" nếu in ra thì thành 1


		while (word !=NULL)
	{
		if (strlen(word) == 1) { // nếu là 1
			printf("0%s", word); // in thành 01
		}
		else
			printf("%s", word); // nếu không phải là 1 thì in ra ví dụ 10
		if (strlen(word) != 4) // có tách dụng cho dấu "/" vào để thành 01/12/2002
			printf("/");
		word = strtok_s(NULL, "/", &context); //tác dụng đọc các từ và xử lý tách dấu "/" nếu in thành 1 12 2002
	}

	return 0;
}
*/