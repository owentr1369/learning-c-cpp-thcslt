#include <stdio.h>

// Câu 1: Viết chương trình giải phương trình bậc nhất ax + b = 0 với a, b nhập
// từ bàn phím.

// Test cases (Input: a b):
// Input: 2 -4 => Output: x = 2.00
// Input: -2 6 => Output: x = 3.00
// Input: 3 1 => Output: x = -0.33
// Input: 5 0 => Output: x = 0.00
// Input: 0 5 => Output: Phuong trinh vo nghiem
// Input: 0 0 => Output: Phuong trinh vo so nghiem

int main() {
  float a, b;
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);
  if (a == 0) {
    if (b == 0) {
      printf("\nPhuong trinh vo so nghiem\n");
    } else {
      printf("\nPhuong trinh vo nghiem\n");
    }
  } else {
    float x = (b == 0) ? 0 : -b / a;
    printf("\nx = %.2f\n", x);
  }
  return 0;
}
