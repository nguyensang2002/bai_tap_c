/**
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình,
trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.


int sapxep(const void* a, const void* b) { // muốn sử dụng cái này thì phải có hàm qsort trong main
	char* x = (char*)a;
	char* y = (char*)b;

	return *x - *y;// tìm ra vị trí sắp xếp tăng dần
}


int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c)); // (unsigned)_countof(c) để xác định độ rộng của chuỗi đọc.
	qsort(c, strlen(c), sizeof(char), sapxep); // để sắp xếp các chữ số của số nguyên
	int i = 0;

	while (i < strlen(c) - 1 && c[i] == '0') //  loại bỏ các chữ số 0 ở đầu của số nguyên 
	{
		++i; // lấy hết 0 rồi dừng
	}

	for (int j = i; j < strlen(c); j++) {
		printf("%c", c[j]);
	}


	return 0;
}


Dòng mã `while (i < strlen(c)-1 && c[i] =='0')` được sử dụng để loại bỏ các chữ số 0 ở đầu của số nguyên đã được
sắp xếp. Dưới đây là cách hoạt động của nó:

1. `i < strlen(c) - 1`: Điều kiện này đảm bảo rằng vòng lặp sẽ không vượt quá kích thước của chuỗi `c`, trừ 1.
Lý do trừ đi 1 là vì chúng ta muốn loại bỏ tất cả các chữ số 0 ở đầu, và chỉ dừng lại khi gặp chữ số khác 0 đầu tiên
hoặc kết thúc chuỗi.

2. `c[i] == '0'`: Điều kiện này kiểm tra nếu ký tự ở vị trí `i` trong chuỗi `c` là chữ số 0.

Kết hợp, dòng mã này kiểm tra từng ký tự trong chuỗi `c` bắt đầu từ vị trí `i`. Nếu ký tự đó là chữ số 0,
biến `i` sẽ tăng lên một và vòng lặp tiếp tục. Quá trình này tiếp tục cho đến khi gặp ký tự khác 0 đầu tiên hoặc
kết thúc chuỗi.

Ví dụ, nếu chuỗi `c` là "00012345":
- Ban đầu, `i` được khởi tạo là 0.
- Vòng lặp bắt đầu, và `c[i]` là '0', vì vậy `i` tăng lên 1.
- Khi `i` là 1, 2, 3, ..., ứng với các chữ số 0 tiếp theo, vòng lặp tiếp tục.
- Khi `i` là 4, `c[i]` là '1', không phải là chữ số 0, vòng lặp kết thúc.

Sau khi vòng lặp này kết thúc, biến `i` sẽ chỉ đến vị trí đầu tiên của chuỗi không phải là chữ số 0,
 hoặc sẽ chỉ đến vị trí kết thúc chuỗi nếu tất cả các ký tự đều là 0.

*/