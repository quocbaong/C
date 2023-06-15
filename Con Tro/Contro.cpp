#include<stdio.h>
#include<stdlib.h>
//pass by reference
void tang(int *a) {	//ham tang co tham so la 1 con tro kieu int la a
	*a += 100;	//toan tu giai tham chieu
}
//pass by value
void tang2(int a) {
	a += 100;
}
int main() {
	int a = 300;
	tang(&a);
	printf("Gia tri cua bien a khi tang 1 ket thuc: %d", a);
	tang2(a);
	printf("\nGia tri cua bien a khi tang 2 ket thuc: %d", a);
	return 0;
}
