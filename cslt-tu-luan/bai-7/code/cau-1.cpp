#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Câu 1: Cho dãy số nguyên A[ ] gồm n phần tử (n<10000). Lập trình viết các
// hàm thực hiện các thao tác sau:
// a. Nhập số nguyên n là số phần tử của dãy số A[ ]
// b. Khởi tạo dãy số A[ ] bằng cách nhập n phần tử ban đầu từ bàn phím
// c. Khởi tạo dãy số A[ ] bằng cách nhập ngẫu nhiên n phần tử có giá trị trong
//    phạm vi [0, 100000]
// d. Xuất ra màn hình dãy số A[ ]
// e. Thêm một phần tử mới vào dãy A [ ] tại vị trí j
// f. Cập nhật lại giá trị phần tử của dãy A[ ] tại vị trí j
// g. Xóa phần tử của dãy A[ ] tại vị trí j
// h. Tìm xem phần tử x có trong dãy không? Nếu có trả về vị trí của x trong dãy
//    A [ ], nếu không trả về giá trị -1.
// i. Sắp xếp dãy số A [ ] tăng dần
// j. Sắp xếp dãy số A [ ] giảm dần

// Cách hiểu:
// - Dùng menu như bài tập 7.1 trong slide. Các lựa chọn dùng CHUNG một dãy A,
//   vì e đến j phải thao tác trên dãy đã tạo trước đó.
// - n hợp lệ: 0 < n < 10000. Vị trí j đếm từ 0.
// - Thêm: j hợp lệ từ 0 đến n (j = n là thêm vào cuối).
//   Cập nhật / xóa: j hợp lệ từ 0 đến n - 1.
// - Tìm x: trả về vị trí xuất hiện đầu tiên.

const int max = 10000;

// a. Nhập số nguyên n là số phần tử của dãy số A[ ]
void nhapN(int &n) {
  do {
    printf("Nhap so phan tu n (0 < n < %d): ", max);
    scanf("%d", &n);
    if (n <= 0 || n >= max) {
      printf("n khong hop le, vui long nhap lai\n");
    }
  } while (n <= 0 || n >= max);
}

// b. Khởi tạo dãy số A[ ] bằng cách nhập n phần tử ban đầu từ bàn phím
void nhapMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &a[i]);
  }
}

// c. Khởi tạo dãy số A[ ] bằng cách nhập ngẫu nhiên n phần tử có giá trị trong
//    phạm vi [0, 100000]
void nhapMangNgauNhien(int a[], int n) {
  for (int i = 0; i < n; i++) {
    // Trên Windows rand() chỉ trả về tối đa 32767
    a[i] = rand() % 100001;
  }
}

// d. Xuất ra màn hình dãy số A[ ]
void xuatMang(int a[], int n) {
  if (n == 0) {
    printf("Day rong\n");
    return;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// e. Thêm một phần tử mới vào dãy A [ ] tại vị trí j
// Trả về 1 nếu thêm được, ngược lại trả về 0.
int themPhanTu(int a[], int &n, int x, int j) {
  if (j < 0 || j > n) {
    return 0;
  }
  // Dời các phần tử từ cuối đến j sang phải 1 ô để chừa chỗ cho x
  for (int i = n; i > j; i--) {
    a[i] = a[i - 1];
  }
  a[j] = x;
  n++;
  return 1;
}

// f. Cập nhật lại giá trị phần tử của dãy A[ ] tại vị trí j
// Trả về 1 nếu cập nhật được, ngược lại trả về 0.
int capNhatPhanTu(int a[], int n, int x, int j) {
  if (j < 0 || j >= n) {
    return 0;
  }
  a[j] = x;
  return 1;
}

// g. Xóa phần tử của dãy A[ ] tại vị trí j
// Trả về 1 nếu xóa được, ngược lại trả về 0.
int xoaPhanTu(int a[], int &n, int j) {
  if (j < 0 || j >= n) {
    return 0;
  }
  // Dời các phần tử sau j sang trái 1 ô, đè lên phần tử bị xóa
  for (int i = j; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  n--;
  return 1;
}

// h. Tìm xem phần tử x có trong dãy không? Nếu có trả về vị trí của x trong dãy
//    A [ ], nếu không trả về giá trị -1.
int timX(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return i;
    }
  }
  return -1;
}

void hoanVi(int &x, int &y) {
  int tam = x;
  x = y;
  y = tam;
}

// i. Sắp xếp dãy số A [ ] tăng dần
void sapXepTang(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        hoanVi(a[i], a[j]);
      }
    }
  }
}

// j. Sắp xếp dãy số A [ ] giảm dần
void sapXepGiam(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] < a[j]) {
        hoanVi(a[i], a[j]);
      }
    }
  }
}

void hienThiMenu() {
  printf("\n===== MENU =====\n");
  printf("1. Nhap n va nhap day tu ban phim\n");
  printf("2. Nhap n va tao day ngau nhien\n");
  printf("3. Xuat day\n");
  printf("4. Them phan tu tai vi tri j\n");
  printf("5. Cap nhat phan tu tai vi tri j\n");
  printf("6. Xoa phan tu tai vi tri j\n");
  printf("7. Tim x\n");
  printf("8. Sap xep tang dan\n");
  printf("9. Sap xep giam dan\n");
  printf("0. Thoat\n");
  printf("Nhap lua chon: ");
}

void chonMenu() {
  int a[max];
  int n = 0;
  int chon;
  do {
    hienThiMenu();
    scanf("%d", &chon);
    switch (chon) {
    case 1:
      nhapN(n);
      nhapMang(a, n);
      printf("Day vua nhap: ");
      xuatMang(a, n);
      break;
    case 2:
      nhapN(n);
      nhapMangNgauNhien(a, n);
      printf("Day ngau nhien: ");
      xuatMang(a, n);
      break;
    case 3:
      printf("Day A: ");
      xuatMang(a, n);
      break;
    case 4: {
      if (n >= max - 1) {
        printf("Day da day, khong the them\n");
        break;
      }
      int x, j;
      printf("Nhap gia tri can them: ");
      scanf("%d", &x);
      printf("Nhap vi tri j: ");
      scanf("%d", &j);
      if (themPhanTu(a, n, x, j)) {
        printf("Day sau khi them: ");
        xuatMang(a, n);
      } else {
        printf("Vi tri khong hop le\n");
      }
      break;
    }
    case 5: {
      int x, j;
      printf("Nhap vi tri j: ");
      scanf("%d", &j);
      printf("Nhap gia tri moi: ");
      scanf("%d", &x);
      if (capNhatPhanTu(a, n, x, j)) {
        printf("Day sau khi cap nhat: ");
        xuatMang(a, n);
      } else {
        printf("Vi tri khong hop le\n");
      }
      break;
    }
    case 6: {
      int j;
      printf("Nhap vi tri j: ");
      scanf("%d", &j);
      if (xoaPhanTu(a, n, j)) {
        printf("Day sau khi xoa: ");
        xuatMang(a, n);
      } else {
        printf("Vi tri khong hop le\n");
      }
      break;
    }
    case 7: {
      int x;
      printf("Nhap x can tim: ");
      scanf("%d", &x);
      printf("Vi tri cua %d: %d\n", x, timX(a, n, x));
      break;
    }
    case 8:
      sapXepTang(a, n);
      printf("Day tang dan: ");
      xuatMang(a, n);
      break;
    case 9:
      sapXepGiam(a, n);
      printf("Day giam dan: ");
      xuatMang(a, n);
      break;
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
  srand(time(NULL));
  chonMenu();
  return 0;
}
