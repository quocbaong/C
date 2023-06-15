#include<stdio.h>
struct SINHVIEN
{
    char ten[30];
    float dtb;
};
struct LOP
{
    int sl;
    SINHVIEN sv[3]; //SV[0] den Sv[99] => sv[vt].ten
};

int main() {
    LOP lop18TH; //Lop18Th.sl; Lop18TH.sv[vt].dtb
    printf("\nNhap ten sinh vien dau tien lopTH18: ");
    fflush(stdin); gets(lop18TH.sv[0].ten);
    for(int vt = 0; vt <3; vt++) {
    	printf("Nhap ten sinh vien %d: ",vt);
    	fflush(stdin); gets(lop18TH.sv[vt].ten);
    }
    for(int vt=0; vt<3; vt++) {
    	if(lop18TH.sv[vt].ten=="Bao")
    		printf("BaN Bao xuat hien tai vi tri thu %d\n",vt);
    }
    
    return 1;
}
