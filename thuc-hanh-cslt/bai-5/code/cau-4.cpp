#include <stdio.h>

// Câu 4: Làm các câu 1, và câu 2 -a, b, d, e, f đối với mảng một chiều các số
// thực.
// Phạm vi: các hàm của câu 1 (trừ hàm liên quan số nguyên tố), câu 2a, 2b, và
// các ý của câu 3 áp dụng được cho số thực: b (đếm số dương), d (trung bình
// cộng), e (trung bình cộng số dương).

// Test cases (xuất 2 chữ số thập phân, vị trí tính từ 0;
// a = 1.5 -2.25 3 0 4.75 nếu không ghi khác):
// Cau 2 - Nhap/Xuat:
//   Input: n = 5, 1.5 -2.25 3 0 4.75 => Output: 1.50 -2.25 3.00 0.00 4.75
//   Input: n = 0, n = 11, ... => Output: yeu cau nhap lai
// Cau 3:
//   b. So luong so duong: 3
//   d. Trung binh cong: 1.40
//   e. Trung binh cong so duong: 3.08
//   Voi a = -1.5 -0.5:
//   b. So luong so duong: 0
//   d. Trung binh cong: -1.00
//   e. Khong co so duong nao
// Cau 1:
//   Sao chep => b = 1.50 -2.25 3.00 0.00 4.75
//   Tim x = 3 => 3.00 nam o vi tri 2
//   Tim x = 2.5 => 2.50 khong co trong mang
//   Gop a voi b = 9.5 -1 => c = 1.50 -2.25 3.00 0.00 4.75 9.50 -1.00, nc = 7
//   Max => 4.75
//   Sap xep tang => -2.25 0.00 1.50 3.00 4.75
//   Sap xep giam => 4.75 3.00 1.50 0.00 -2.25
//   Them 2.5 vao vi tri 1 => 1.50 2.50 -2.25 3.00 0.00 4.75
//   Xoa vi tri 0 => -2.25 3.00 0.00 4.75
//   Sua vi tri 2 thanh 3.5 => 1.50 -2.25 3.50 0.00 4.75
//   Chen x = 2 vao mang tang -2.25 0 1.5 3 4.75
//     => -2.25 0.00 1.50 2.00 3.00 4.75
//   Xoa cac phan tu nho hon 1 => 1.50 3.00 4.75
//   Cap nhat max thanh min => 1.50 -2.25 3.00 0.00 -2.25

const int max = 10;

void hienThiMenu() {
  printf("\n=============== MENU ===============\n");
  printf("1. Nhap va xuat mang\n");
  printf("2. Dem so luong so duong\n");
  printf("3. Tinh trung binh cong cua mang\n");
  printf("4. Tinh trung binh cong cac so duong\n");
  printf("5. Sao chep mang a vao mang b\n");
  printf("6. Tim vi tri dau tien cua x\n");
  printf("7. Gop mang a va mang b thanh mang c\n");
  printf("8. Tim gia tri lon nhat\n");
  printf("9. Sap xep tang dan\n");
  printf("10. Sap xep giam dan\n");
  printf("11. Them phan tu vao vi tri k\n");
  printf("12. Xoa phan tu o vi tri k\n");
  printf("13. Sua phan tu o vi tri k\n");
  printf("14. Chen x giu thu tu tang\n");
  printf("15. Xoa cac phan tu nho hon x\n");
  printf("16. Cap nhat cac phan tu lon nhat thanh gia tri nho nhat\n");
  printf("0. Thoat chuong trinh\n");
  printf("====================================\n");
  printf("Nhap lua chon: ");
}

void nhapMang(float a[], int &n) {
  do {
    printf("Nhap so phan tu n (0 < n <= %d): ", max);
    scanf("%d", &n);
  } while (n <= 0 || n > max);
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu [%d]: ", i);
    scanf("%f", &a[i]);
  }
}

void xuatMang(float a[], int n) {
  if (n == 0) {
    printf("(mang rong)\n");
    return;
  }
  for (int i = 0; i < n; i++) {
    printf("%.2f ", a[i]);
  }
  printf("\n");
}

