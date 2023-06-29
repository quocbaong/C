#include<stdio.h>
#include<math.h>

void docFileLuuVaoMang(int A[], int &n) {
	FILE *f;
	f = fopen("DuLieu.txt","r");
	if(f == NULL) {
		printf("Loi File.");
		return;
	}
	fscanf(f, "%d", &n);
	for(int i = 0; i < n; i++) {
		fscanf(f, "%d", &A[i]);
	}
	fclose(f);
}
void xuatMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%d\t", A[i]);
	}
}
int kiemTraNguyenTo(int n) {
	if(n<2)	
		return 0;
	for(int i=2; i<n; i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}
void xuatFileSNT(int A[], int n) {
	FILE *f;
	f = fopen("DuLieu.txt","at");
	if(f == NULL) {
		printf("\nLoi File.");
		return;
	}
	fprintf(f,"\nCac so nguyen to: \n");
	for(int i = 0; i < n; i++) {
		if(kiemTraNguyenTo(A[i]) == 1)
			fprintf(f, "%d\t", A[i]);
	}
	fclose(f);
}
int main() {
	int A[100], n;
	docFileLuuVaoMang(A, n);
	printf("Mang: \n");
	xuatMang(A, n);
	xuatFileSNT(A, n);
	return 0;
}
