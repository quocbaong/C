#include<stdio.h>
#include<math.h>
int min(int n,int x[]) {
    int min = x[0];
    for(int i=1; i <n; i++) {
        if(min > x[i]) 
            min = x[i];
    }
}
int max(int n, int x[]) {
    int max = x[0];
    for(int i=1; i <n; i++) {
        if(max < x[i]) 
            max = x[i];
    }
}
int main() {
    int n, a[100];
    do {
        printf("Nhap so phan tu mang: ");
        scanf("%d", &n);
    }while(n<1 || n>100);
    for(int i=0; i<n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("Min = %d", min(n,a));
    printf("\nMax = %d", max(n,a));
    return 0;
}
