#include <stdio.h>

// Câu 2: Tính N giai thừa (N! = 1.2.3....N) (Thực hành N=5).

// Test cases:
// Input: 5 => Output: 5! = 120
// Input: 0 => Output: 0! = 1
// Input: 1 => Output: 1! = 1
// Input: 10 => Output: 10! = 3628800
// Input: -3 => Output: Vui long nhap N >= 0

int main() {
  int n;
  printf("Nhap N: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("\nVui long nhap N >= 0\n");
  } else {
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
      giaiThua *= i;
    }
    printf("\n%d! = %lld\n", n, giaiThua);
  }
  return 0;
}
