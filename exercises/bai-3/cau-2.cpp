#include <stdio.h>

// Câu 2: Viết chương trình theo hàm cho phép thực hiện chọn lựa công việc:
// 1: Giải phương trình bậc 1 ax+b=0.
// 2: Kiểm tra một số nguyên có là số hoàn thiện không?
// 3: Liệt kê các số hoàn thiện trong phạm vi từ 1..n (n do người dùng nhập)
// 4: Tìm ước chung lớn nhất của hai số nguyên a, b nhập từ bàn phím.
// 0: Thoát khỏi chương trình.

// Cách hiểu đề:
// - Số hoàn thiện là số nguyên dương bằng tổng các ước dương nhỏ hơn nó
//   (ví dụ 6 = 1 + 2 + 3), nên chức năng 2 và 3 yêu cầu nhập số dương.
// - Chức năng 4 yêu cầu a, b là số nguyên dương.

void nhapSoDuong(int &n) {
  do {
    scanf("%d", &n);
    if (n <= 0) {
      printf("Vui long nhap so nguyen duong: ");
    }
  } while (n <= 0);
}

// 1: Giải phương trình bậc 1 ax+b=0.
void giaiPhuongTrinhBac1(float a, float b) {
  if (a == 0) {
    if (b == 0) {
      printf("Phuong trinh vo so nghiem\n");
    } else {
      printf("Phuong trinh vo nghiem\n");
    }
  } else if (b == 0) {
    printf("Phuong trinh co nghiem x = 0.00\n");
  } else {
    printf("Phuong trinh co nghiem x = %.2f\n", -b / a);
  }
}

// 2: Kiểm tra một số nguyên có là số hoàn thiện không?
// Trả về 1 nếu n là số hoàn thiện, ngược lại trả về 0.
int kiemTraSoHoanThien(int n) {
  int tong = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      tong += i;
    }
  }
  return tong == n;
}

// 3: Liệt kê các số hoàn thiện trong phạm vi từ 1..n
void lietKeSoHoanThien(int n) {
  int coSo = 0;
  printf("Cac so hoan thien tu 1 den %d la: ", n);
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoHoanThien(i)) {
      if (coSo) {
        printf(", ");
      }
      printf("%d", i);
      coSo = 1;
    }
  }
  if (!coSo) {
    printf("khong co so hoan thien nao");
  }
  printf("\n");
}

// 4: Tìm ước chung lớn nhất của hai số nguyên a, b
int timUCLN(int a, int b) {
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a;
}

void hienThiMenu() {
  printf("\n===== MENU =====\n");
  printf("1. Giai phuong trinh bac 1 ax + b = 0\n");
  printf("2. Kiem tra so hoan thien\n");
  printf("3. Liet ke cac so hoan thien tu 1 den n\n");
  printf("4. Tim uoc chung lon nhat cua a va b\n");
  printf("0. Thoat chuong trinh\n");
  printf("Nhap lua chon: ");
}

void chonMenu() {
  int chon;
  do {
    hienThiMenu();
    scanf("%d", &chon);
    switch (chon) {
    case 1: {
      float a, b;
      printf("Nhap a: ");
      scanf("%f", &a);
      printf("Nhap b: ");
      scanf("%f", &b);
      giaiPhuongTrinhBac1(a, b);
      break;
    }
    case 2: {
      int n;
      printf("Nhap so nguyen duong: ");
      nhapSoDuong(n);
      if (kiemTraSoHoanThien(n)) {
        printf("%d la so hoan thien\n", n);
      } else {
        printf("%d khong phai la so hoan thien\n", n);
      }
      break;
    }
    case 3: {
      int n;
      printf("Nhap n: ");
      nhapSoDuong(n);
      lietKeSoHoanThien(n);
      break;
    }
    case 4: {
      int a, b;
      printf("Nhap a: ");
      nhapSoDuong(a);
      printf("Nhap b: ");
      nhapSoDuong(b);
      printf("UCLN cua %d va %d la: %d\n", a, b, timUCLN(a, b));
      break;
    }
    case 0:
      printf("Thoat chuong trinh\n");
      break;
    default:
      printf("Lua chon khong hop le\n");
      break;
    }
  } while (chon != 0);
}

int main() {
  chonMenu();
  return 0;
}
