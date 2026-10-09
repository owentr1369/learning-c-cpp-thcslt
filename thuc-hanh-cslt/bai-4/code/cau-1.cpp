#include <stdio.h>

// Câu 1: Viết chương trình thực hiện các chức năng sau (dùng hàm):
// a. Nhập vào một số nguyên n (0 < n < 100).
// b. Kiểm tra n có phải là số nguyên tố không?
// c. Liệt kê các số nguyên tố trong phạm vi từ 1 đến n.
// d. Đếm số lượng số nguyên tố trong phạm vi từ 1 đến n.
// e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
// f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.

// Test cases (mỗi dòng input là một lần nhập):
// Input: 10 => Output:
//   b. 10 khong phai la so nguyen to
//   c. Cac so nguyen to tu 1 den 10 la: 2, 3, 5, 7
//   d. So luong: 4
//   e. Tong: 17
//   f. Trung binh cong: 4.25
// Input: 29 => Output:
//   b. 29 la so nguyen to
//   c. Cac so nguyen to tu 1 den 29 la: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29
//   d. So luong: 10
//   e. Tong: 129
//   f. Trung binh cong: 12.90
// Input: 2 => Output:
//   b. 2 la so nguyen to
//   c. Cac so nguyen to tu 1 den 2 la: 2
//   d. So luong: 1
//   e. Tong: 2
//   f. Trung binh cong: 2.00
// Input: 99 => Output:
//   b. 99 khong phai la so nguyen to
//   c. Cac so nguyen to tu 1 den 99 la: 2, 3, 5, 7, 11, 13, ..., 89, 97
//   d. So luong: 25
//   e. Tong: 1060
//   f. Trung binh cong: 42.40
// Input: 1 => Output:
//   b. 1 khong phai la so nguyen to
//   c. Khong co so nguyen to nao tu 1 den 1
//   d. So luong: 0
//   e. Tong: 0
//   f. Khong co so nguyen to nao de tinh trung binh cong
// Input: 0, 100, 10 => Output: (yeu cau nhap lai 2 lan) roi xu ly nhu n = 10

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

void demCacSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 2; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      dem++;
    }
  }
  printf("So luong so nguyen to trong pham vi tu 1 den %d la: %d\n", n, dem);
}

void tongCacSoNguyenTo(int n) {
  int tong = 0;
  for (int i = 2; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      tong += i;
    }
  }
  printf("Tong cac so nguyen to trong pham vi tu 1 den %d la: %d\n", n, tong);
}

void tbcCacSoNguyenTo(int n) {
  float tong = 0;
  int dem = 0;
  for (int i = 2; i <= n; i++) {
    if (kiemTraSoNguyenTo(i)) {
      tong += i;
      dem++;
    }
  }
  float tbc = float(tong / dem);
  printf(
      "Trung binh cong cac so nguyen to trong pham vi tu 1 den %d la: %.2f\n",
      n, tbc);
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
  demCacSoNguyenTo(n);
  // e. Tính tổng các số nguyên tố trong phạm vi từ 1 đến n.
  tongCacSoNguyenTo(n);
  // f. Tính trung bình cộng các số nguyên tố trong phạm vi từ 1 đến n.
  tbcCacSoNguyenTo(n);
  return 0;
}
