#include<stdio.h>
#include<stdlib.h>
//pass by reference

//pass by value

int main() {
	int a[10] = {1, 2, 3, 4, 5, 6, 7 , 8, 9 ,10};
	int *b = a;
	printf("Gia tri cua bien a: %d\n", a);
	for(int i = 0; i < 10; i++) {
		printf("Dia chi cua a[%d]: %d\n", i, &a[i]);
	}
	for(int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}
