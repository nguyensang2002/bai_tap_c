//advarced character string :  xâu kí tự nâng cao

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void in_hoa(char c[]) {
	for (int i = 0; i < strlen(c); i++)
		c[i] = toupper(c[i]);  // check 

}

void in_thuong(char c[]) {
	for (int i = 0; i < strlen(c); i++)
		c[i] = tolower(c[i]);
}


int main() {
	char c[10005];

	fgets(c, 10005, stdin);

	// Loại bỏ ký tự newline nếu có
	if ((strlen(c) > 0) && (c[strlen(c) - 1] == '\n')) {
		c[strlen(c) - 1] = '\0';
	}

	in_hoa(c);
	printf("%s\n", c);
	in_thuong(c);
	printf("%s\n", c);



	return 0;
}
