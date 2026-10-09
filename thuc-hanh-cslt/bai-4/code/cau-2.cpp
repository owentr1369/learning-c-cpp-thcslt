#include <cstdio>
#include <stdio.h>

// Câu 2: Viết chương trình theo hàm cho phép thực hiện chọn lựa công việc:
// 1: Giải phương trình bậc 1 ax + b = 0.
// 2: Kiểm tra một số nguyên có là số hoàn thiện không?
// 3: Liệt kê các số hoàn thiện trong phạm vi từ 1..n (n do người dùng nhập)
// 4: Tìm ước chung lớn nhất của hai số nguyên a, b nhập từ bàn phím.
// 0: Thoát khỏi chương trình.
// (Menu lặp lại cho đến khi chọn 0.)

// Test cases (Input: lua chon, sau do la du lieu cua chuc nang do):
// Chuc nang 1 (Input: a b):
//   1, 2 -4 => Output: x = 2.00
//   1, 3 1 => Output: x = -0.33
//   1, 0 5 => Output: Phuong trinh vo nghiem
//   1, 0 0 => Output: Phuong trinh vo so nghiem
// Chuc nang 2 (Input: n):
//   2, 6 => Output: 6 la so hoan thien
//   2, 28 => Output: 28 la so hoan thien
//   2, 496 => Output: 496 la so hoan thien
//   2, 12 => Output: 12 khong la so hoan thien
//   2, 1 => Output: 1 khong la so hoan thien
// Chuc nang 3 (Input: n):
//   3, 30 => Output: Cac so hoan thien tu 1 den 30 la: 6 28
//   3, 500 => Output: Cac so hoan thien tu 1 den 500 la: 6 28 496
//   3, 5 => Output: Khong co so hoan thien nao tu 1 den 5
// Chuc nang 4 (Input: a b):
//   4, 12 18 => Output: UCLN = 6
//   4, 100 75 => Output: UCLN = 25
//   4, 17 5 => Output: UCLN = 1
//   4, 0 5 => Output: UCLN = 5
//   4, 0 0 => Output: Khong ton tai UCLN
// Khac:
//   7 => Output: Lua chon khong hop le (hien lai menu)
//   0 => Output: Thoat chuong trinh

void hienThiMenu() {
  printf("\n========== MENU ==========\n");
  printf("1. Giai phuong trinh bac 1 ax + b = 0\n");
  printf("2. Kiem tra so hoan thien\n");
  printf("3. Liet ke cac so hoan thien tu 1 den n\n");
  printf("4. Tim uoc chung lon nhat cua a, b\n");
  printf("0. Thoat chuong trinh\n");
  printf("==========================\n");
  printf("Nhap lua chon: ");
}

// 1: Giải phương trình bậc 1 ax + b = 0.
void giaiPTBac1() {
  float a, b;
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);
  if (a == 0) {
    if (b == 0) {
      printf("Phuong trinh vo so nghiem\n");
    } else {
      printf("Phuong trinh vo nghiem\n");
    }
  } else {
    printf("x = %.2f\n", -b / a);
  }
}

// Trả về 1 nếu n là số hoàn thiện, ngược lại trả về 0.
int kiemTraSoHoanThien(int n) {
  int tong = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      tong += i;
    }
  }
  return n > 0 && tong == n;
}

// 2: Kiểm tra một số nguyên có là số hoàn thiện không?
// Số hoàn thiện là số nguyên dương bằng tổng các ước của nó, không tính chính
// nó.
void laSoHoanThien() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  if (kiemTraSoHoanThien(n)) {
    printf("%d la so hoan thien\n", n);
  } else {
    printf("%d khong la so hoan thien\n", n);
  }
}

// 3: Liệt kê các số hoàn thiện trong phạm vi từ 1..n.
void lietKeSoHoanThien() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  int coSoHoanThien = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoHoanThien(i)) {
      // Bật cờ coSoHoanThien thành true (1) khi có 1 số bất kì là hoàn thiện
      if (!coSoHoanThien) {
        printf("Cac so hoan thien trong pham vi tu 1 den %d la:", n);
        coSoHoanThien = 1;
      }
      printf(" %d", i);
    }
  }
  if (coSoHoanThien) {
    printf("\n");
  } else {
    printf("Khong co so hoan thien nao tu 1 den %d\n", n);
  }
}

// 4: Tìm ước chung lớn nhất của hai số nguyên a, b.
void timUCLN() {
  int a, b;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  if (a == 0 && b == 0) {
    printf("Khong ton tai UCLN\n");
    return;
  }
  if (a == 0 || b == 0) {
    printf("UCLN = %d\n", a + b);
    return;
  }
  int min = a < b ? a : b;
  for (int i = min; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      printf("UCLN = %d\n", i);
      return;
    }
  }
}

void chonMenu(int &chon) {
  do {
    scanf("%d", &chon);
    switch (chon) {
    case 1:
      printf("1. Giai phuong trinh bac 1 ax + b = 0\n");
      giaiPTBac1();
      break;
    case 2:
      printf("2. Kiem tra so hoan thien\n");
      laSoHoanThien();
      break;
    case 3:
      printf("3. Liet ke cac so hoan thien tu 1 den n\n");
      lietKeSoHoanThien();
      break;
    case 4:
      printf("4. Tim uoc chung lon nhat cua a, b\n");
      timUCLN();
      break;
    case 0:
      printf("Thoat chuong trinh\n");
      break;
    default:
      printf("Lua chon khong hop le, nhap lai: ");
    }
  } while (chon < 0 || chon > 4);
}

int main() {
  int luaChon = 0;
  hienThiMenu();
  chonMenu(luaChon);
  return 0;
}
