#include <stdio.h>

// Câu 3: Viết chương trình liệt kê N số nguyên tố đầu tiên.

// Test cases:
// Input: 1 => Output: 2
// Input: 5 => Output: 2 3 5 7 11
// Input: 10 => Output: 2 3 5 7 11 13 17 19 23 29
// Input: 0 => Output: Vui long nhap so nguyen duong

int laSoNguyenTo(int x) {
  // Ham nay se kiem tra pha so nguyen to khong, neu dung tra 1, sai tra 0
  int soUoc = 0;
  // Kiểm tra từ 1 đến x, tổng các ước số của nó, nếu == 2 thì chỉ chia hết cho
  // 1 và chính nó => số nguyên tố
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      soUoc++;
    }
  }
  return soUoc == 2;
}

int main() {
  int N;
  int dem = 0;
  printf("Nhap so nguyen duong N: ");
  if (scanf("%d", &N) != 1 || N <= 0) {
    printf("Vui long nhap so nguyen duong\n");
    return 1;
  } else {
    printf("%d so nguyen to dau tien la: \n", N);
    int xet = 2; // số đang xét, bắt đầu từ số nguyên tố nhỏ nhất, 1 không phải
                 // là số nguyên tố
    while (dem < N) {
      if (laSoNguyenTo(xet)) {
        printf("%d ", xet);
        dem++;
      }
      xet++;
    }
    printf("\n");
  }
  return 0;
}