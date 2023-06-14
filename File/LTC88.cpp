#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *f;
	f = fopen("Text.txt","w");
	if(f == NULL) {
		printf("\nLoi file.");
	exit(0);
	}
	int n;
	printf("\nNhap vao n: ");
	scanf("%d", &n);
	fprintf(f, "%d", n);
	fclose(f);
	return 0;
}
