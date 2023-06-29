#include<stdio.h>
#include<stdlib.h>
void nhapN(int &n) {
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
}
void nhapMang(int *A, int n) {
	for(int i = 0; i < n; i++) {
		printf("A[%d]= ", i);
		scanf("%d", A+i);
	}
}
void themVaoCuoiMang(int *A, int &n) {
	A = (int*)realloc(A,(n+1)*sizeof(int));
	printf("\nNhap phan tu muon them: ");
	scanf("%d", A+n);
	n++;
}
void xuatMang(int *A, int n) {
	for(int i = 0; i < n; i++) {
		printf("A[%d] = %d\t", i, *(A+i));
	}
}
int main() {
	int n, *A;
	nhapN(n);
//	A = (int*)malloc(n*sizeof(int));	//Cap phat bo nho bang Malloc
//	A = (int*)calloc(n, sizeof(int));	//Cap phat bo nho bang Calloc
	A = (int*)realloc(0,n*sizeof(int));
	if(A == NULL) {
		printf("\nKhong cap phat duoc vung nho.");
		return 0;
	}
	nhapMang(A, n);
	xuatMang(A,n);
	themVaoCuoiMang(A,n);
	xuatMang(A,n);
	free(A);	//Giai phong vung nho
	return 0;
}
