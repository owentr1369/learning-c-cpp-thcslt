// Đề bài: Tính tổng và in ra bội số của 3 trong đoạn [a=10, b=31]

#include <stdio.h>

int main() {
  int a = 10, b = 31, tong = 0;
  for (int i = a; i <= b; i++) {
    if (i % 3 == 0) {
      printf("%d\n", i);
      tong += i;
    }
  }
  printf("Tổng của các bội số của 3 trong khoảng 10 đến 31 là %d\n", tong);
  return 0;
}