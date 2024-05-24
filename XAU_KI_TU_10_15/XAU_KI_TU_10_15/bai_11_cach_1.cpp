/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


void chen(char c[], int k, char kitu) {
	int len = strlen(c);
	for (int i = len; i >= k; i--) {
		c[i + 1] = c[i]; // Di chuyển mỗi ký tự từ chỉ số k đến len lên một chỉ số
	}
	c[k] = kitu; // Chèn ký tự kitu vào vị trí k
	c[len + 1] = '\0'; // Đặt NULL ở cuối mảng
}


int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c));

	// chèn đầu là nếu trong 1/10/2002
	// 1 là 0 ; / là 1 nếu 1 mà là / thì chèn 0 ở đầu
	if (c[1] == '/')
		chen(c, 0, '0');
	if (c[4] == '/')
		chen(c, 3, '0');
	printf("%s", c);


	return 0; // để máy tính hiểu đã chạy thành công và hoàn thành nhiệm vụ nếu trong biên dịch thấy
}
*/