#include<stdio.h>
void nhap(int A[], int &n, int y) {
    printf("Nhap vao so phan tu mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &y);
}
void xoaMangTaiViTri(int X[], int &n, int vi_tri) {
    for(int i = vi_tri; i < n-1; i++) {
        X[i] = X[i+1];
    }
    n--;
}
void xuatMang(int A[], int n) {
    printf("Gia tri cua mang: ");
    for(int i = 0; i < n; i++) {
        printf("A[%d] = %d\t", i, A[i]);
    }
}
int min() {
    int n, A[100], y;
    nhap(A, n, y);
    xoaMangTaiViTri(A, n, y);
    xuatMang(A, n);
    return 0;
}
