#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 10000

struct MONHOC
{
    char ma_MH[6];
    char ten_MH[250];
    int so_TC;
    char loai_MH[3];
};
typedef MONHOC MH;
void nhapThongTinMH(MH &mon) {
    do {
    printf("\n\tNhap vap ma mon hoc: ");
    fflush(stdin);  gets(mon.ma_MH);
    }while(strlen(mon.ma_MH) != 5);
    
    printf("\n\tNhap ten mon hoc: ");
    fflush(stdin);  gets(mon.ten_MH);
    
    do {
        printf("\n\tNhap so tin chi: ");
        scanf("%d", &mon.so_TC);
    }while(mon.so_TC < 2 || mon.so_TC > 4);
    
    do {
    printf("\n\tNhap loai mon hoc(LT, TH, TH): ");
    fflush(stdin);  gets(mon.loai_MH);
	}while(strcmp(mon.loai_MH,"LT") != 0 && strcmp(mon.loai_MH, "TH") != 0 && strcmp(mon.loai_MH, "TH") != 0);
}
void nhapThongTin(MH dsMH[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nNhap thong tin mon hoc %d: ", i+1);
        nhapThongTinMH(dsMH[i]);
    }
}
void xuatThongTinMH(MH mon) {
	printf("\n\tMa mon hoc: %s", mon.ma_MH);
	printf("\n\tTen mon hoc: %s", mon.ten_MH);
	printf("\n\tSo tin chi: %d", mon.so_TC);
	printf("\n\tLoai mon hoc: %s", mon.loai_MH);
}
void xuatThongTin(MH dsMh[], int n) {
	printf("\nThong tin cac mon hoc: ");
	for(int i = 0; i < n; i++) {
		printf("\nThong tin mon hoc %d: ", i+1);
		xuatThongTinMH(dsMh[i]);
	}
}
void xuatFile(MH dsMH[], int n, char fileName[50]) {
	FILE *f;
	f = fopen(fileName, "w");
	if(f == NULL) {
		printf("\nLoi tao file.");
		return;
	}
	for(int i = 0; i < n; i++) {
		fprintf(f, "%s\t%s\t%d\t%s\n", dsMH[i].ma_MH, dsMH[i].ten_MH, dsMH[i].so_TC, dsMH[i].loai_MH);
	}
	printf("\nTao file thanh cong.");
	fclose(f);
}
void timMonHoc(char maMH[10], int n, char fileName[50]) {
	FILE *f;
	MONHOC dsMH[100];
	f = fopen(fileName, "r");
	if(f == NULL) {
		printf("\nLoi file.");
		return;
	}
	for(int i = 0; i < n; i++) {
		fscanf(f, "%s%s%d%s", &dsMH[i].ma_MH, &dsMH[i].ten_MH, &dsMH[i].so_TC, &dsMH[i].loai_MH);
	}
	printf("\nMon hoc can tim: ");
	printf("\nMa Mon Hoc \tTen Mon hoc \tSo Tin Chi \tLoai Mon Hoc");
	int dem = 0;
	for(int i = 0; i <n; i++) {
		if(strcmp(dsMH[i].ma_MH,maMH) == 0) {
			printf("\n%10s \t%11s \t%10d \t%12s", dsMH[i].ma_MH, dsMH[i].ten_MH, dsMH[i].so_TC, dsMH[i].loai_MH);
			dem++;
		}
	}
	if(dem==0) {
		printf("\nKhong tim thay mon hoc.");
	}
	fclose(f);
}
int main() {
    MONHOC dsMH[100];
    int n;
    char fileName[50];
    char maMH[10];
    do {
    printf("Nhap vao so luong mon hoc: ");
    scanf("%d", &n);
    }while(n <= 0);
    nhapThongTin(dsMH, n);
    printf("\nNhap ten file can xuat: ");
    fflush(stdin); gets(fileName);
    xuatFile(dsMH, n, fileName);
    printf("\nNhap vao ma mon hoc can tim: ");
    fflush(stdin); gets(maMH);
	timMonHoc(maMH, n, fileName);
    return 0;
}

