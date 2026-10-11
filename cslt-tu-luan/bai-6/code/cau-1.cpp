#include <stdio.h>

// Câu 1: Viết hàm liệt kê các số hoàn hảo bé hơn N. Số hoàn hảo là số có tổng
// các ước số bằng chính nó. Ví dụ: 6 là số hoàn hảo vì 6 = 1 + 2 + 3.

// Cách hiểu: "các ước số" là các ước nhỏ hơn chính nó (không tính n).

// Trả về 1 nếu n là số hoàn hảo, ngược lại trả về 0.
int kiemTraSoHoanHao(int n) {
  int tong = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      tong += i;
    }
  }
  return tong == n;
}

void lietKeSoHoanHao(int n) {
  int coSo = 0;
  // Dừng khi i chạm đến N vì chỉ lấy các số bé hơn N
  for (int i = 1; i < n; i++) {
    if (kiemTraSoHoanHao(i)) {
      printf("%d ", i);
      coSo = 1;
    }
  }
  if (coSo == 0) {
    printf("Khong co so hoan hao nao nho hon %d", n);
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
    printf("\n");
    lietKeSoHoanHao(n);
  }

  return 0;
}
