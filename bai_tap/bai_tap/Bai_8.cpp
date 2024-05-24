/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu.

Vì thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự xuất hiện
trong từ "28tech" khỏi xâu kí tự S, bạn hãy giúp Tèo nhé.

Nếu xâu S sau khi xóa không còn kí tự nào bạn phải in ra EMPTY

int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c)); // (unsigned)_countof(c) để xác định độ rộng của chuỗi đọc.

	int cnt = 0;

	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '2' || c[i] == '8' || c[i] == 't' || c[i] == 'e' || c[i] == 'c' || c[i] == 'h') {
			cnt++;
		}
		else
		{
			printf("%c", c[i]);
		}
	}

	if (cnt == strlen(c)) // so sánh với chuỗi mà mình cho
		printf("EMPTY");

	return 0;
}

*/