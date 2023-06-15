#include<stdio.h>
void nhapmang(int n, int a[]) {
    for(int i=0; i<n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}
void swap(int &a, int &b) {
    int tam = a;
    a = b;
    b = tam;
}
void sapXepTang(int n, int a[]) {
    for(int i = 0; i <n; i++) {
        int vitrinhonhat = i;
        for(int j = i+1; j<n; j++) {
            if(a[j] < a[vitrinhonhat])
                vitrinhonhat = j;
        }
        swap(a[i],a[vitrinhonhat]);
    }
}
void sapXepGiam(int n, int x[]) {
	for(int i = 0; i <n; i++) {
		int vitrilonnhat = i;
		for(int j = i+1; j<n; j++){
			if(x[j] > x[vitrilonnhat]) 
				vitrilonnhat = j;
		}
		swap(x[i], x[vitrilonnhat]);
	}
}
void xuatMang(int n, int a[]) {
	for(int i=0; i<n;i++) {
		printf("%d ", a[i]);
	}
}
int main() {
    int n, a[100];
    do{
        printf("Nhap so mang: ");
        scanf("%d", &n);
    }while(n<1 || n>100);
    nhapmang(n,a);
    printf("Sap xep tang dan: ");
    sapXepTang(n,a);
    xuatMang(n,a);
    printf("\nSap xep giam dan: ");
    sapXepGiam(n,a);
    xuatMang(n,a);
	return 0;
}
