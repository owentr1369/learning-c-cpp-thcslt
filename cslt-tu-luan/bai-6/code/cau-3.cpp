#include <stdio.h>

// Câu 3: Viết hàm kiểm tra số nguyên tố, sử dụng hàm đó để liệt kê các số
// nguyên tố nhỏ hơn N.

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
  int coSo = 0;
  for (int i = 2; i < n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      printf("%d ", i);
      coSo = 1;
    }
  }
  if (coSo == 0) {
    printf("Khong co so nguyen to nao nho hon %d", n);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Nhap N: ");
  scanf("%d", &n);

  printf("\n");
  lietKeSoNguyenTo(n);

  return 0;
}
