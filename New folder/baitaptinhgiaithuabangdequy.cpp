//Tinh giai thua cua so n bang ham de quy

#include<stdio.h>

	long long giaithua(int n) {
		if (n == 0 || n ==1 ) 
			return 1;
		else {
			return n*giaithua(n-1);
		}
	}
	/*
	Giai thich
	n = 5 thi chua tinh duoc nen chia nho ra
	5*giaithua(4)
	5*4*giaithua(3)
	5*4*3*giaithua(2)
	5*4*3*2*giaithua(1)
	5*4*3*2*1 = 120
	
	*/
	int main() {
		int n;
		do {
			printf("Nhap n: ");
			scanf("%d", &n);
		} while(n<0);
		long long gt = giaithua(n);
		printf("%d! = %lld", n, gt);
	return 0;
	}
