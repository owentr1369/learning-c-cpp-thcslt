#include <stdio.h>

// Câu 12: Viết chương trình nhập vào 3 số nguyên dương nhỏ hơn 10 và hàm tính
// S = a! + b! + c! với a, b, c là 3 số nguyên dương nhập từ bàn phím.

// Test cases (Input: a b c):
// Input: 1 2 3 => Output: S = 9
// Input: 3 3 3 => Output: S = 18
// Input: 4 5 6 => Output: S = 864
// Input: 9 9 9 => Output: S = 1088640
// Input: 5 0 2 => Output: Vui long nhap 3 so nguyen duong nho hon 10
// Input: 10 1 1 => Output: Vui long nhap 3 so nguyen duong nho hon 10

int giaiThua(int n) {
  int ketQua = 1;
  for (int i = 1; i <= n; i++) {
    ketQua *= i;
  }
  return ketQua;
}

int main() {
  int a, b, c;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  printf("Nhap c: ");
  scanf("%d", &c);
  if (a <= 0 || a >= 10 || b <= 0 || b >= 10 || c <= 0 || c >= 10) {
    printf("\nVui long nhap 3 so nguyen duong nho hon 10\n");
    return 0;
  }
  int s = giaiThua(a) + giaiThua(b) + giaiThua(c);
  printf("\nS = %d\n", s);
  return 0;
}
