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

int main() {
  int a[max][max];
  int d, c;
  nhapMaTran(a, d, c);
  xuatMaTran(a, d, c);
  return 0;
}
