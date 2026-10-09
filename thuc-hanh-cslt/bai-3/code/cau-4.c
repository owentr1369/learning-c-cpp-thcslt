#include <stdio.h>

// Câu 4: Tìm Ước Chung Lớn Nhất của 2 số a và b.

// Test cases (Input: a b):
// Input: 12 18 => Output: UCLN = 6
// Input: 18 12 => Output: UCLN = 6
// Input: 100 75 => Output: UCLN = 25
// Input: 17 5 => Output: UCLN = 1
// Input: 7 7 => Output: UCLN = 7
// Input: 0 5 => Output: UCLN = 5
// Input: 0 0 => Output: Khong ton tai UCLN

int main() {
  int a, b;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  if (a == 0 && b == 0) {
    printf("\nKhong ton tai UCLN\n");
    return 0;
  }
  if (a == 0 || b == 0) {
    // Ước chung lớn nhất của một số tự nhiên a và số 0 là 0 + a
    printf("\nUCLN = %d\n", a + b);
    return 0;
  }
  int min = a < b ? a : b; // Lấy số nhỏ để bắt đầu giảm dần
  for (int i = min; i >= 1; i--) {
    // Điều kiện để ước chung là cả a và b đều chia hết cho số đó
    if (a % i == 0 && b % i == 0) {
      printf("\nUCLN = %d\n", i);
      break;
    }
  }
  return 0;
}
