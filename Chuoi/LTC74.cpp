#include<stdio.h>
#include<string.h>
void inHoa(char X[]) {
	for(int i = 0; i < strlen(X); i++) {
		if(X[i] >= 'a' && X[i] <= 'z') {
			X[i] = X[i] - 32;
		}
	}
}
void inThuong(char X[]) {
	for(int i = 0; i <strlen(X); i++) {
		if(X[i] >= 'A' && X[i] <= 'Z')
			X[i] = X[i] + 32;
	}
}
int main() {
	char ten[100];
	printf("Nhap ten: ");
	fflush(stdin);	gets(ten);
	inHoa(ten);
	printf("\nTen viet hoa: %s", ten);
	inThuong(ten);
	printf("\nTen viet thuong: %s",ten);
	return 0;
}
