#include <stdio.h>

// Câu 10: Viết chương trình nhập vào một số nguyên n > 0, hãy:
// a. Xuất ra màn hình các số trong phạm vi từ 1 đến n.
// b. Xuất ra màn hình các số chẵn trong phạm vi từ 1 đến n.
// c. Xuất ra màn hình các số lẻ không chia hết cho 3 trong phạm vi từ 1 đến n.
// d. Tính các biểu thức sau:
//    - S1 = 1 + 2 + ... + n
//    - S2 = -1 + 2 - 3 + 4 - ... + (-1)^n * n
//    - S3 = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
//    - S4 = x^n (x là số thực nhập từ bàn phím).
// e. Tính tổng các chữ số của n. Thực hành: n = 125, tổng các chữ số là 8.

// Test cases (Input: n x):
// Input: 10 2 => Output:
//   a. 1 2 3 4 5 6 7 8 9 10
//   b. 2 4 6 8 10
//   c. 1 5 7
//   d. S1 = 55, S2 = 5, S3 = 7.98, S4 = 1024.00
//   e. Tong cac chu so: 1
// Input: 5 -2 => Output:
//   a. 1 2 3 4 5
//   b. 2 4
//   c. 1 5
//   d. S1 = 15, S2 = -3, S3 = 3.55, S4 = -32.00
//   e. Tong cac chu so: 5
// Input: 1 3.5 => Output:
//   a. 1
//   b. (khong co so nao)
//   c. 1
//   d. S1 = 1, S2 = -1, S3 = 0.50, S4 = 3.50
//   e. Tong cac chu so: 1
// Input: 125 1 => Output:
//   a. 1 2 3 ... 125
//   b. 2 4 6 ... 124
//   c. 1 5 7 11 13 17 19 23 25 ... 121 125
//   d. S1 = 7875, S2 = -63, S3 = 120.58, S4 = 1.00
//   e. Tong cac chu so: 8
// Input: 0 => Output: Vui long nhap n > 0 (yeu cau nhap lai)

int main() {
  int n;
  printf("Nhap n (n > 0): ");
  do {
    scanf("%d", &n);
    if (n <= 0) {
      printf("Vui long nhap n > 0: ");
    }
  } while (n <= 0);
  float x;
  printf("Nhap x: ");
  scanf("%f", &x);

  // a
  printf("\na. ");
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }

  // b
  printf("\nb. ");
  if (n < 2) {
    printf("khong co so nao");
  }
  for (int i = 2; i <= n; i += 2) {
    printf("%d ", i);
  }

  // c
  printf("\nc. ");
  for (int i = 1; i <= n; i += 2) {
    if (i % 3 != 0) {
      printf("%d ", i);
    }
  }

  // d
  int s1 = 0;
  int s2 = 0;
  float s3 = 0;
  float s4 = 1;
  for (int i = 1; i <= n; i++) {
    s1 += i;
    if (i % 2 == 0) {
      s2 += i;
    } else {
      s2 -= i;
    }
    s3 += (float)i / (i + 1);
    s4 *= x;
  }
  printf("\nd. S1 = %d, S2 = %d, S3 = %.2f, S4 = %.2f", s1, s2, s3, s4);

  // e
  int tongChuSo = 0;
  int m = n;
  while (m > 0) {
    tongChuSo += m % 10;
    m /= 10;
  }
  printf("\ne. Tong cac chu so: %d\n", tongChuSo);
  return 0;
}
