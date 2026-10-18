#include <stdio.h>

// Câu 1: Viết chương trình nhập vào một số nguyên dương N. Tính tổng của các ký
// số có trong N.
// Ví dụ: nhập 1234 => 1 + 2 + 3 + 4 = 10 => in ra 10.

int tongChuSo(int n) {
  int tong = 0;
  while (n > 0) {
    // n % 10 lấy chữ số cuối, n / 10 bỏ chữ số cuối
    tong += n % 10;
    n /= 10;
  }
  return tong;
}

int main() {
  int n;
  printf("Nhap so nguyen duong N: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("\nVui long nhap so nguyen duong\n");
  } else {
    printf("\nTong cac chu so: %d\n", tongChuSo(n));
  }

  return 0;
}
