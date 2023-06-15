#include<stdio.h>
#include<limits.h>
void nhapMang(int A[], int &n) {
    printf("Nhap vao so phan tu mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
}
int timMinThuHai(int X[], int n) {
    int min = __INT_MAX__;
    int min_2 = __INT_MAX__;
    for(int i = 0; i < n; i++) {
        if(X[i] < min) 
            min = X[i];
    }
    for(int i = 0; i < n; i++) {
        if(X[i] == min)
            continue;
        else {
            if(X[i] < min_2)
                min_2 = X[i];
        }
    }
    return min_2;
}
int timMaxThuHai(int X[], int n) {
    int max = INT_MIN;
    int max_2 = INT_MIN;
    for(int i = 0; i , n; i++) {
        if(X[i] > max)
            max = X[i];
    }
    for(int i = 0; i < n; i++) {
        if(X[i] == max)
            continue;
        else{
            if(X[i] > max_2)
                max_2 = X[i];
        }
    }
    return max_2;
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
    printf("Min thu 2 la: %d", timMinThuHai(A, n));
    printf("\n");
    printf("Max thu 2 la: %d", timMaxThuHai(A, n));
    return 0;
}
