#include<stdio.h>
int dieukien(int x) {
	return x%3==0;
}
int main() {
    int a[100], n;
    do {
        printf("Nhap so thanh phan chuoi: ");
        scanf("%d", &n);
    }while(n<1 || n >100);
    for(int i=0; i<n; i++) {
    	printf("a[%d]= ", i);
    	scanf("%d", &a[i]);
    }
    printf("\nCac so chia het 3: ");
    for(int i=0; i < n; i++) {
    	if(dieukien(a[i]))
    	printf("\t%d", a[i]);
    }
    return 0;
}

