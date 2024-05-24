#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

//Cho xâu kí tự S, bạn hãy tìm kí tự được lặp lại đầu tiên trong xâu S.

//Nếu xâu S không có kí tự bị lặp lại thì in ra NONE

int main()
{
	char c[10005];
	scanf_s("%s", c, (unsigned)_countof(c));

	int cnt[256] = { 0 };// cnt[c[i]] khác không, tức là ký tự c[i] đã xuất hiện trước đó trong xâu, 
	                     //nghĩa là nó bị lặp lại.
	for (int i = 0; i < strlen(c); i++) {
		if (cnt[c[i]] != 0) { // nếu mà phẩn tử trong mảng 0 = 0 thì in ra // vì nó đã đc lặp laij
			printf("%c", c[i]);
			return 0; // rời vòng lặp ngay lật tức
		}
		cnt[c[i]] = 1; // đánh dấu các kí tự
			
	}
	printf("NONE");

	return 0;
	
	
}