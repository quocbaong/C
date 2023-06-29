#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct PS{
	int tuSo;
	int mauSo;
};
void nhapPS(PS *x) {
	printf("\n\tNhap tu so: ");
	scanf("%d", &x->tuSo);
	do{
		printf("\n\tNhap mau so: ");
		scanf("%d", &x->mauSo);
	}while(x->mauSo == 0);
	if(x->mauSo < 0) {
		x->tuSo = -x->tuSo;
		x->mauSo = -x->mauSo;
	}
}
void xuatPS(PS x) {
	printf("\n%d/%d", x.tuSo, x.mauSo);
}
void nhapN(int &n) {
	do{
		printf("\nNhap so phan so: ");
		scanf("%d", &n);
	}while(n<=0);
}
void nhapDayPS(PS *ps, int n) {
	for(int i = 0; i < n; i++) {
		printf("\nNhap pha so thu %d: ",i+1);
		nhapPS(ps+i);
	}
}
void xuatDayPS(PS *ps, int n) {
	for(int i = 0; i < n; i++) {
		xuatPS(*(ps+i));
	}
}
int soSanhPS(PS x1, PS x2) {
	return(x1.tuSo*x2.mauSo - x2.tuSo*x1.mauSo);
}
PS timMax(PS *x, int n) {
	PS max = *x;
	for(int i = 1; i < n; i++) {
		if(soSanhPS(*(x+i), max) > 0) {
			max = *(x+i);
		}
	}
	return max;
}
int UCLN(int a, int b) {
	a = abs(a);
	b = abs(b);
	if(a==b)
		return a;
	if(a>b)
		return UCLN(a-b,b);
	return UCLN(a, b-a);
}
PS rutGon(PS x) {
	int uoc = UCLN(x.tuSo, x.mauSo);
	x.tuSo = x.tuSo/uoc;
	x.mauSo = x.mauSo/uoc;
	return x;
}
PS congHaiPS(PS x1, PS x2) {
	PS cong; 
	cong.tuSo = x1.tuSo*x2.mauSo + x2.tuSo*x1.mauSo;
	cong.mauSo = x1.mauSo*x2.mauSo;
	return cong;
}
PS tongPS(PS *ps, int n) {
	PS S = *ps;
	for(int i = 1; i < n; i++) {
		S = congHaiPS(S, *(ps+i));
	}
	S = rutGon(S);
	return S;
}

int main() {
	int n;
	nhapN(n);
	PS *ps;
	ps = (PS*)malloc(n*sizeof(PS));
	nhapDayPS(ps, n);
	printf("\nPhan so vua nhap: ");
	xuatDayPS(ps, n);
	printf("\nPhan so max: ");
	xuatPS(timMax(ps, n));
	printf("\nTong cac phan so: ");
	xuatPS(tongPS(ps, n));
	free(ps);
	return 0;
}
