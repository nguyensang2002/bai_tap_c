/*
//Advarced character string : Xâu kí tự nâng cao

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


//Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt(Các kí tự không phải là chữ cái và chữ số).
//
//Đầu vào
//Xâu kí tự S.
//
//Giới hạn
//1≤len(S)≤1000.
//
//Đầu ra
//In ra số lượng chữ cái, chữ số, và kì tự đặc biệt xuất hiện trong xâu


void dem_ki_tu(char c[], int* chu_cai, int* chu, int* dac_biet) {
	*chu_cai = 0;
	*chu = 0;
	*dac_biet = 0;

	for (int i = 0; i < strlen(c); i++) {
		if (isdigit(c[i])) {
			(*chu)++;
		}
		else if (isalpha(c[i])) {
			(*chu_cai)++;
		}
		else {
			(*dac_biet)++;
		}
	}
}

int main() {

	char c[10005];
	fgets(c, 10005, stdin);

	// Loại bỏ ký tự newline nếu có
	if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
		c[strlen(c) - 1] = '\0';
	}

	int chu_cai = 0, chu = 0, dac_biet = 0;

	dem_ki_tu(c, &chu_cai, &chu, &dac_biet);

	printf("%d %d %d", chu_cai, chu, dac_biet);


	return 0;
}

*/