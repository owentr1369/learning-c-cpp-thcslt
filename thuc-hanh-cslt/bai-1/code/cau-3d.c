#include <stdio.h>

// Câu 3d: Nhập hai số nguyên. Hãy tính tổng, hiệu, tích, thương của hai số đó
// và xuất kết quả ra màn hình.

// Test cases (Input: a b; Output: a + b, a - b, a * b, (float)a / b):
// Input: 7 2 => Output: 9, 5, 14, 3.50
// Input: 10 5 => Output: 15, 5, 50, 2.00
// Input: -7 2 => Output: -5, -9, -14, -3.50
// Input: 1 3 => Output: 4, -2, 3, 0.33
// Input: 10 0 => Output: 10, 10, 0, Vi b = 0 nen khong thuc hien duoc phep chia

int main() {
  int a, b;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);
  printf("\nTong: %d", a + b);
  printf("\nHieu: %d", a - b);
  printf("\nTich: %d", a * b);
  if (b != 0) {
    printf("\nThuong: %.2f\n", (float)a / b);
  } else {
    printf("\nVi b = 0 nen khong thuc hien duoc phep chia\n");
  }
  return 0;
}
