#include<stdio.h>
#include<string.h>
void my_strcar(char A[], char B[]) {
	int x = strlen(A);
	int y = strlen(B);
	for(int i = x; i < x + y; i++) {
		A[i] = B[i - x];
	}
	A[x+y] = '\0';
	
}
int main() {
	char ten[100];
	char mang[50];
	printf("Nhap ten: ");
	fflush(stdin);
	gets(ten);
	printf("\nNhap mang: ");
	fflush(stdin);
	gets(mang);
	my_strcar(ten,mang);
	printf("\nChuoi noi: %s", ten);
	return 0;
}
