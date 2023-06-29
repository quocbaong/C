#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int doDai(char *S) {
	int i = 0;
	while(*(S+i) != '\0') {
		i++;
	}
	return i;
}
void lower(char *S) {
	int d = strlen(S);
	for(int i = 0; i < d; i++) {
		if(*(S+i) >= 'A' && *(S+i) <= 'Z')
			*(S+i) = *(S+i) + 32;
	}
}
void hoaDauTu(char *S) {
	int n = strlen(S);
	if(*S >= 'a' && *S <= 'z')
		*S = *S - 32;
	for(int i = 1; i < n; i++) {
		if(*(S+i) == ' ' && *(S+i+1) >= 'a' && *(S+i+1) <= 'z') {
			*(S+i+1) = *(S+i+1) - 32;
		}
		if(*(S+i-1) != ' ' && *(S+i) >= 'A' && *(S+i) <= 'Z') {
			*(S+i) = *(S+i) + 32;
		}
	}
}
char *noiChuoi(char *S, char *C) {
	char *noi;
	noi = (char*)malloc(100*sizeof(char));
	 int i = 0;
	 while(*(S+i) != '\0') {
	 	*(noi+i) = *(S+i);
		 i++;	
	 }
	 int j = 0;
	 while(*(C+j) != '\0') {
	 	*(noi+i) = *(C+j);
	 	i++;
	 	j++;
	 }
	 return noi;
}
int main() {
	char *S, *C;
	S = (char*)malloc(50*sizeof(char));	//Cap phat vung nho
	//2 dong tren tuong duong char S[50]
	C = (char*)malloc(50*sizeof(char));
	printf("Nhap chuoi S: ");
	fflush(stdin);
	gets(S);
	printf("\nNhap chuoi C: ");
	fflush(stdin);
	gets(C);
	printf("\nChuoi: %s", S);
//	lower(S);
//	hoaDauTu(S);
//	printf("\nChuoi sau xu ly: %s", S);
//	int dem = doDai(S);
//	printf("\nDo dai chuoi: %d", dem);
	char *noi;
	noi = (char*)malloc(100*sizeof(char));
	noi = noiChuoi(S,C);
	printf("\nChuoi sau noi: %s", S);
	free(S);
	free(C);
	return 0;
}
