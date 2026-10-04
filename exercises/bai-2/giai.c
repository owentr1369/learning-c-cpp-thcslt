#include <stdio.h>

// a. Nhập giá trị của mảng
void nhapMang(int A[], int n) {
  printf("Nhap cac gia tri trong mang:\n");
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &A[i]);
  }
}

// b. Xuất mảng vừa nhập.
void xuatMang(int A[], int n) {
  printf("Cac phan tu trong mang la: ");
  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d\n", A[i]);
    } else {
      printf("%d, ", A[i]);
    }
  }
}

// c. Xuất các phần tử chia hết cho 3 có trong mảng
void xuatPhanTuChiaHetCho3(int A[], int n) {
  printf("Cac phan tu chia het cho 3 la: ");
  for (int i = 0; i < n; i++) {
    if (A[i] % 3 == 0) {
      if (i == n - 1) {
        printf("%d\n", A[i]);
      } else {
        printf("%d, ", A[i]);
      }
    }
  }
}

// d. Đếm số lượng số dương có trong mảng
void demSoDuong(int A[], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] > 0) {
      dem++;
    }
  }
  printf("\nSo cac phan tu duong trong mang la: %d", dem);
}

int main() {
  int n;

  int A[10];
  // Nhập số phần tử mảng
  printf("Nhap so phan tu mang (1-10): ");
  scanf("%d", &n);
  if (n <= 0 || n > 10) {
    printf("Vui long nhap trong khoang 1-10 \n");
  } else {
    // a. Nhập giá trị của mảng
    nhapMang(A, n);
    xuatMang(A, n);
    xuatPhanTuChiaHetCho3(A, n);
    demSoDuong(A, n);
  }
  return 0;
}