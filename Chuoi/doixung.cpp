#include<stdio.h>
#include<string.h>
int kiemTraDoiXung(char X[]) {
	for(int i = 0; i < strlen(X); i++) {
		if(X[i] != X[strlen(X)-i-1])
			return 0;
	}
	return 1;
}
int main() {
	char A[100];
	printf("Nhap chuoi: ");
	fflush(stdin); 
	gets(A);
	if(kiemTraDoiXung(A) == 1) {
		printf("\nChuoi doi xung.");
	} else {
		printf("\nChuoi khong doi xung.");
	}
	return 0;
}