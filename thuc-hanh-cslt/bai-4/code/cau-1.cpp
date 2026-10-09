#include <stdio.h>

// Câu 1: Viết chương trình thực hiện các chức năng sau (dùng hàm):
// a. Nhập vào một số nguyên n (0 < n < 100).
// b. Kiểm tra n có phải là số nguyên tố không?
// c. Liệt kê các số nguyên tố trong phạm vi từ 1 đến n.
// d. Đếm số lượng số nguyên tố trong phạm vi từ 1 đến n.
// e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
// f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.

void nhapSoNguyen(int &n) {
  do {
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
  } while (n <= 0 || n >= 100);
}

int kiemTraSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      dem++;
    }
  }
  return dem == 2;
}

void lietKeCacSoNguyenTo(int n) {
  if (n < 2) {
    printf("Khong co so nguyen to nao tu 1 den %d\n", n);
    return;
  }
  printf("Cac so nguyen to trong pham vi tu 1 den %d la: 2", n);
  for (int i = 3; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      printf(", %d", i);
    }
  }
  printf("\n");
}

int demCacSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 2; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      dem++;
    }
  }
  return dem;
}

int tongCacSoNguyenTo(int n) {
  int tong = 0;
  for (int i = 2; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      tong += i;
    }
  }
  return tong;
}

float tbcCacSoNguyenTo(int n) {
  return (float)tongCacSoNguyenTo(n) / demCacSoNguyenTo(n);
}

int main() {
  int n;
  // a. Nhập vào một số nguyên n (0 < n < 100).
  nhapSoNguyen(n);
  // b. Kiểm tra n có phải là số nguyên tố không?
  if (kiemTraSoNguyenTo(n)) {
    printf("%d la so nguyen to\n", n);
  } else {
    printf("%d khong phai la so nguyen to\n", n);
  }
  // c. Liệt kê các số nguyên tố trong phạm vi từ 1 đến n.
  lietKeCacSoNguyenTo(n);
  // d. Đếm số lượng số nguyên tố trong phạm vi từ 1 đến n.
  printf("So luong so nguyen to trong pham vi tu 1 den %d la: %d\n", n,
         demCacSoNguyenTo(n));
  // e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
  printf("Tong cac so nguyen to trong pham vi tu 1 den %d la: %d\n", n,
         tongCacSoNguyenTo(n));
  // f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.
  if (demCacSoNguyenTo(n) == 0) {
    printf("Khong co so nguyen to nao de tinh trung binh cong\n");
  } else {
    printf(
        "Trung binh cong cac so nguyen to trong pham vi tu 1 den %d la: %.2f\n",
        n, tbcCacSoNguyenTo(n));
  }
  return 0;
}
