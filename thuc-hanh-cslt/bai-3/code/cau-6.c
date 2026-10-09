#include <stdio.h>

// Câu 6: In ra các số từ 1 đến n sử dụng vòng lặp while.

// Test cases:
// Input: 5 => Output: 1 2 3 4 5
// Input: 1 => Output: 1
// Input: 10 => Output: 1 2 3 4 5 6 7 8 9 10
// Input: 0 => Output: Vui long nhap n >= 1

int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  if (n < 1) {
    printf("\nVui long nhap n >= 1\n");
    return 0;
  }
  printf("\n");
  int i = 1;
  while (i <= n) {
    printf("%d ", i);
    i++;
  }
  printf("\n");
  return 0;
}
