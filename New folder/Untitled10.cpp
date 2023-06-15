#include <stdio.h>

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    char c;
    printf("Nhap ki tu hoa: ");
    scanf("%s", c);
    char lower = toLower(c);
    printf("%c\n", lower);
    return 0;
}

