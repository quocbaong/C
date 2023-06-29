#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
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
	printf("%02d/%02d/%4d", x.ngay, x.thang, x.nam);
}
struct BUUKIEN{
	char maBK[10];
	char tenNG[20];
	char tenNH[20];
	float trongLuong;
	DATE ngayGui;
	char noiDung[50];
	int donGia;
};
typedef BUUKIEN BK;
float giaTriBK(BK x) {
	return x.donGia*x.trongLuong;
}
void nhapBK(BK &x) {
	printf("\n\tNhap ma buu kien: ");
	scanf("%s", &x.maBK);
	printf("\n\tNhap ten nguoi gui: ");
	fflush(stdin);
	gets(x.tenNG);
	printf("\n\tNhap ten nguoi nhan: ");
	fflush(stdin);
	gets(x.tenNH);
	printf("\n\tNhap trong luong: ");
	scanf("%f", &x.trongLuong);
	nhapDATE(x.ngayGui);
	printf("\n\tNhap don gia: ");
	scanf("%d", &x.donGia);
}
void xuatBK(BK x) {
	printf("\n%-5s%-20s%-20s%5.2f%10d%12.2f\t", x.maBK, x.tenNG, x.tenNH, x.trongLuong, x.donGia, giaTriBK(x));
	xuatDATE(x.ngayGui);
}
void nhapSoLuong(int &n) {
	do {
		printf("Nhap so luong buu kien: ");
		scanf("%d", &n);
	}while(n<=0);
}
void nhapThongTin(BK A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nNhap thong tin buu kien %d: ", i+1);
		nhapBK(A[i]);
	}
}
void xuatThongTin(BK A[], int n) {
	for(int i = 0; i < n; i++) {
		xuatBK(A[i]);
	}
}
void themBK(BK A[], int &n) {
	printf("\nNhap buu kien can them: ");
	nhapBK(A[n]);
	n++;
}
void sapXepBKTheoMa(BK A[], int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j<n; j++) {
			if(stricmp(A[i].maBK, A[j].maBK) < 0) { //mabk pt truoc i < mabk pt j, doi cho phan tu i va pt j
				BK tam;
				tam = A[i];
				A[i] = A[j];
				A[j] = tam; 
			}
		}
	}
}
float trongLuongMax(BK A[], int n) {
	float max = A[0].trongLuong;
	for(int i = 1; i < n; i++) {
		if(A[i].trongLuong > max) 
			max = A[i].trongLuong;
	}
	return max;
}
int demMax(BK A[], int n) {
	int dem = 0;
	float max = trongLuongMax(A, n);
	for(int i = 0; i < n; i++) {
		if(A[i].trongLuong == max) 
			dem++;
	}
	return dem;
}
void timBuuKien(BK A[], int n, char ten[]) {
	printf("\n\tCAC BUU KIEN CUA NGUOI GUI TEN %s: ", ten);
	for(int i = 0; i < n; i++) {
		if(stricmp(A[i].tenNG,ten) == 0) 
			xuatBK(A[i]);
	}
}
void xuatBuuKienTheoNgay(BK A[], int n, DATE ngay) {
	printf("\nCAC BBU KIEN GUI VAO NGAY %d/%d/%d: ", ngay);
	for(int i = 0; i < n; i++) {
		if((A[i].ngayGui.ngay == ngay.ngay) && (A[i].ngayGui.thang == ngay.thang) && (A[i].ngayGui.nam == ngay.nam) )
			xuatBK(A[i]);
	}
}
int main() {
	BUUKIEN A[MAX];
	int n;
	char ten[20];
	DATE ngay;
	nhapSoLuong(n);
	nhapThongTin(A, n);
	printf("\nDANH SACH BUU KIEN: ");
	xuatThongTin(A, n);
	themBK(A, n);
	printf("\nDANH SACH BUU KIEN MOI:");
	xuatThongTin(A, n);
	sapXepBKTheoMa(A, n);
	printf("\nDANH SACH BUU KIEN MOI:");
	xuatThongTin(A, n);
	printf("\nSo luong buu kien max: %d", demMax(A,n));
	printf("\nNhap ten nguoi gui muon tim: ");
	fflush(stdin);
	gets(ten);
	timBuuKien(A, n, ten);
	printf("\n\tNhap ngay gui can tim: ");
	scanf("%d%*c%d%*c%d", &ngay.ngay, &ngay.thang, &ngay.nam);
	xuatBuuKienTheoNgay(A, n, ngay);
	return 0;
}

