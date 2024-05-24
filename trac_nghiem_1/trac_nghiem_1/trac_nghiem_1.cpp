#include <stdio.h> 
#include <math.h>

int dem = 0;
int check1(int n) {
	++dem;
	return (n % 2 == 0 ? 1 : 0);
}
int check2(int n) {
	++dem;
	int sum = 0; while (n) {
		sum += n % 10; n /= 10;
	}
	return sum % 2 == 0;
}
int main() {
	for (int i = 1; i <= 20; i++) {
		if (check2(i) && check1(i)) {
		}
	}
	printf("%d\n", dem); 
	return 0;
}
