#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
	char c[1000] = "nguyen_huu_sang";
printf("%s\n", c);

char d[] = {'2','8','9','t','e'}; //xâu kí tự
printf("%s\n", d);
*/
/*
	char c[1000];
printf("Nhap xau ki tu : ");
//	gets_s(c);
	fgets(c, 1000, stdin); // truyền giá trị c ; số lượng kí tự tối đa ; luồn vào:stdin(luồng từ bàn phím)
	printf("Xau ki tu vua nhap : %s", c);
	*/


	/*
	// lỗi trôi lệnh do scanf mà sau sử dụng gets hoặc fgets
	int n;
	printf("Nhap gia tri n :");
	scanf_s("%d", &n); // không sử lý dấu cách ở cuối
//	getchar(); // dọc 1 kí tự sau từ bộ đệm bàn phím ( nếu nhiều dấu cách vẫn thế )

	//để chữa nhiều dấu cách
	while (getchar() != '\n');
	char c[1000];
	printf("Nhap gia tri cho xau ki tu:");
	fgets(c, 1000, stdin); // đều dùng nhập khi gặp phím cách
	printf("Noi dung xau ki tu : %s",c);
	*/


int main()
{
	char c[100], d[100]; // lưu được 100 phần tử
	fgets(c, 100, stdin);

//	printf("So luong ki tu trong xau c : %d\n", strlen(c)); //hàm strlen đếm xâu kí tự
//	printf("%s", c);

	for (int i = 0; i < strlen(c); i++)
		printf("Ki tu o cho so %d : %c\n", i, c[i]);

	d[strlen(d) - 1] = '\0'; // loại bỏ kí tự thừa dấu cách
	printf("Ki tu o cho so %c", strlen(d));
	





	return 0;
}