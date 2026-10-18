#include <stdio.h>

// Câu 4: Viết chương trình in ra bảng cửu chương.

// Cách hiểu: in bảng cửu chương từ 2 đến 9, mỗi bảng nhân từ 1 đến 10.

void inBangCuuChuong(int k) {
  printf("Bang cuu chuong %d\n", k);
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", k, i, k * i);
  }
  printf("\n");
}

int main() {
  for (int k = 2; k <= 9; k++) {
    inBangCuuChuong(k);
  }

  return 0;
}