// Nhập vị trí k trong đoạn [0, viTriMax].
int nhapViTri(int viTriMax) {
  int k;
  do {
    printf("Nhap vi tri k (0..%d): ", viTriMax);
    scanf("%d", &k);
  } while (k < 0 || k > viTriMax);
  return k;
}

void hoanVi(float &x, float &y) {
  float tam = x;
  x = y;
  y = tam;
}

int demSoDuong(float a[], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      dem++;
    }
  }
  return dem;
}

float tongMang(float a[], int n) {
  float tong = 0;
  for (int i = 0; i < n; i++) {
    tong += a[i];
  }
  return tong;
}

float tongSoDuong(float a[], int n) {
  float tong = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      tong += a[i];
    }
  }
  return tong;
}

float timMax(float a[], int n) {
  float giaTriMax = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > giaTriMax) {
      giaTriMax = a[i];
    }
  }
  return giaTriMax;
}

float timMin(float a[], int n) {
  float giaTriMin = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] < giaTriMin) {
      giaTriMin = a[i];
    }
  }
  return giaTriMin;
}

// 1: Câu 2a, 2b - Nhập và xuất mảng.
void nhapXuatMang() {
  float a[max];
  int n;
  nhapMang(a, n);
  printf("Mang a: ");
  xuatMang(a, n);
}

// 2: Câu 3b - Đếm số lượng số dương.
void inSoLuongSoDuong() {
  float a[max];
  int n;
  nhapMang(a, n);
  printf("So luong so duong: %d\n", demSoDuong(a, n));
}

// 3: Câu 3d - Tính trung bình cộng của mảng.
void inTbcMang() {
  float a[max];
  int n;
  nhapMang(a, n);
  printf("Trung binh cong: %.2f\n", tongMang(a, n) / n);
}

// 4: Câu 3e - Tính trung bình cộng các số dương.
void inTbcSoDuong() {
  float a[max];
  int n;
  nhapMang(a, n);
  int dem = demSoDuong(a, n);
  if (dem == 0) {
    printf("Khong co so duong nao\n");
  } else {
    printf("Trung binh cong so duong: %.2f\n", tongSoDuong(a, n) / dem);
  }
}

// 5: Sao chép mảng a vào mảng b.
void saoChepMang() {
  float a[max];
  int n;
  nhapMang(a, n);
  float b[max];
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
  printf("Mang b sau khi sao chep: ");
  xuatMang(b, n);
}

// 6: Tìm vị trí đầu tiên của x trong mảng a.
void timViTriPhanTu() {
  float a[max];
  int n;
  nhapMang(a, n);
  float x;
  printf("Nhap x can tim: ");
  scanf("%f", &x);
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      printf("%.2f nam o vi tri %d\n", x, i);
      return;
    }
  }
  printf("%.2f khong co trong mang\n", x);
}

// 7: Gộp mảng a và mảng b theo thứ tự đó thành mảng c.
void gopMang() {
  float a[max], b[max];
  int na, nb;
  printf("Nhap mang a:\n");
  nhapMang(a, na);
  printf("Nhap mang b:\n");
  nhapMang(b, nb);
  float c[2 * max];
  int nc = 0;
  for (int i = 0; i < na; i++) {
    c[nc] = a[i];
    nc++;
  }
  for (int i = 0; i < nb; i++) {
    c[nc] = b[i];
    nc++;
  }
  printf("Mang c (%d phan tu): ", nc);
  xuatMang(c, nc);
}

// 8: Tìm giá trị lớn nhất trong a.
void inMax() {
  float a[max];
  int n;
  nhapMang(a, n);
  printf("max = %.2f\n", timMax(a, n));
}

// 9: Sắp xếp mảng tăng dần.
void sapXepTangDan() {
  float a[max];
  int n;
  nhapMang(a, n);
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        hoanVi(a[i], a[j]);
      }
    }
  }
  printf("Mang tang dan: ");
  xuatMang(a, n);
}

// 10: Sắp xếp mảng giảm dần.
void sapXepGiamDan() {
  float a[max];
  int n;
  nhapMang(a, n);
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] < a[j]) {
        hoanVi(a[i], a[j]);
      }
    }
  }
  printf("Mang giam dan: ");
  xuatMang(a, n);
}

