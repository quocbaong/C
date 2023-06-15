#include<stdio.h>
#include<string.h>

int strlen2(char X[]) {
	int n = 0;
	while(X[n] != '\0')
		n++;
	return n;
}
void xoaXuongDong(char X[]) {
	//TITV\n => TITV\0
	for(int i = 0; i < strlen(X); i++) {
		if(X[strlen(X)-1] == '\n')
			X[strlen(X) - 1] = '\0';
	}
}
int main() {
	char ten[50];
	printf("Nhap ten: ");
	fflush(stdin);
	gets(ten);
	xoaXuongDong(ten);
	printf("Do dai chuoi: %d", strlen(ten));
	printf("\nSu dung bien dem 2: %d", strlen2(ten));
	return 0;
}
