#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct DATE{
	int ngay;
	int thang;
	int nam;
};
void nhapDATE(DATE &x) {
	printf("\n\tD/M/YYYY: ");
	scanf("%d%*c%d%*c%d", &x.ngay, &x.thang, &x.nam);
}
void xuatDATE(DATE x) {
	printf("  %02d/%02d/%4d", x.ngay, x.thang, x.nam);
}
struct SINHVIEN{
	char maSV[10];
	char tenSV[20];
	char gt;
	DATE ngaySinh; 
	char lop[10];
	float dtb;
};
typedef SINHVIEN SV;
void nhapSV(SV &x) {
	printf("\n\tMSSV: ");
	scanf("%s", &x.maSV);
	printf("\n\tHo va Ten: ");
	fflush(stdin);
	gets(x.tenSV);
	do{
		printf("\n\tGioi tinh: ");
		scanf("%c", &x.gt);
	}while(x.gt != 'X' && x.gt != 'Y' && x.gt!='x' && x.gt!='y');
	nhapDATE(x.ngaySinh);
	printf("\n\tLop: ");
	fflush(stdin);
	gets(x.lop);
	printf("\n\tDiem trung binh: ");
	scanf("%f", &x.dtb);
}
void xuatSV(SV x) {
	printf("\n%-15s%-20s", x.maSV, x.tenSV);
	if(x.gt == 'x' || x.gt=='X')
		printf("  Nu  ");
	else if(x.gt == 'y' || x.gt == 'Y')
		printf("  Nam  ");
	xuatDATE(x.ngaySinh);
	printf("\t%8s%8.1f", x.lop, x.dtb);
}
void nhapN(int &n) {
	do {
		printf("Nhap so sinh vien: ");
		scanf("%d", &n);
	}while(n<=0 || n>=100);
}
void nhapThongTin(SV A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nNhap thong tin sinh vien %d: ", i+1);
		nhapSV(A[i]);
	}
}
void xuatThongTin(SV A[], int n) {
	for(int i = 0; i < n; i++) {
		xuatSV(A[i]);
	}
}
void xuatSVLon5(SV A[], int n) {
	for(int i = 0; i < n; i++) {
		if(A[i].dtb > 5)
			xuatSV(A[i]);
	}
}
void xuatDanhSachTheoLop(SV A[], int n) {
	for(int i = 0; i < n; i++) {
		if((A[i].lop[2]=='T' && A[i].lop[3] == 'H') || (A[i].lop[2]=='t' && A[i].lop[3] == 'h'))
			xuatSV(A[i]);
	}
}
int soLuongSVNu(SV A[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(A[i].gt == 'X' || A[i].gt == 'x') 
			dem++;
	}
	return dem;
}
float dtbMax(SV A[], int n) {
	float max = A[0].dtb;
	for(int i = 1; i < n; i++) {
		if(A[i].dtb > max) {
			max = A[i].dtb;
		}
	}
	return max;
}
void xuatCacSVCoDTBMax(SV A[], int n) {
	float max = dtbMax(A, n);
	for(int i = 0; i < n; i++) {
		if(A[i].dtb == max)
			xuatSV(A[i]);
	}
}
void themSV(SV A[], int &n) {
	printf("\nNhap sinh vien moi: ");
	nhapSV(A[n]);
	n++;
}
int timViTriSVMaX(SV A[], int n, char ma[]) {	//Tim thay return vi tri, else return -1
	for(int i = 0; i , n; i++) {
		if(stricmp(A[i].maSV, ma) == 0)
			return i;
	}
	return -1;
}
void xoaSV(SV A[], int &n, char ma[]) {
	int viTri = timViTriSVMaX(A, n, ma);
	if(viTri == -1) {
		printf("\nKhong cos Sv ma: %s", ma);
		return;
	} else{
		for(int i = viTri; i<n-1; i++)
			A[i] = A[i+1];
	}
	n--;
}
int main() {
	int n;
	SV A[MAX];
	nhapN(n);
	nhapThongTin(A, n);
	printf("\nDANH SACH SINH VIEN: ");
	xuatThongTin(A, n);
//	printf("\nDANH SACH SINH CO DIEM TRUNG BINH HON 5: ");
//	xuatSVLon5(A, n);
//	printf("\nDANH SCAH SINH VIEN TIN HOC: ");
//	xuatDanhSachTheoLop(A, n);
//	int svNu = soLuongSVNu(A, n);
//	printf("\nSO LUONG SV NU: %d", svNu);
//	float tbmax = dtbMax(A, n);
//	printf("\nDIEM TRUNG BINH MAX: %f", tbmax);
//	printf("\nDANH SACH SINH VIEN DTB MAX: ");
//	xuatCacSVCoDTBMax(A, n);
//	themSV(A, n);
	char timMa[15];
	printf("\nNhap ma sv muon xoa: ");
	scanf("%s",&timMa);
	xoaSV(A, n, timMa);
	printf("\nDANH SACH SINH VIEN MOI: ");
	xuatThongTin(A, n);
	return 0;
}
