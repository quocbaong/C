#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ghiNguyenAm(char A[]) {
	FILE *f;
	f = fopen("NguyenAm.txt", "w");
	if(f == NULL) {
		printf("\nLoi tao file.");
		return;
	}
	int doDai = strlen(A);
	int coNguyenAm = 0;
	for(int i = 0; i < doDai; i++) {
		if(A[i] == 'a' || A[i] == 'e' || A[i] == 'u' || A[i] == 'i' || A[i] == 'o')
			fprintf(f, "%c\t", A[i]);
			coNguyenAm = 1;
	}
	fclose(f);
	if(coNguyenAm == 1) {
		printf("\nDa ghi nguyen am vao file.");
	} else {
		printf("\nChuoi khong co nguyen am.");
	}
}
void docFileNguyenAm(char S[]) {
	FILE *f;
	f = fopen("NguyenAm.txt", "r");
	if(f==NULL) {
		printf("\nkhong mo duoc file.");
		return;
	}
	fgets(S, 101, f);
	fclose(f);
}
int main() {
	char A[101];
	printf("Nhap chuoi: ");
	gets(A);
	ghiNguyenAm(A);
	char S[101] = "";
	docFileNguyenAm(S);
	if(strlen(S) > 0) {
	printf("\nChuoi doc tu file: %s", S);
	} else {
		printf("\nFile khong co nguyen am.");
	}
	return 0;
}
