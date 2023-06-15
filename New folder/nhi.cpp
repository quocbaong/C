#include<stdio.h>
#include<stdlib.h>

void NhapChoTong(int *n)
{
	printf("\nNhap n(n >= 0): ");
    do
    {
    	scanf("%d",&*n);
        if(*n < 0)
        {
            printf("\n n < 0, Nhap sai yeu cau nhap lai!\n");
        }
    } while (*n < 0);
}
void NhapChoTich(int *n)
{
	printf("\nNhap n(n >= 0): ");
    do
    {
    	scanf("%d",&*n);
        if(*n < 1)
        {
            printf("\n n < 1, Nhap sai yeu cau nhap lai!\n");
        }
    } while (*n < 1);
}
void NhapChoLuyThua(int *n,float *a)
{
    do{
        do
        {
            printf("\nNhap a : ");
            scanf("%f",&*a);
        } while (*a == '\0');
        do
        {
            printf("\nNhap n(n >= 0): ");
            scanf("%d",&*n);
            if(*n < 0)
            {
                printf("\n n < 0, Nhap sai yeu cau nhap lai!\n");
            }
        } while (*n < 0);
        if(*a == 0 && *n == 0)
        {
            printf("a va n khong duoc cung luc bang 0! \n");
        }
    }while(*a == 0 && *n == 0);
}
void XuatA(int n, float a,float A)
{
    printf("\nVoi n = %d va a = %f, Ta co: \n",n,a);
    printf("P(%.2f,%d) = %d \n",a,n,A);
    printf("\n");
}
void XuatS(int n, long S)
{
    printf("\nVoi n = %d",n);
    printf("S(%d) = %d \n",n,S);
    printf("\n");
}
void XuatP(int n, long P)
{
    printf("\nVoi n = %d",n);
    printf("P(%d) = %d \n",n,P);
    printf("\n");
}
int main() {
	
}
