#include<stdio.h>

void Nhap(int &n) {
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
}
void sapxep(int &a, int &b) {
	if (a>b) {
		int t;
		t=a;
		a=b;
		b=t;
	}
}
	int main() {
		int a,b,c,d;
		Nhap(a);
		Nhap(b);
		Nhap(c);
		Nhap(d);
		sapxep(a,b);
		sapxep(b,c);
		sapxep(a,b);
		sapxep(c,d);
		sapxep(b,c);
		sapxep(a,b);
		printf("4 so nguyen tang dan laf: %d %d %d %d", a,b,c,d);
		return 0;
		
	}
