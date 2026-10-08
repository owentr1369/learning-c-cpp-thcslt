#include <stdio.h>

// Câu 3b: Nhập một số thực. Xuất ra màn hình số thực vừa nhập.

// Test cases (xuất với 2 chữ số thập phân):
// Input: 3.14159 => Output: 3.14
// Input: -2.5 => Output: -2.50
// Input: 7 => Output: 7.00
// Input: 0 => Output: 0.00

int main() {
  float x;
  printf("Nhap so thuc: ");
  scanf("%f", &x);
  printf("So thuc vua nhap: %.2f\n", x);
  return 0;
}
