#include<stdio.h>
#include<string.h>
void copyChuoi(char A[], char B[]) {
	for(int i = 0; i <strlen(B); i++) {
		A[i] = B[i];
	}
	A[strlen(B)] = '\0';
}
int main() {
	char A[100], B[100];
	printf("Nhap A: ");
	fflush(stdin);
	gets(A);
	printf("\nNhap B: ");
	fflush(stdin);
	gets(B);
	copyChuoi(A, B);
	printf("\nChuoi A: %s", A);
	printf("\nChuoi B: %s", B);
	return 0;
}
