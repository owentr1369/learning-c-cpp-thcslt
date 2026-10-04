#include <stdio.h>

// Câu 1: Viết chương trình nhập vào một số nguyên dương N. Tính tổng của các ký
// số có trong N.

// Ký số là nghĩa là từng chữ số tạo nên một số nguyên
// Ví dụ:
// Input: 1201 => Output: 4
// Input 6821 => Output: 17

int main() {
  int N;
  int tong = 0;
  printf("Nhap so nguyen duong N: ");
  scanf("\n%d", &N);
  while (N > 0) {
    tong += N % 10;
    N /= 10;
  }
  printf("Tong cac ky so cua so vua nhap la: %d\n", tong);
  return 0;
}