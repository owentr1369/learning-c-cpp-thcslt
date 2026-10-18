#include <stdio.h>

// Câu 1: Viết chương trình thực hiện các chức năng sau (dùng hàm):
// a. Nhập vào một số nguyên n (0 < n < 100).
// b. Kiểm tra n có phải là số nguyên tố không?
// c. Liệt kê các số nguyên tố trong phạm vi từ 1 đến n.
// d. Đếm số lượng số nguyên tố trong phạm vi từ 1 đến n.
// e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
// f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.

// a. Nhập vào một số nguyên n (0 < n < 100).
int nhapN() {
  int n;
  do {
    printf("Nhap so nguyen n (0 < n < 100): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 100) {
      printf("Vui long nhap trong khoang 1-99\n");
    }
  } while (n <= 0 || n >= 100);
  return n;
}

// b. Kiểm tra n có phải là số nguyên tố không?
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

// c. Liệt kê các số nguyên tố trong phạm vi từ 1 đến n.
void lietKeSoNguyenTo(int n) {
  int coSo = 0;
  printf("Cac so nguyen to tu 1 den %d la: ", n);
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      if (coSo) {
        printf(", ");
      }
      printf("%d", i);
      coSo = 1;
    }
  }
  if (!coSo) {
    printf("khong co so nguyen to nao");
  }
  printf("\n");
}

// d. Đếm số lượng số nguyên tố trong phạm vi từ 1 đến n.
int demSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      dem++;
    }
  }
  return dem;
}

// e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
int tongSoNguyenTo(int n) {
  int tong = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      tong += i;
    }
  }
  return tong;
}

int main() {
  int n = nhapN();

  if (kiemTraSoNguyenTo(n)) {
    printf("%d la so nguyen to\n", n);
  } else {
    printf("%d khong phai la so nguyen to\n", n);
  }

  lietKeSoNguyenTo(n);

  int dem = demSoNguyenTo(n);
  printf("So luong so nguyen to tu 1 den %d la: %d\n", n, dem);

  printf("Tong cac so nguyen to tu 1 den %d la: %d\n", n, tongSoNguyenTo(n));

  // f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.
  if (dem == 0) {
    printf("Khong co so nguyen to nao de tinh trung binh cong\n");
  } else {
    printf("Trung binh cong cac so nguyen to tu 1 den %d la: %.2f\n", n,
           (float)tongSoNguyenTo(n) / dem);
  }
  return 0;
}
