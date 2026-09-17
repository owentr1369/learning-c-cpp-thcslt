#include <stdio.h>

// Dem chu so cua so tu nhien N
// Y tuong: moi lan dem 1 chu so hang don vi cua n,
// sau do dung phep chia nguyen cho 10 de lam mat di chu so do.
int main() {
  int n = 1234567;
  int dem = 0;

  while (n != 0) {
    ++dem;
    n /= 10;
  }

  printf("So luong chu so cua n : %d\n", dem);
  return 0;
}