// 11: Thêm phần tử x vào vị trí k.
void themPhanTu() {
  float a[max];
  int n;
  nhapMang(a, n);
  if (n == max) {
    printf("Mang da day, khong the them\n");
    return;
  }
  float x;
  printf("Nhap gia tri can them: ");
  scanf("%f", &x);
  int k = nhapViTri(n);
  for (int i = n; i > k; i--) {
    a[i] = a[i - 1];
  }
  a[k] = x;
  n++;
  printf("Mang sau khi them: ");
  xuatMang(a, n);
}

// 12: Xóa phần tử ở vị trí k.
void xoaPhanTu() {
  float a[max];
  int n;
  nhapMang(a, n);
  int k = nhapViTri(n - 1);
  for (int i = k; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  n--;
  printf("Mang sau khi xoa: ");
  xuatMang(a, n);
}

// 13: Sửa phần tử ở vị trí k.
void suaPhanTu() {
  float a[max];
  int n;
  nhapMang(a, n);
  int k = nhapViTri(n - 1);
  printf("Nhap gia tri moi: ");
  scanf("%f", &a[k]);
  printf("Mang sau khi sua: ");
  xuatMang(a, n);
}

// 14: Chèn x vào mảng (đã tăng dần) sao cho mảng vẫn tăng dần.
void chenGiuThuTuTang() {
  float a[max];
  int n;
  printf("Nhap mang tang dan:\n");
  nhapMang(a, n);
  if (n == max) {
    printf("Mang da day, khong the chen\n");
    return;
  }
  float x;
  printf("Nhap x can chen: ");
  scanf("%f", &x);
  int i = n;
  while (i > 0 && a[i - 1] > x) {
    a[i] = a[i - 1];
    i--;
  }
  a[i] = x;
  n++;
  printf("Mang sau khi chen: ");
  xuatMang(a, n);
}

// 15: Xóa tất cả các phần tử có giá trị nhỏ hơn x.
void xoaPhanTuNhoHonX() {
  float a[max];
  int n;
  nhapMang(a, n);
  float x;
  printf("Nhap x: ");
  scanf("%f", &x);
  int m = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= x) {
      a[m] = a[i];
      m++;
    }
  }
  n = m;
  printf("Mang sau khi xoa: ");
  xuatMang(a, n);
}

// 16: Cập nhật các phần tử có giá trị lớn nhất thành giá trị nhỏ nhất.
void capNhatMaxThanhMin() {
  float a[max];
  int n;
  nhapMang(a, n);
  float giaTriMax = timMax(a, n);
  float giaTriMin = timMin(a, n);
  for (int i = 0; i < n; i++) {
    if (a[i] == giaTriMax) {
      a[i] = giaTriMin;
    }
  }
  printf("Mang sau khi cap nhat: ");
  xuatMang(a, n);
}

void chonMenu() {
  int chon;
  do {
    hienThiMenu();
    scanf("%d", &chon);
    switch (chon) {
    case 1:
      nhapXuatMang();
      break;
    case 2:
      inSoLuongSoDuong();
      break;
    case 3:
      inTbcMang();
      break;
    case 4:
      inTbcSoDuong();
      break;
    case 5:
      saoChepMang();
      break;
    case 6:
      timViTriPhanTu();
      break;
    case 7:
      gopMang();
      break;
    case 8:
      inMax();
      break;
    case 9:
      sapXepTangDan();
      break;
    case 10:
      sapXepGiamDan();
      break;
    case 11:
      themPhanTu();
      break;
    case 12:
      xoaPhanTu();
      break;
    case 13:
      suaPhanTu();
      break;
    case 14:
      chenGiuThuTuTang();
      break;
    case 15:
      xoaPhanTuNhoHonX();
      break;
    case 16:
      capNhatMaxThanhMin();
      break;
    case 0:
      printf("Thoat chuong trinh\n");
      break;
    default:
      printf("Lua chon khong hop le\n");
    }
  } while (chon != 0);
}

int main() {
  chonMenu();
  return 0;
}
