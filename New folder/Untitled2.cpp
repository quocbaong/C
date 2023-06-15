//Tính tong các so tu 1 den n su dung ham de quy

#include<stdio.h>
	int Tong(int n) {
		if (n==0) {
			return 0;
		} else {
			return n + Tong(n-1);
		}
	}
	/*
	Giai thich
	n =4
	4 + Tong(3)
	4 + 3 + Tong(2)
	4 + 3 + 2 + Tong(1)
	4 + 3 + 2 + 1 + Tong(0)
	4 + 3 + 2 + 1 + 0
	*/
	
	int main() {
		int n;
		printf("Nhap n: ");
		scanf("%d", &n);
		int tong = Tong(n);
		printf("\nTong = %d", tong);
	return 0;
		
	}
