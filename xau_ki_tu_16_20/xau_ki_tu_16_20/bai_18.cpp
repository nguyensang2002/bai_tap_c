/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

//Các bước thực hiện
//Đọc xâu ký tự : Đọc xâu ký tự từ đầu vào.
//Tách các từ : Tách các từ trong xâu bằng cách sử dụng dấu cách làm dấu phân cách.
//Sắp xếp các từ :
//Đầu tiên, sắp xếp các từ theo chiều dài tăng dần.
//Nếu hai từ có cùng chiều dài, sắp xếp chúng theo thứ tự từ điển.
//In ra kết quả : In ra các từ đã sắp xếp.


int so_sanh(const void* a, const void* b) { // Hàm so sánh tùy chỉnh để sắp xếp các từ
	const char* x = *(const char**)a;
	const char* y = *(const char**)b;

	// So sánh độ dài của các từ
	int do_dai = strlen(x) - strlen(y);
	if (do_dai != 0)
		return do_dai;

	// Nếu độ dài bằng nhau, so sánh theo thứ tự từ điển
	return strcmp(x, y);
}


int main() {

	char c[10005];

	// Đọc xâu từ đầu vào
	fgets(c, 10005, stdin);

	// Loại bỏ ký tự newline nếu có
	if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
		c[strlen(c) - 1] = '\0';
	}

	char* a[10000];
	int n = 0;
	char* context = NULL;
	char* word = strtok_s(c, " ", &context);

	// Tách các từ và lưu vào mảng
	while (word !=NULL)
	{
		a[n] = word; // gán
		++n;
		word = strtok_s(NULL, " ", &context);
	}

	// Sắp xếp các từ bằng qsort và hàm so sánh tùy chỉnh
	qsort(a, n, sizeof(char*), so_sanh);
	for (int i = 0; i < n; i++) {
		printf("%s ", a[i]);
	}

	return 0;
}
*/