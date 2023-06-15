#include<stdio.h>
//sv: chuoi hoTen, so nguyen mssv, so thuc dtb
struct KTLT
{
    float tk1, tk2;
};

struct ThongTinSV
{
    char hoTen[30]; int mssv; float dtb4n;
    KTLT ktlt;
} 
int main() {

    ThongTinSv sv_X;

    printf("\n=============================\n");
    printf("\nNhap ho ten:\t"); fflush(stdin); gets(sv_X.hoTen);
    printf("\nNhap ma so sv:\t"); scanf("%d", &sv_X.mssv);
    printf("\nNhap diem tk1 mon ktlt:\t"); scanf("%f", &sv_X.ktlt.tk1);

    printf("\n=============================\n");
    printf("\nHo ten sv da nhap:\t%s", sv_X.hoTen); 
    printf("\nMa so sv da nhap:\t%d", sv_X.mssv); 
    printf("\nDiem tk1 da nhap:\t%f", sv_X.ktlt.tk1); 


}

