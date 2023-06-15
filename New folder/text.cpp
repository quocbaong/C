#include<stdio.h>
#include<string.h>
#include<math.h>
long tong(int n) {
    if(n == 1) 
        return 1;
    else return n+tong(n-1);
}
long tich(int n) {
    if (n == 1) 
        return 1;
    else return n*tich(n-1);
}
double luythua(float a,int n) {
    if (n == 1)
        return a;
    else return a*luythua(a,n-1);
}
int main() {
    float a;
    int n;
    printf("Nhap gia tri a: ");
    scanf("%f", &a);
    do {
        printf("\nNhap gia tri n>=0: ");
        scanf("%d", &n);
    } while (n < 0);
    printf("S = %ld\n", tong(n));
    printf("P = %ld\n", tich(n));
    printf("A = %.2lf", luythua(a,n));
    return 0;

}
