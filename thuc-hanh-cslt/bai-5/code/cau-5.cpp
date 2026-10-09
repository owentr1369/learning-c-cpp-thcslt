#include <stdio.h>

// Câu 5: Viết chương trình thực hiện:
// a. Nhập vào mảng a gồm n phần tử, trong quá trình nhập kiểm tra các phần tử
//    nhập vào không được trùng, nếu trùng thông báo và yêu cầu nhập lại.
// b. Xuất mảng.
// c. Xuất ra màn hình các phần tử là số chính phương nằm tại những vị trí lẻ
//    trong mảng.
// d. Xuất ra vị trí của các phần tử có giá trị lớn nhất.
// e. Viết hàm tính tổng các phần tử nằm ở vị trí chẵn trong mảng.
// f. Viết hàm sắp xếp mảng theo thứ tự tăng dần.
// Yêu cầu chương trình thực hiện theo menu chức năng.

const int max = 100;

void hienThiMenu() {
  printf("\n=============== MENU ===============\n");
  printf("1. Nhap va xuat mang\n");
  printf("2. Xuat so chinh phuong o vi tri le\n");
  printf("3. Xuat vi tri cac phan tu lon nhat\n");
  printf("4. Tinh tong cac phan tu o vi tri chan\n");
  printf("5. Sap xep mang tang dan\n");
  printf("0. Thoat chuong trinh\n");
  printf("====================================\n");
  printf("Nhap lua chon: ");
}

// Trả về 1 nếu x đã có trong a[0..n-1], ngược lại trả về 0.
int kiemTraTrung(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return 1;
    }
  }
  return 0;
}

// a. Nhập mảng a gồm n phần tử không trùng nhau.
void nhapMang(int a[], int &n) {
  do {
    printf("Nhap so phan tu n (1..%d): ", max);
    scanf("%d", &n);
  } while (n <= 0 || n > max);
  for (int i = 0; i < n; i++) {
    int x;
    do {
      printf("Nhap phan tu a[%d]: ", i);
      scanf("%d", &x);
      if (kiemTraTrung(a, i, x)) {
        printf("%d bi trung, vui long nhap lai\n", x);
      }
    } while (kiemTraTrung(a, i, x));
    a[i] = x;
  }
}

// b. Xuất mảng.
void xuatMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// Số chính phương là số bằng bình phương của 1 số nguyên, ví dụ 4 là bình
// phương của 2, 9 là bình phương của 3
int laSoChinhPhuong(int n) {
  for (int i = 0; i * i <= n; i++) {
    if (i * i == n) {
      return 1;
    }
  }
  return 0;
}

// c. Xuất các phần tử là số chính phương nằm tại những vị trí lẻ.
void xuatSoChinhPhuongViTriLe(int a[], int n) {
  int coSo = 0;
  for (int i = 1; i < n; i += 2) {
    if (laSoChinhPhuong(a[i])) {
      printf("%d ", a[i]);
      coSo = 1;
    }
  }
  if (!coSo) {
    printf("(khong co so nao)");
  }
  printf("\n");
}

// d. Xuất vị trí của các phần tử có giá trị lớn nhất.
void xuatViTriMax(int a[], int n) {
  int giaTriMax = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > giaTriMax) {
      giaTriMax = a[i];
    }
  }
  printf("Vi tri max: ");
  for (int i = 0; i < n; i++) {
    if (a[i] == giaTriMax) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

// e. Tính tổng các phần tử nằm ở vị trí chẵn.
int tongViTriChan(int a[], int n) {
  int tong = 0;
  for (int i = 0; i < n; i += 2) {
    tong += a[i];
  }
  return tong;
}

void hoanVi(int &x, int &y) {
  int tam = x;
  x = y;
  y = tam;
}

// f. Sắp xếp mảng theo thứ tự tăng dần.
void sapXepTangDan(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        hoanVi(a[i], a[j]);
      }
    }
  }
}

void chonMenu() {
  int chon;
  do {
    hienThiMenu();
    scanf("%d", &chon);
    if (chon < 0 || chon > 5) {
      printf("Lua chon khong hop le\n");
      continue;
    }
    if (chon == 0) {
      printf("Thoat chuong trinh\n");
      break;
    }
    int a[max], n;
    nhapMang(a, n);
    switch (chon) {
    case 1:
      printf("Mang a: ");
      xuatMang(a, n);
      break;
    case 2:
      printf("So chinh phuong o vi tri le: ");
      xuatSoChinhPhuongViTriLe(a, n);
      break;
    case 3:
      xuatViTriMax(a, n);
      break;
    case 4:
      printf("Tong vi tri chan: %d\n", tongViTriChan(a, n));
      break;
    case 5:
      sapXepTangDan(a, n);
      printf("Mang tang dan: ");
      xuatMang(a, n);
      break;
    }
  } while (chon != 0);
}

int main() {
  chonMenu();
  return 0;
}
