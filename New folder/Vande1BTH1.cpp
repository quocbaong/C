#include<stdio.h>
#include<math.h>
#include<string.h>
double capsocong(int n, int a, int r) {
    if (n == 1)
        return a;
    else return r + capsocong(n-1, a  ,r);
}
int main() {
    int n,a,r,q;
    printf("Nhap gia tri n, a, r, q: ");
    scanf("%d%d%d%d", &n, &a, &r, &q);
    double sum = capsocong(n,a,r);
    printf("Cap so cong Un = %.2lf", sum);
    return 0;
}
