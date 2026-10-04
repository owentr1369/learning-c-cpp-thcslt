#include <stdio.h>

// Câu 2: S(n) = 1 + 1.2 + 1.2.3 + …… + 1.2.3…. n, với n nhập từ bàn phím.

// Test cases:
// Input: 1 => Output: 1 = 1
// Input: 2 => Output: 1 + 2 = 3
// Input: 3 => Output: 1 + 2 + 6 = 9
// Input: 5 => Output: 1 + 2 + 6 + 24 + 120 = 153
// Input: 0 => Output: In ra "Vui long nhap so nguyen duong"

int main() {
  int n;
  double tong = 0;
  double giaithua = 1;
  printf("Nhap so nguyen duong n: ");
  scanf("\n%d", &n);
  if (n <= 0) {
    printf("Vui long nhap so nguyen duong\n");
  } else {
    for (int i = 1; i <= n; i++) {
      giaithua *= i;
      tong += giaithua;
    }
    printf("S(%d) la: %.0f\n", n, tong);
  }
  return 0;
}