#include<stdio.h>
#include<string.h>
void proper(char s[]) {
    for (int i = 0; i <= strlen(s)-1; i++) {
        if (s[i] = ' ' && s[i+1] >= 'a' && s[i+1] <= 'z') {
            s[i+1] = s[i+1] - 32;
        }
    }
}
int main() {
    char s[50];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
    proper(s);
    printf("\nChuoi moi: %s", s);
    return 0;
}
