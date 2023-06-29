#include<stdio.h>
#include<math.h>

#define MAX 100

void nhap(int &n) {
	do {
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
}
void nhapMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nA[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
void nhapMangKhongTrung(int A[], int n) {
	int trung;	//Neu nhap trung thi trung =1, nguoc lai trung = 0
	for(int i = 0; i < n; i++) {
		do {
			trung = 0;
			printf("\nA[%d] = ", i);
			scanf("%d", &A[i]);
			for(int j = 0; j < i; j++)
				if(A[i] == A[j]) {
					printf("\nBan nhap trung. Nhap lai.");
					trung = 1;
					break;
				}
		}while(trung == 1);
	}
}
int viTriDuongDau(int A[], int n) {	//Neu mang khong co gia tri duong tra vef -1
	for(int i = 0; i < n; i++) {
		if(A[i] > 0)
			return i;
	}
	return -1;	//Chay het mang k co so duong return -1
}
int viTriDuongCuoi(int A[], int n) {	//Neu mang khong co gia tri duong tra ve -1
	for(int i = n-1; i >= 0; i--) {
		if(A[i] > 0)
			return i;
	}
	return -1;
}
int giaTriMax(int A[], int n) {
	int max = A[0];
	for(int i = 1; i < n; i++) {
		if(A[i] > max) 
			max = A[i];
	}
	return max;
}
int demMax(int A[], int n) {
	int max = giaTriMax(A, n);
	int dem = 0;
	for(int i = 0;i < n; i++) {
		if(A[i] == max)
			dem++;
	}
	return dem;
}
void viTriLonNhat(int A[], int n) {
	int max = giaTriMax(A, n);
	printf("\nVi tri cac phan tu lon nhat:");
	for(int i = 0; i < n; i++) {
		if(A[i] == max)
			printf("\nVi tri max: A[%d]", i);
	}
}
void themVaoDauMang(int A[], int &n) {
	int m;
	printf("\nGia tri can them vao dau mang: ");
	scanf("%d", &m);
	for(int i = n; i >0; i--) {
		A[i] = A[i - 1];
	}
	A[0] = m;
	n++;
}
void themVaoViTriK(int A[], int &n) {
	int m,k;
	printf("\nVi tri can them vao: ");
	scanf("%d", &k);
	printf("\nGia tri can them vao: ");
	scanf("%d", &m);
	for(int i = n; i > k; i--) {
		A[i] = A[i-1];
	}
	A[k] = m;
	n++;
}
void xoaViTriK(int A[], int &n) {
	int k;
	printf("\nNhap vao vi tri can xoa: ");
	scanf("%d", &k);
	for(int i = k; i < n-1; i++) {
		A[i] = A[i+1];
	}
	n--;
}
int kiemTraSoLe(int A[], int n) {
	//Co so le tra ve 1, khong co tra ve 1
	for(int i = 0; i < n; i++) {
		if(A[i] % 2 == 1)
			return 1;
	}
	return 0;
}
void taoMangChuaPhanTuChan(int A[], int n, int B[], int &nb) {
	for(int i = 0; i < n; i++) {
		if(A[i] %2 == 0) {
			B[nb] = A[i];
			nb++;
		}
	}
}
int kiemTraChinhPhuong(int n) {
	int canBacHai = sqrt(n);
	if(canBacHai*canBacHai == n) 
		return 1; 	//So chinh phuong
	return 0;	//Khong phai so chinh phuong
}
void xuatSoChinhPhuong(int A[], int n) {
	printf("\nSo chinh phuong:\n");
	for(int i = 0; i < n; i++) {
		if(kiemTraChinhPhuong(A[i]) == 1 && i%2==1) {
			printf("%d\t", A[i]);
		}
	}
}
int amMax(int A[], int n) {
	int maxAm = A[0];
	for(int i = 1; i < n; i++) {
		if((A[i] < 0 && A[i] > maxAm) || (maxAm >= 0 && A[i]<0))
			maxAm = A[i];
	}
	return maxAm;
}
int duongMin(int A[], int n) {
	int minDuong = A[0];
	for(int i = i; i < n; i++) {
		if((A[i] > 0 && A[i] < minDuong) || (minDuong <= 0 && A[i] > 0))
			minDuong = A[i];
	}
	return minDuong;
}
int tongViTriChan(int A[], int n) {
	int S = 0;
	for(int i = 0; i < n; i++) {
		if(i%2==0)
			S += A[i];
	}
	return S;
}
void xuatMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\nA[%d] = %d", i, A[i]);
	}
}
int main() {
	int n, nb = 0;
	nhap(n);
	int A[MAX], B[MAX];
	nhapMang(A, n);
//	nhapMangKhongTrung(A, n);
	xuatMang(A, n);
//	int duongDau = viTriDuongDau(A, n);
//	if(duongDau == -1) {
//		printf("\nMang khong co gia tri duong.");
//	}else {
//		printf("\nVi tri duong dau: A[%d]", duongDau);
//		printf("\nGia tri duong dau: %d", A[duongDau]);
//	}
//	int duongCuoi = viTriDuongCuoi(A, n);
//	if(duongCuoi == -1) {
//		printf("\nMang khong co gia tri duong.");
//	} else {
//		printf("\nVi tri duong cuoi: A[%d]", duongCuoi);
//		printf("\nGia tri duong cuoi: %d", A[duongCuoi]);
//	} 
//	printf("\nGia tri lon nhat mang: %d", giaTriMax(A, n));
//	printf("\nSo gia tri max: %d", demMax(A, n));
//	viTriLonNhat(A, n);
//	themVaoDauMang(A, n);
//	themVaoViTriK(A, n);
//	xoaViTriK(A, n);
//	int soLe = kiemTraSoLe(A, n);
//	if(soLe != 1) {
//		printf("\nMang khong co co so le");	
//	}else{
//		printf("\nMang co so le.");
//	}
//	taoMangChuaPhanTuChan(A, n, B, nb);
//	printf("\nMang B chua phan tu chan:");
//	xuatMang(B, nb);
//	xuatSoChinhPhuong(A, n);
//	int maxAm = amMax(A, n);
//	if(maxAm >= 0) {
//		printf("\nMang khong co gia tri am.");
//	}else{
//		printf("\nGia tri am lon nhat: %d", maxAm);
//	}
//	int minDuong = duongMin(A, n);
//	if(minDuong <= 0) {
//		printf("\nMang khong co gia tri duong.");
//	}else {
//		printf("\nGia tri min duong: %d", minDuong);
//	}
	int tongChan = tongViTriChan(A, n);
	printf("\nTong vi tri chan: %d", tongChan);
	return 0;
}
