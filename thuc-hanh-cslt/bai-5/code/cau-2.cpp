#include <stdio.h>

// Câu 2: Viết chương trình thực hiện:
// a. Nhập mảng số nguyên gồm n phần tử (0 < n <= 10).
// b. Xuất mảng vừa nhập.

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
