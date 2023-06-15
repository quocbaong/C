#include <stdio.h>

int capSoCong(int a, int d, int n) {
  if (n == 1) {
    return a;
  } else {
    return a + capSoCong(a + d, d, n - 1);
  }
}

int main() {
  int a = 2, d = 3, n = 5;
  int sum = capSoCong(a, d, n);
  
  printf("Tong cua cap so cong voi a = %d, d = %d, va n = %d la: %d", a, d, n, sum);
  
  return 0;
}

