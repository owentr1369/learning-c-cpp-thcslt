#include <stdio.h>

// Câu 1: Viết chương trình thực hiện:
// a. Nhập ma trận gồm d dòng và c cột (d, c nhập từ bàn phím)
// b. Xuất ma trận
// c. Tính tổng các phần tử của ma trận
// d. Tính trung bình cộng các phần tử của ma trận.
// e. Tính trung bình cộng các phần tử dương
// f. Xuất các phần tử nằm trên dòng k (k do người dùng nhập)
// g. Tính tổng các phần tử nằm trên cột k (k do người dùng nhập)
// h. Tìm phần tử lớn nhất

const int max = 100;

// a. Nhập ma trận gồm d dòng và c cột
void nhapMaTran(int a[][max], int &d, int &c) {
  do {
    printf("Nhap so dong (1..%d): ", max);
    scanf("%d", &d);
  } while (d <= 0 || d > max);
  do {
    printf("Nhap so cot (1..%d): ", max);
    scanf("%d", &c);
  } while (c <= 0 || c > max);
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf("Nhap phan tu [%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");
}

// b. Xuất ma trận
void xuatMaTran(int a[][max], int d, int c) {
  printf("Ma tran %dx%d: \n", d, c);
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// c. Tính tổng các phần tử của ma trận
int tongMaTran(int a[][max], int d, int c) {
  int tong = 0;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      tong += a[i][j];
    }
  }
  return tong;
}

// d. Tính trung bình cộng các phần tử của ma trận
float tbcMaTran(int a[][max], int d, int c) {
  return (float)tongMaTran(a, d, c) / (d * c);
}

// e. Tính trung bình cộng các phần tử dương
int demSoDuong(int a[][max], int d, int c) {
  int dem = 0;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] > 0) {
        dem++;
      }
    }
  }
  return dem;
}

int tongSoDuong(int a[][max], int d, int c) {
  int tong = 0;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] > 0) {
        tong += a[i][j];
      }
    }
  }
  return tong;
}

float tbcSoDuong(int a[][max], int d, int c) {
  return (float)tongSoDuong(a, d, c) / demSoDuong(a, d, c);
}

int main() {
  int a[max][max];
  int d, c;
  nhapMaTran(a, d, c);
  xuatMaTran(a, d, c);
  printf("Tong cac phan tu: %d\n", tongMaTran(a, d, c));
  printf("Trung binh cong cac phan tu: %.2f\n", tbcMaTran(a, d, c));
  if (demSoDuong(a, d, c) == 0) {
    printf("Khong co so duong nao\n");
  } else {
    printf("Trung binh cong cac so duong: %.2f\n", tbcSoDuong(a, d, c));
  }
  return 0;
}
