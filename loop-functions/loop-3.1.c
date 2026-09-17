// Đề bài: Tính N giai thừa (N! = 1.2.3...N) (vd N=5)

#include <stdio.h>

int main() {
  int n = 5, giaiThua;
  for (int i = 1; i <= n; i++) {
    giaiThua *= i;
  }
  printf("Giai thừa của %d là %d\n", n, giaiThua);
  return 0;
}