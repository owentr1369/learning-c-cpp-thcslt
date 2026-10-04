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

// e. Tính tổng các số trong mảng
void tinhTongMang(int A[], int n) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    tong += A[i];
  }
  printf("\nTong cac phan tu duong trong mang la: %d", tong);
}

// f. Tính trung bình cộng của mảng
void tinhTrungBinhCongMang(int A[], int n) {
  float tong = 0;
  float trungBinhCong;
  for (int i = 0; i < n; i++) {
    tong += A[i];
  }
  trungBinhCong = tong / n;
  printf("\nTrung binh cong cua mang la: %.2f", trungBinhCong);
}

// g. Tính trung bình cộng các phần tử dương có trong mảng.
void tinhTrungBinhCongDuongMang(int A[], int n) {
  float tong = 0;
  int demDuong = 0;
  float trungBinhCong;
  for (int i = 0; i < n; i++) {
    if (A[i] > 0) {
      tong += A[i];
      demDuong++;
    }
  }
  if (demDuong == 0) {
    printf("\nMang khong co phan tu duong");
  } else {
    trungBinhCong = tong / demDuong;
    printf("\nTrung binh cong cac phan tu duong cua mang la: %.2f\n",
           trungBinhCong);
  }
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
    tinhTongMang(A, n);
    tinhTrungBinhCongMang(A, n);
    tinhTrungBinhCongDuongMang(A, n);
  }
  return 0;
}