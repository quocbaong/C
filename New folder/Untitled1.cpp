#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int arr[], int n) {
  if (n <= 1) return;

  sort(arr, n-1);

  if (arr[n-1] < arr[n-2]) {
    swap(&arr[n-1], &arr[n-2]);
    sort(arr, n-1);
  }
}

int main() {
  int arr[4];

  for (int i = 0; i < 4; i++) {
    printf("Nhap so thu %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  sort(arr, 4);

  printf("Day so da sap xep: ");
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

