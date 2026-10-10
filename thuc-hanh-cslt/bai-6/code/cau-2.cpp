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

int main() {
  // Dòng này để mỗi lần chạy thì lại sinh ngẫu nhiên khác nhau
  srand(time(NULL));
  int a[max][max];
  int n;
  sinhMaTran(a, n);
  xuatMaTran(a, n);
  xuatCheoChinh(a, n);
}
