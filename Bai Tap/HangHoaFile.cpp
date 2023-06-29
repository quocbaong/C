#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct HANGHOA{
	char maHang[5];
	int soLuong;
	float donGia;
	float soTien;	
};
typedef HANGHOA HH;

void nhapN(int &n) {
	printf("Nhap so luong hang hoa: ");
	scanf("%d", &n);
}

void ghiFile(HH A[], int n) {
	FILE *f;
	f = fopen("HangHoa.txt", "w");
	if(f == NULL) {
		printf("\nKhong tao duoc file.");
		return;
	}
	fprintf(f, "So luong hang hoa: %d\n", n);
	for(int i = 0; i< n; i++) {
		printf("\nNhap thong tin don hang %d: ", i+1);
		printf("\n\tNhap ma hang hoa: ");
		fflush(stdin);
		gets(A[i].maHang);
		printf("\n\tNhap so luong hang hoa: ");
		scanf("%d", &A[i].soLuong);
		printf("\n\tNhap don gia: ");
		scanf("%f", &A[i].donGia);
		A[i].soTien = A[i].soLuong*A[i].donGia;
		printf("\n\tSo tien: %.1f", A[i].soTien);
		fprintf(f,"\n%-6s%5d%10.1f%12.1f\n", A[i].maHang, A[i].soLuong, A[i].donGia, A[i].soTien);
	}
	printf("\nDa ghi du lieu.");
	fclose(f);
}
void docFile() {
	FILE *f;
	f = fopen("HangHoa.txt", "r");
	if(f == NULL) {
		printf("\nLoi file.");
		return;
	}
	char tam[100];
	while(!feof(f)) {
		fgets(tam,100,f);
		printf("%s",tam);
	}
	fclose(f);
}
void ghiFileNP() {
	FILE *f;
	f = fopen("DSHH.DAT","wb");
	if(f==NULL) {
		printf("\nLoi tao file.");
		return;
	}
	int n;
	printf("So luong hang hoa: ");
	scanf("%d", &n);
	HH tam;
	for(int i =0; i<n;i++) {
		printf("\nNhap thong tin don hang %d: ", i+1);
		printf("\n\tNhap ma hang hoa: ");
		fflush(stdin);
		gets(tam.maHang);
		printf("\n\tNhap so luong hang hoa: ");
		scanf("%d", &tam.soLuong);
		printf("\n\tNhap don gia: ");
		scanf("%f", &tam.donGia);
		tam.soTien = tam.soLuong*tam.donGia;
		printf("\n\tSo tien: %.1f", tam.soTien);
		fwrite(&tam,sizeof(tam),1,f);
	}
	fclose(f);
}
void docFileNP() {
	FILE *f;
	f = fopen("DSHH.DAT","rb");
	if(f==NULL) {
		printf("\nLoi file nhi phan.");
		return;
	}
	HH tam;
	while(!feof(f)) {
		if(fread(&tam,sizeof(tam), 1, f)==1) {
		printf("\n%-6s%5d%15.1f%20.1f\n", tam.maHang, tam.soLuong, tam.donGia, tam.soTien);
		}
	}
	fclose(f);
}
int main() {
	HANGHOA A[100];
	int n;
//	nhapN(n);
//	ghiFile(A,n);
//	docFile();
//	ghiFileNP();
	docFileNP();
	return 0;
}
