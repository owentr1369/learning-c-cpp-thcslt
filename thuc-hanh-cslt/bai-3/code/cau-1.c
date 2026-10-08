#include <stdio.h>

// Câu 1: Tính tổng các ước của N (Thực hành N=10).

// Test cases:
// Input: 10 => Output: Tong cac uoc cua 10 la 18 (1 + 2 + 5 + 10)
// Input: 6 => Output: Tong cac uoc cua 6 la 12
// Input: 12 => Output: Tong cac uoc cua 12 la 28
// Input: 7 => Output: Tong cac uoc cua 7 la 8
// Input: 1 => Output: Tong cac uoc cua 1 la 1
// Input: 0 => Output: Vui long nhap N > 0

int main() {
  int n;
  printf("Nhap N: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("\nVui long nhap N > 0\n");
    return 0;
  }
  int tong = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      tong += i;
    }
  }
  printf("\nTong cac uoc cua %d la %d\n", n, tong);
  return 0;
}
