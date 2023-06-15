#include<stdio.h>

int  main() {
	int var;
	printf("Nhap var: ");
	scanf("%d", &var);
	printf("\n Gia tri cua var = %d", var);
	printf("\n dia chi cua bien var: %p", &var);
	 
	int *pc, c;
	c = 5;
	pc = &c;
	printf("\n Gia tri cua c la: %d", *pc);
	printf("\n Dia chi bien c: %p", pc);
}
