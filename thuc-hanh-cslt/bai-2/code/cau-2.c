#include <math.h>
#include <stdio.h>

// Câu 2: Viết chương trình giải phương trình bậc hai ax2 + bx + c = 0 với a, b,
// c nhập từ bàn phím.

// Test cases (Input: a b c):
// x1 = (-b + sqrt(delta)) / 2a
// x2 = (-b - sqrt(delta)) / 2a
//
// Input: 1 -3 2 => Output: x1 = 2.00, x2 = 1.00
// Input: 2 -7 3 => Output: x1 = 3.00, x2 = 0.50
// Input: 1 0 -2 => Output: x1 = 1.41, x2 = -1.41
// Input: 1 2 1 => Output: Phuong trinh co nghiem kep x = -1.00
// Input: 1 0 1 => Output: Phuong trinh vo nghiem
//
// a = 0 thì trở thành phương trình bậc nhất:
// Input: 0 2 -4 => Output: x = 2.00
// Input: 0 0 5 => Output: Phuong trinh vo nghiem
// Input: 0 0 0 => Output: Phuong trinh vo so nghiem

int main() {
  float a, b, c;
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);
  printf("Nhap c: ");
  scanf("%f", &c);
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("\nPhuong trinh vo so nghiem\n");
      } else {
        printf("\nPhuong trinh vo nghiem\n");
      }
    } else {
      float x = (c == 0) ? 0 : -c / b;
      printf("\nx = %.2f\n", x);
    }
  } else {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
      printf("\nPhuong trinh vo nghiem\n");
    } else if (delta == 0) {
      float x = (b == 0) ? 0 : -b / (2 * a);
      printf("\nPhuong trinh co nghiem kep x = %.2f\n", x);
    } else {
      float x1 = (-b + sqrt(delta)) / (2 * a);
      float x2 = (-b - sqrt(delta)) / (2 * a);
      printf("\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
  }
  return 0;
}
