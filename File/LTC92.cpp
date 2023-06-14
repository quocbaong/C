#include<stdio.h>
#include<stdlib.h>
void nhapMang(int A[], int &n) {
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("\nA[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
void xuatMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nA[%d] = %d", i, A[i]);
	}
}
void xuatFile(int A[], int n, char fileName[]) {
	FILE *f;
	f = fopen(fileName, "w");
	if(f == NULL) {
		printf("\nLoi file.");
		return;
	}
	fprintf(f,"So luong phan tu: %d", n);
	fprintf(f,"\nCac phan tu mang:\n");
	for(int i = 0; i < n; i++) {
		fprintf(f, "%d\n", A[i]);
	}
	fclose(f);
}
void docFile(int A[], int n, char fileName[]) {
	FILE *f;
	f = fopen(fileName, "r");
	if(f == NULL) {
		printf("\nLoi file.");
		return;
	}
	fscanf(f, "%d", &n);
	printf("\nSo phan tu: %d", n);
	for(int i = 0; i < n; i++) {
		fscanf(f, "%d", &A[i]);
		printf("\nA[%d] = %d", i, A[i]);
	}
	fclose(f);
}
void docFileHai(int A[], int n, char fileName[]) {
	FILE *f;
	f = fopen(fileName, "r");
	if(f == NULL) {
		printf("\nLoi file.");
		return;
	}
	int i = 0;
	while(!feof(f)) {
		fscanf(f, "%d", &A[i]);
		i++;
	}
	n = i;
	printf("\nSo phan tu: %d", n);
	for(int i = 0; i < n; i++) {
		printf("\nA[%d] = %d", i, A[i]);
	}
	fclose(f);
}
int main() {
	int n, A[100];
	char fileName[100];
//	nhapMang(A, n);
	printf("\nNhap ten file: ");
	fflush(stdin);	gets(fileName);
//	xuatFile(A, n, fileName);
	docFileHai(A, n, fileName);
	xuatMang(A, n);
	return 0;
}
