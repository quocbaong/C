#include<stdio.h>
#include<string.h>

int main() {
	char A[100], B[100];
	printf("Nhap A: ");
	fflush(stdin);
	gets(A);
	printf("\nNhap B: ");
	fflush(stdin);
	gets(B);
	if(strcmp(A,B) != 0) 
		printf("\nHai chuoi khong giong nhau.");
	else printf("\nHai chuoi giong nhau.");
	return 0;
}
