#include<stdio.h>
#include<string.h>
void inHoaDauTu(char X[]) {
	X[0] = X[0] - 32;
	for(int i = 1; i < strlen(X); i++) {
		if(X[i] == ' ') {
			X[i+1] = X[i +1] - 32; 
		}	
	}
}
int main() {
	char A[100];
	printf("Nhap chuoi: ");
	fflush(stdin);
	gets(A);
	inHoaDauTu(A);
	printf("\nChuoi sau khi xu ly: %s", A);
	return 0;
}
