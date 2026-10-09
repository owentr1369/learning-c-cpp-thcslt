#include <stdio.h>

// Câu 2: Viết chương trình thực hiện:
// a. Nhập mảng số nguyên gồm n phần tử (0 < n <= 10).
// b. Xuất mảng vừa nhập.

// Test cases (mỗi dòng input là một lần nhập):
// Input: n = 5, 1 2 3 4 5 => Output: 1 2 3 4 5
// Input: n = 1, -7 => Output: -7
// Input: n = 10, 9 8 7 6 5 4 3 2 1 0 => Output: 9 8 7 6 5 4 3 2 1 0
// Input: n = 0, n = 11, n = 3, 4 5 6 => Output: (yeu cau nhap lai 2 lan) 4 5 6

const int max = 10;

// a. Nhập mảng số nguyên gồm n phần tử (0 < n <= 10).
void nhapMang(int a[], int &n) {
  do {
    printf("Nhap so phan tu n (0 < n <= %d): ", max);
    scanf("%d", &n);
  } while (n <= 0 || n > max);
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu a[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

// b. Xuất mảng vừa nhập.
void xuatMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {
  int a[max];
  int n;
  nhapMang(a, n);
  printf("Mang vua nhap: ");
  xuatMang(a, n);
  return 0;
}
