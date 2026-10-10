#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Câu 2: Ma trận vuông cấp n là mảng 2 chiều có số dòng = số cột = n.
// a. Sinh ngẫu nhiên 1 ma trận vuông cấp n chứa số nguyên (n nhập từ bàn phím).
// b. Xuất ma trận.
// c. Liệt kê các phần tử trên đường chéo chính.
// d. Liệt kê các phần tử trên đường chéo phụ.
// e. Tính tổng các phần tử nằm trên dòng thứ k (k do người dùng nhập).
// f. Tính tổng các phần tử trên mỗi dòng.
// g. Xuất ra các dòng có tổng lớn nhất.

const int max = 100;

// a. Sinh ngẫu nhiên 1 ma trận vuông cấp n
void sinhMaTran(int a[][max], int &n) {
  do {
    printf("Nhap cap ma tran n (1..%d): ", max);
    scanf("%d", &n);
  } while (n <= 0 || n > max);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = rand() % 100;
    }
  }
}

// b. Xuất ma trận
void xuatMaTran(int a[][max], int n) {
  printf("Ma tran %dx%d: \n", n, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// c. Liệt kê các phần tử trên đường chéo chính
void xuatCheoChinh(int a[][max], int n) {
  printf("Cac phan tu tren duong cheo chinh: ");
  for (int i = 0; i < n; i++) {
    printf("%4d", a[i][i]);
  }
  printf("\n");
}

// d. Liệt kê các phần tử trên đường chéo phụ
void xuatCheoPhu(int a[][max], int n) {
  printf("Cac phan tu tren duong cheo phu: ");
  for (int i = n - 1; i >= 0; i--) {
    printf("%4d", a[i][n - 1 - i]);
  }
  printf("\n");
}

// Trả về tổng các phần tử trên dòng có chỉ số i (tính từ 0).
int tongDong(int a[][max], int n, int i) {
  int tong = 0;
  for (int j = 0; j < n; j++) {
    tong += a[i][j];
  }
  return tong;
}

// e. Tính tổng các phần tử nằm trên dòng thứ k
void tongDongK(int a[][max], int n) {
  int k;
  do {
    printf("Nhap dong thu k (1..%d): ", n);
    scanf("%d", &k);
  } while (k < 1 || k > n);
  printf("Tong cac phan tu dong thu %d: %d\n", k, tongDong(a, n, k - 1));
}

// f. Tính tổng các phần tử trên mỗi dòng
void tongMoiDong(int a[][max], int n) {
  for (int i = 0; i < n; i++) {
    printf("Tong dong thu %d: %d\n", i + 1, tongDong(a, n, i));
  }
}

// g. Xuất ra các dòng có tổng lớn nhất
void xuatDongTongLonNhat(int a[][max], int n) {
  int lonNhat = tongDong(a, n, 0);
  for (int i = 1; i < n; i++) {
    if (tongDong(a, n, i) > lonNhat) {
      lonNhat = tongDong(a, n, i);
    }
  }
  printf("Cac dong co tong lon nhat (%d):\n", lonNhat);
  for (int i = 0; i < n; i++) {
    if (tongDong(a, n, i) == lonNhat) {
      printf("Dong thu %d:", i + 1);
      for (int j = 0; j < n; j++) {
        printf("%4d", a[i][j]);
      }
      printf("\n");
    }
  }
}

int main() {
  // Dòng này để mỗi lần chạy thì lại sinh ngẫu nhiên khác nhau
  srand(time(NULL));
  int a[max][max];
  int n;
  sinhMaTran(a, n);
  xuatMaTran(a, n);
  xuatCheoChinh(a, n);
  xuatCheoPhu(a, n);
  tongDongK(a, n);
  tongMoiDong(a, n);
  xuatDongTongLonNhat(a, n);
}
