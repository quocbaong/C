#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void nhapMang(int A[], int &n) {
	printf("Nhap vao so luong phan tu mang: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
void chenVaoDauMang(int X[100], int &n) {
    int z;
    printf("\nNhap vao gia tri can chen vao dau: ");
    scanf("%d", &z);
    int size = sizeof(X)/sizeof(X[0]);
    if(n == size) {
        printf("\nKhong the them vao mang!");
    } 
    n++;
    for(int i = n - 1; i > 0; i--) {
        X[i] = X[i-1];
    }
    X[0] = z;
}
void chenVaoViTriK(int X[], int &n) {
    int k, l;
    printf("\nNhap vao gia tri can chen va vi tri: ");
    scanf("%d%d", &l, &k);
	int size = sizeof(X)/sizeof(X[0]);
	if(n == size) {
		printf("\nKhong them vao duoc.");
	} else {
		n++;
		for(int i = n-1; i > k; i--) {
			X[i] = X[i-1];
		}
		X[k] = l;
	}
}
void chenvaoCuoiMang(int X[100], int &n) {
    int m;
    printf("\nNhap vao gia tri can chen: ");
    scanf("%d", &m);
    int size = sizeof(X)/sizeof(X[0]);
    if(n == size) {
        printf("\nKhong the chen vao mang!");
    } else {
        X[n] = m;
        n++; 
    }
}
void xuatMang(int A[], int n) {
	printf("Gia tri cua tung phan tu trong mang: ");
	for(int i = 0; i < n; i++) {
		printf("A[%d] = %d\t", i,A[i]);
	}
}
int main() {
	int n, A[100], chon;
	do {
	printf("\n\t\t\t\t\tMenu");
	printf("\n\t\t\t\t1. Nhap Mang");
	printf("\n\t\t\t\t2. Xuat Mang");
	printf("\n\t\t\t\t3. Chen Vao Dau Mang");
	printf("\n\t\t\t\t4. Chen Vao Vi Tri Bat Ky");
	printf("\n\t\t\t\t5. Chen Vao Cuoi Mang");
	printf("\n\t\t\t\t6. Thoat");
	printf("\nNhap yeu cau: ");
	scanf("%d", &chon);
	switch(chon) {
		case(1):
			nhapMang(A, n);
			break;
		case(2):
			xuatMang(A, n);
			break;
		case(3):
			chenVaoDauMang(A, n);
			break;
		case(4):
			chenVaoViTriK(A, n);
			break;
		case(5):
			chenvaoCuoiMang(A, n);
			break;
		case(6):
			exit(0);
	}
	}while(chon != 6);
	return 0;
}
