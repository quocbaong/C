#include<stdio.h>
#include<string.h>
#include<math.h>

struct DATE{
	int ngay;
	int thang;
	int nam;
};
void nhapDATE(DATE &x) {
	printf("\n\tNhap ngay: ");
	scanf("%d%*c%d*c%d", &x.ngay, &x.thang, &x.nam);
}
void xuatDATE(DATE x) {
	printf("\n\t%02d/%02d/%04d", x.ngay, x.thang, x.nam);
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
	scanf("%d", x.donGia);
}
void xuatBK(BK x) {
	printf("\n%-5s%-20s%-20s%5.2f%12d", x.maBK, x.tenNG, x.tenNH, x.trongLuong, x.donGia);
	xuatDATE(x.ngayGui);
}
int main() {
	BUUKIEN A;
	nhapBK(A);
	xuatBK(A);
	return 0;
}
