#include <stdio.h>

// Câu 3: Viết chương trình nhập vào ma trận vuông kích thước n x n
// (2 <= n <= 100). Hãy viết hàm thực hiện những công việc sau:
// a. In ra các phần tử trên 4 đường biên của ma trận.
// b. Tính tổng các phần tử trên biên.
// c. Kiểm tra xem ma trận vuông có đối xứng qua đường chéo chính hay không.

const int max = 100;

// Nhập ma trận vuông kích thước n x n
void nhapMaTran(int a[][max], int &n) {
  do {
    printf("Nhap kich thuoc n (2..%d): ", max);
    scanf("%d", &n);
  } while (n < 2 || n > max);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Nhap phan tu a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");
}

// a. In ra các phần tử trên 4 đường biên của ma trận.
void inPTBien(int a[][max], int n) {
  printf("Cac phan tu bien cua ma tran:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // Biên ngang trên dưới + biên dọc trái phải
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
        printf("%4d", a[i][j]);
      } else {
        printf("    ");
      }
    }
    printf("\n");
  }
  printf("\n");
}

// b. Tính tổng các phần tử trên biên.
void tongPTBien(int a[][max], int n) {
  int tong = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
        tong += a[i][j];
      }
    }
  }
  printf("Tong cac phan tu bien cua ma tran: %d\n", tong);
  printf("\n");
}

// c.Kiểm tra xem ma trận vuông có đối xứng qua đường chéo chính hay không.
void kiemTraDoiXung(int a[][max], int n) {
  int doiXung = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != a[j][i]) {
        doiXung = 0;
      }
    }
  }
  if (doiXung) {
    printf("Mang nay doi xung qua duong cheo chinh");
  } else {
    printf("Mang nay khong doi xung qua duong cheo chinh");
  }
  printf("\n");
}

int main() {
  int a[max][max];
  int n;
  nhapMaTran(a, n);
  inPTBien(a, n);
  tongPTBien(a, n);
  kiemTraDoiXung(a, n);
  return 0;
}
