#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *f;
	f = fopen("Text.txt","r");
	if(f == NULL) {
		printf("Loi file.");
		exit(1);
	}
	int n;
	fscanf(f, "%d", &n);
	printf("\nn = %d", n);
	fclose(f);
	return 0; 
}
