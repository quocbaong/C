#include<stdio.h>
#include<string.h>
void nhapN(int &n) {
	do {
		printf("Nhap so phan tu mang: ");
		scanf("%d", &n);
	}while(n<=0);
}
void nhapMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nA[%d]= ", i);
		scanf("%d", &A[i]);
	}
}
void xuatMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("A[%d]=%d\t", i, A[i]);
	}
}
int demPhanTu(int A[], int n, int &m) {
	do {
		printf("\nNhap so chia: ");
		scanf("%d", &m);
	}while(m=0);
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(A[i] % m == 0) {
			dem++;
		}
	}
	return dem;
}
int main() {
	int n, A[100], m;
	nhapN(n);
	printf("\nNhap cac phan tu mang:");
	nhapMang(A, n);
	printf("\nMang: ");
	xuatMang(A, n);
	printf("\nSo phan tu chia het cho %d: %d", m, demPhanTu(A, n, m));
	return 0;
}
