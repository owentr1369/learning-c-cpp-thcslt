// Đề bài: Tính tổng các ước số của n

#include <stdio.h>

int main() {
  int n = 10, tong;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      tong += i;
    }
  }
  printf("Tổng các ước số của %d là %d\n", n, tong);
  return 0;
}