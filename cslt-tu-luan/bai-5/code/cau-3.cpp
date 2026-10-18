#include <stdio.h>

// Câu 3: Viết chương trình liệt kê N số nguyên tố đầu tiên.

// Trả về 1 nếu n là số nguyên tố, ngược lại trả về 0.
int kiemTraSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      dem++;
    }
  }
  return dem == 2;
}

void lietKeSoNguyenTo(int n) {
  int dem = 0;
  int x = 2;
  // Dừng khi đã in đủ n số nguyên tố, không phải khi x đạt đến n
  while (dem < n) {
    if (kiemTraSoNguyenTo(x)) {
      printf("%d ", x);
      dem++;
    }
    x++;
  }
  printf("\n");
}

int main() {
  int n;
  printf("Nhap N: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("\nVui long nhap N > 0\n");
  } else {
    printf("\n%d so nguyen to dau tien: ", n);
    lietKeSoNguyenTo(n);
  }

  return 0;
}
