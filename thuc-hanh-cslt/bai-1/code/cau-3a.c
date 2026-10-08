#include <stdio.h>

// Câu 3a: Nhập một số nguyên. Xuất ra màn hình số nguyên vừa nhập.

// Test cases:
// Input: 5 => Output: 5
// Input: -12 => Output: -12
// Input: 0 => Output: 0

int main() {
  int a;
  printf("Nhap so nguyen: ");
  scanf("%d", &a);
  printf("So nguyen vua nhap la: %d\n", a);
  return 0;
}
