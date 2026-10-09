#include <stdio.h>

// Câu 3: Làm tiếp theo trong chương trình của câu 2 với các yêu cầu sau:
// a. Xuất các phần tử chia hết cho 3 có trong mảng
// b. Đếm số lượng số dương có trong mảng
// c. Tính tổng các số trong mảng
// d. Tính trung bình cộng của mảng
// e. Tính trung bình cộng các phần tử dương có trong mảng.
// f. Xuất các số nguyên tố có trong mảng
// g. Đếm số lượng số nguyên tố có trong mảng
// h. Tính tổng các số nguyên tố có trong mảng
// i. Tính trung bình cộng các số nguyên tố có trong mảng
// j. Tìm phần tử dương đầu tiên
// k. Tìm phần tử dương cuối cùng
// l. Tìm giá trị phần tử lớn nhất (nhỏ nhất)

const int max = 10;

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

void xuatMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int kiemTraSoNguyenTo(int n) {
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      dem++;
    }
  }
  return dem == 2;
}

// a. Xuất các phần tử chia hết cho 3 có trong mảng.
void xuatChiaHetCho3(int a[], int n) {
  int coSo = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 3 == 0) {
      printf("%d ", a[i]);
      coSo = 1;
    }
  }
  if (!coSo) {
    printf("(khong co so nao)");
  }
  printf("\n");
}

// b. Đếm số lượng số dương có trong mảng.
int demSoDuong(int a[], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      dem++;
    }
  }
  return dem;
}

// c. Tính tổng các số trong mảng.
int tongMang(int a[], int n) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    tong += a[i];
  }
  return tong;
}

// d. Tính trung bình cộng của mảng.
float tbcMang(int a[], int n) { return (float)tongMang(a, n) / n; }

int tongSoDuong(int a[], int n) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      tong += a[i];
    }
  }
  return tong;
}

// e. Tính trung bình cộng các phần tử dương có trong mảng.
float tbcSoDuong(int a[], int n) {
  return (float)tongSoDuong(a, n) / demSoDuong(a, n);
}

// f. Xuất các số nguyên tố có trong mảng.
void xuatSoNguyenTo(int a[], int n) {
  int coSo = 0;
  for (int i = 0; i < n; i++) {
    if (kiemTraSoNguyenTo(a[i])) {
      printf("%d ", a[i]);
      coSo = 1;
    }
  }
  if (!coSo) {
    printf("(khong co so nao)");
  }
  printf("\n");
}

// g. Đếm số lượng số nguyên tố có trong mảng.
int demSoNguyenTo(int a[], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (kiemTraSoNguyenTo(a[i])) {
      dem++;
    }
  }
  return dem;
}

// h. Tính tổng các số nguyên tố có trong mảng.
int tongSoNguyenTo(int a[], int n) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    if (kiemTraSoNguyenTo(a[i])) {
      tong += a[i];
    }
  }
  return tong;
}

// i. Tính trung bình cộng các số nguyên tố có trong mảng.
float tbcSoNguyenTo(int a[], int n) {
  return (float)tongSoNguyenTo(a, n) / demSoNguyenTo(a, n);
}

// j. Tìm vị trí phần tử dương đầu tiên, không có trả về -1.
int viTriDuongDauTien(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      return i;
    }
  }
  return -1;
}

// k. Tìm vị trí phần tử dương cuối cùng, không có trả về -1.
int viTriDuongCuoiCung(int a[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] > 0) {
      return i;
    }
  }
  return -1;
}

// l. Tìm giá trị phần tử lớn nhất (nhỏ nhất).
int timMax(int a[], int n) {
  int giaTriMax = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > giaTriMax) {
      giaTriMax = a[i];
    }
  }
  return giaTriMax;
}

int timMin(int a[], int n) {
  int giaTriMin = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] < giaTriMin) {
      giaTriMin = a[i];
    }
  }
  return giaTriMin;
}

int main() {
  int a[max];
  int n;
  nhapMang(a, n);
  printf("Mang vua nhap: ");
  xuatMang(a, n);

  printf("a. Cac phan tu chia het cho 3: ");
  xuatChiaHetCho3(a, n);

  printf("b. So luong so duong: %d\n", demSoDuong(a, n));

  printf("c. Tong: %d\n", tongMang(a, n));

  printf("d. Trung binh cong: %.2f\n", tbcMang(a, n));

  if (demSoDuong(a, n) == 0) {
    printf("e. Khong co so duong nao\n");
  } else {
    printf("e. Trung binh cong so duong: %.2f\n", tbcSoDuong(a, n));
  }

  printf("f. Cac so nguyen to: ");
  xuatSoNguyenTo(a, n);

  printf("g. So luong so nguyen to: %d\n", demSoNguyenTo(a, n));

  printf("h. Tong so nguyen to: %d\n", tongSoNguyenTo(a, n));

  if (demSoNguyenTo(a, n) == 0) {
    printf("i. Khong co so nguyen to nao\n");
  } else {
    printf("i. Trung binh cong so nguyen to: %.2f\n", tbcSoNguyenTo(a, n));
  }

  int dauTien = viTriDuongDauTien(a, n);
  if (dauTien == -1) {
    printf("j. Khong co phan tu duong\n");
  } else {
    printf("j. Phan tu duong dau tien: %d\n", a[dauTien]);
  }

  int cuoiCung = viTriDuongCuoiCung(a, n);
  if (cuoiCung == -1) {
    printf("k. Khong co phan tu duong\n");
  } else {
    printf("k. Phan tu duong cuoi cung: %d\n", a[cuoiCung]);
  }

  printf("l. Max: %d, Min: %d\n", timMax(a, n), timMin(a, n));
  return 0;
}
