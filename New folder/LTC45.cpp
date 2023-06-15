#include<stdio.h>

void nhapMang(int A[], int &n) {
    printf("Nhap vao so phan tu mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
}
void chenvaoCuoiMang(int X[100], int &n, int m) {
    int size = sizeof(X)/sizeof(X[0]);
    if(n == size) {
        printf("\nKhong the chen vao mang!");
    } else {
        X[n] = m;
        n++; 
    }
}
void chenVaoDauMang(int X[100], int &n, int m) {
    int size = sizeof(X)/sizeof(X[0]);
    if(n == size) {
        printf("\nKhong the them vao mang!");
    } 
    n++;
    for(int i = n - 1; i > 0; i--) {
        X[i] = X[i-1];
    }
    X[0] = m;
}
void chenVaoViTriK(int X[], int &n, int m, int k) {
	int size = sizeof(X)/sizeof(X[0]);
	if(n == size) {
		printf("\nKhong them vao duoc.");
	} else {
		n++;
		for(int i = n-1; i > k; i--) {
			X[i] = X[i-1];
		}
		X[k] = m;
	}
}
void xuatMang(int A[], int n) {
    printf("Gia tri cua mang: ");
    for(int i = 0; i < n; i++) {
        printf("A[%d] = %d\t", i, A[i]);
    }
}
int main() {
    int n, A[100];
    nhapMang(A, n);
    printf("Them vao cuoi mang.");
    chenvaoCuoiMang(A, n, 99);
    xuatMang(A, n);
    printf("\nThem vao dau mang.");
    chenVaoDauMang(A, n, 88);
    xuatMang(A, n);
    printf("\nChen vao vi tri k.");
    chenVaoViTriK(A, n, 77, 3);
    xuatMang(A, n);
}
