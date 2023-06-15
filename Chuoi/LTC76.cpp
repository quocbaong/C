#include<stdio.h>
#include<string.h>
void daoChuoi(char X[]) {
	for(int i = 0; i < strlen(X)/2; i++) {
		int t = X[i];
		X[i] = X[strlen(X) - i -1];
		X[strlen(X)-i-1] = t;
	}
}
int main() {
	char A[100];
	printf("Nhap chuoi: ");
	fflush(stdin);
	gets(A);
	daoChuoi(A);
	printf("\nChuoi sau xu ly: %s", A);
	return 0;
}
