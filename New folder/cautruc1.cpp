#include<stdio.h>
//sv: chuoi hoTen, so nguyen mssv, so thuc dtb
struct ThongTinSV
{
    char hoTen[30]; 
    int mssv; 
    float dtb;
} ;
int main() {

    ThongTinSV sv_X;

    printf("\n=============================\n");
    printf("\nNhap ho ten:\t"); fflush(stdin); gets(sv_X.hoTen);
    printf("\nNhap ma so sv:\t"); scanf("%d", &sv_X.mssv);
    printf("\nNhap diem tb:\t"); scanf("%f", &sv_X.dtb);

    printf("\n=============================\n");
    printf("\nHo ten sv da nhap:\t%s", sv_X.hoTen); 
    printf("\nMa so sv da nhap:\t%d", sv_X.mssv); 
    printf("\nDiem tb da nhap:\t%.2f", sv_X.dtb); 
    return 1;
}

