//Ghi du lieu vao File dang nhi phan
#include<stdio.h>
#include<stdlib.h>

struct NgaySinh{
	int ngay;
	int thang;
	int nam;
};
int main() {
	FILE *f;
	f = fopen("Text1.bin", "wb");
	if(f == NULL) {
		printf("Loi file.");
		exit(1);
	}
	NgaySinh n1;
	n1.ngay = 1;
	n1.thang = 12;
	n1.nam = 2023;
	fwrite(&n1, sizeof(struct NgaySinh), 1, f);
	fclose(f);
	return 0;
}
