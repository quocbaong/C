#include<stdio.h>
#include<string.h>

int main() {
    char S[50];
    printf("Nhap chuoi: ");
    gets(S);
    while(S[0] == ' ' || S[0] == '\t') strcpy(&S[0], &S[1]);
    while(S[strlen(S)-1]==' ') S[ strlen(S)-1 ]= '\0';
    int i;
    for( i = 0; i <strlen(S); i++) {
        if(S[i]==' ' && S[i+1]==' ') {
            strcpy(&S[i], &S[i+1]);
            i--;
        }
    }
    printf("Chuoi sau khi xu ly: %s", S);

    return 0;
}
