#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct phan_so {
	int tu;
	int mau;
}phan_so;

// Hàm tìm ước chung lớn nhất (gcd)
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

// Hàm rút gọn phân số
phan_so toigian(phan_so a) {
	phan_so res;
	int uc = gcd(abs(a.tu), abs(a.mau));

	res.tu = a.tu / uc;
	res.mau = a.mau / uc;
	return res;
}

phan_so tong(phan_so a, phan_so b) {


}



int main() {


	return 0;
}
