#include<stdio.h>
void nhapN(int &n) {
	do{
		printf("\nNhap n: ");
		scanf("%d", &n);
	}while(n <= 0|| n>100);
}
void nhapMang(int A[], int n) {
	if(n == 0)
		return;
	nhapMang(A, n-1);
	printf("\nPhan tu thu %d: ", n-1);
	scanf("%d", &A[n-1]);
}
void xuatMang(int A[], int n) {
	if(n==0)
		return;
	xuatMang(A,n-1);
	printf("A[%d]\= %d\t", n-1, A[n-1]);
}
int main() {
	int A[100], n;
	nhapN(n);
	nhapMang(A, n);
	xuatMang(A, n);
	return 0;
}
