#include<stdio.h>
void swap_1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
//Truyen tham chieu theo dia chi bien
void swap_2(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
//Su dung con tro
void swap_3(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 5; int b = 10;
	printf("\nTruoc khi hoan doi 2: %d va %d", a, b);
	swap_2(a,b);
	printf("\nSau khi hoan doi 2: %d va %d", a,b);
	printf("\nTruoc khi hoan doi 3: %d va %d", a,b);
	swap_3(&a, &b);
	printf("\nSau khi hoan doi 3: %d va %d", a, b);
	return 0;
}

