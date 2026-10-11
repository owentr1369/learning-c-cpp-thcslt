#include <stdio.h>

// Câu 2: Viết chương trình tính tổng sau:
// S(n) = 1 + 1.2 + 1.2.3 + ...... + 1.2.3.... n, với n nhập từ bàn phím.
// (S(n) = 1! + 2! + 3! + ... + n!)

long tinhS(int n) {
  long s = 0;
  long gt = 1;
  for (int i = 1; i <= n; i++) {
    // gt lúc này là i!, dùng lại giai thừa của vòng trước nhân thêm i
    gt *= i;
    s += gt;
  }
  return s;
}

int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("\nVui long nhap n > 0\n");
  } else {
    printf("\nS(%d) = %ld\n", n, tinhS(n));
  }

  return 0;
}
