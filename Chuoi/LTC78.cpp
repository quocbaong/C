#include<stdio.h>
#include<string.h>

int main() {
	char A[100], B[100];
	printf("Nhap chuoi A: ");
	fflush(stdin); 
	gets(A);
	printf("\nNhap chuoi B: ");
	fflush(stdin);
	gets(B);
	char *kq = strstr(A,B);
	if(kq == NULL) {
		printf("\nKhong tim thay chuoi con.");
	} else {
		printf("\nTim thay chuoi con.");
		printf("\n%s", kq);
	}
	return 0;
}
