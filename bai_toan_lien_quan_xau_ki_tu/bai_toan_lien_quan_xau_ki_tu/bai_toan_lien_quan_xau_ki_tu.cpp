#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Đếm tần suất của các kí tự trong xâu
//Tìm kí tự xuất hiện nhiều lần nhất 

/*
	char c[1000];
	gets_s(c); // không lấy giá trị cách
	//	fgets(c, 1000, stdin); // lấy giá trị cách
	int cnt[256] = { 0 };
	for (int i = 0; i < my_strlen(c); i++) {
		cnt[c[i]]++; //c[i] : char
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i])
			printf("%c : %d\n", i, cnt[i]);
	}
*/

/* // bài 1 : lấy giá trị giữa
	char c[100];
	scanf_s("%s", c, sizeof(c)); // do không đọc được mảng c[100] nên sử dụng sizeof
								 // // Lấy kích thước của kiểu char 100
	if (my_strlen(c) % 2 == 0) // nếu là chẵn thì không có số đứng giữa
		printf("NOT FOUND");
	else
	{
		printf("%c", c[my_strlen(c) / 2]);
	}
*/

size_t my_strlen(const char* str) { // Đếm giá trị chuỗi thay cho strlen 
	const char* s;
	for (s = str; *s; ++s); 
	return (s - str);
}

void lat(char c[])
{
	int l = 0, r = strlen(c) - 1;
	while (l <= r) {
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l; --r;
	}
}

void thuong(char c[]) {
	for (int i = 0; i < strlen(c); i++)
		c[i] = tolower(c[i]);
}

void hoa(char c[]) {
	for (int i = 0; i < strlen(c); i++)
		c[i] = toupper(c[i]);
}



int main()
{
	char c[10001];
	scanf_s("%s", c, sizeof(c));
	int tong = 0;
	for (int i = 0; i < my_strlen(c); i++)
	{
		if (isdigit(c[i])) { //kiểm tra chữ số
			tong += c[i] - '0'; // tại sao phải trừ 0 vì 0 : ASCII 48 nếu số trước là 1 : 49 thì 49 - 48 = 1 ra số tìm
		}
	}
	printf("%d", tong);


	return 0;
}

