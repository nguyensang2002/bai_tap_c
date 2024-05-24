/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc

Ví dụ : số N = 123456789 được viết thành 123,456,789, N = 12345 được viết thành 12,345. Nhiệm vụ của bạn là thêm dấu phẩy vào số N

Gợi ý : Duyệt từ cuối của xâu N về và nối các kí tự của N vào xâu kết quả, dùng thêm biến đếm nếu cứ đếm được 3 kí tự thì nối thêm 1 dấu phẩy vào xâu kết quả.



void dauphay(char c[]) {

	char res[10005]; //lưu kết quả cuối
	int cnt = 0;//theo dõi vị chí cho dấu phẩy
	size_t idx = 0;//theo dõi vị trí của res

	for (int i = strlen(c) - 1; i >= 0; i--) {
		++cnt;
		res[idx] = c[i];//gán chuỗi c vào chuỗi res
		++idx;
		if (cnt % 3 == 0 && i != 0) { //i != 0 không cho vị trí đầu có dấu phẩy
			res[idx] = ',';
			++idx; // đọc vị trí có dấu phẩy
		}
	}

	for (int i = idx - 1; i >= 0; i--)
		printf("%c", res[i]);

}

int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c));
	dauphay(c);

	return 0;
}
*/