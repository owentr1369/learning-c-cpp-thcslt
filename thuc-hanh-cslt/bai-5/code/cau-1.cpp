#include <cstdio>
#include <stdio.h>

// Câu 1: Viết hàm thực hiện từng yêu cầu sau:
// - Nhập mảng.
// - Xuất mảng.
// - Sao chép mảng a nhập vào mảng b.
// - Tìm xem phần tử x có nằm trong mảng a kích thước n hay không? Nếu có thì
//   nó nằm ở vị trí đầu tiên nào.
// - Mảng a có phải là mảng toàn các số nguyên tố hay không?
// - Gộp mảng a (na phần tử) và mảng b (nb phần tử) theo thứ tự đó thành mảng
//   c (nc phần tử).
// - Tách mảng a thành 2 mảng b (chứa số nguyên tố) và mảng c (các số còn lại).
// - Tìm giá trị lớn nhất trong a (gọi là max).
// - Sắp xếp mảng giảm dần/tăng dần.
// - Thêm/Xóa/Sửa một phần tử vào mảng.
// - Chèn một phần tử có giá trị x vào mảng sao cho mảng vẫn giữ được thứ tự
//   tăng.
// - Xóa tất cả các phần tử có giá trị nhỏ hơn x.
// - Cập nhật lại giá trị của các phần tử có giá trị lớn nhất thành giá trị nhỏ
//   nhất.

// Test cases (vị trí tính từ 0; a = 3 7 4 7 2 nếu không ghi khác):
// Nhap/Xuat:
//   Input: n = 5, 3 7 4 7 2 => Output: 3 7 4 7 2
// Sao chep:
//   a = 3 7 4 7 2 => b = 3 7 4 7 2
// Tim kiem x:
//   x = 7 => Output: 7 nam o vi tri 1
//   x = 2 => Output: 2 nam o vi tri 4
//   x = 10 => Output: 10 khong co trong mang
// Mang toan so nguyen to:
//   a = 3 7 4 7 2 => Output: Khong
//   a = 2 3 5 7 => Output: Co
//   a = 1 => Output: Khong
// Gop mang:
//   a = 1 2 3, b = 7 8 => Output: c = 1 2 3 7 8, nc = 5
// Tach mang:
//   a = 3 7 4 7 2 9 1 => Output: b = 3 7 7 2, c = 4 9 1
// Tim max:
//   a = 3 7 4 7 2 => Output: max = 7
//   a = -5 -2 -9 => Output: max = -2
// Sap xep:
//   Tang dan => Output: 2 3 4 7 7
//   Giam dan => Output: 7 7 4 3 2
// Them/Xoa/Sua:
//   Them 10 vao vi tri 2 => Output: 3 7 10 4 7 2
//   Xoa phan tu o vi tri 1 => Output: 3 4 7 2
//   Sua phan tu o vi tri 0 thanh 5 => Output: 5 7 4 7 2
// Chen x giu thu tu tang (a = 1 3 5 7):
//   x = 4 => Output: 1 3 4 5 7
//   x = 0 => Output: 0 1 3 5 7
//   x = 9 => Output: 1 3 5 7 9
//   x = 5 => Output: 1 3 5 5 7
// Xoa cac phan tu nho hon x:
//   x = 4 => Output: 7 4 7
//   x = 1 => Output: 3 7 4 7 2
//   x = 10 => Output: (mang rong)
// Cap nhat max thanh min:
//   a = 3 7 4 7 2 => Output: 3 2 4 2 2
//   a = 5 5 5 => Output: 5 5 5

const int max = 100;

void hienThiMenu() {
  printf("\n=============== MENU ===============\n");
  printf("1. Nhap va xuat mang\n");
  printf("2. Sao chep mang a vao mang b\n");
  printf("3. Tim vi tri dau tien cua x\n");
  printf("4. Kiem tra mang toan so nguyen to\n");
  printf("5. Gop mang a va mang b thanh mang c\n");
  printf("6. Tach mang a thanh so nguyen to / so con lai\n");
  printf("7. Tim gia tri lon nhat\n");
  printf("8. Sap xep tang dan\n");
  printf("9. Sap xep giam dan\n");
  printf("10. Them phan tu vao vi tri k\n");
  printf("11. Xoa phan tu o vi tri k\n");
  printf("12. Sua phan tu o vi tri k\n");
  printf("13. Chen x giu thu tu tang\n");
  printf("14. Xoa cac phan tu nho hon x\n");
  printf("15. Cap nhat cac phan tu lon nhat thanh gia tri nho nhat\n");
  printf("0. Thoat chuong trinh\n");
  printf("====================================\n");
  printf("Nhap lua chon: ");
}

void nhapMang(int a[], int &n) {
  do {
    printf("Nhap so phan tu (1..%d): ", max);
    scanf("%d", &n);
  } while (n <= 0 || n > max);
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu [%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void xuatMang(int a[], int n) {
  if (n == 0) {
    printf("(mang rong)\n");
    return;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
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

void hoanVi(int &x, int &y) {
  int tam = x;
  x = y;
  y = tam;
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

// 1: Nhập và xuất mảng.
void nhapXuatMang() {
  int a[max], n;
  nhapMang(a, n);
  printf("Mang a: ");
  xuatMang(a, n);
}

// 2: Sao chép mảng a vào mảng b.
void saoChepMang() {
  int a[max], n;
  nhapMang(a, n);
  int b[max];
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
  printf("Mang b sau khi sao chep: ");
  xuatMang(b, n);
}

// 3: Tìm vị trí đầu tiên của x trong mảng a.
void timViTriPhanTu() {
  int a[max], n;
  nhapMang(a, n);
  int x;
  printf("Nhap x can tim: ");
  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      printf("Vi tri dau tien cua %d trong a la: %d\n", x, i);
      return;
    }
  }
  printf("%d khong ton tai trong mang a\n", x);
}

// 4: Kiểm tra mảng a có phải toàn số nguyên tố không.
void kiemTraMangToanSoNguyenTo() {
  int a[max], n;
  nhapMang(a, n);
  for (int i = 0; i < n; i++) {
    if (!kiemTraSoNguyenTo(a[i])) {
      printf("Mang a khong phai la mang toan so nguyen to\n");
      return;
    }
  }
  printf("Mang a la mang toan so nguyen to\n");
}

// 5: Gộp mảng a và mảng b theo thứ tự đó thành mảng c.
void gopMang() {
  int a[max], na;
  int b[max], nb;
  printf("Nhap mang a:\n");
  nhapMang(a, na);
  printf("Nhap mang b:\n");
  nhapMang(b, nb);
  int c[2 * max];
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

// 6: Tách a thành mảng b (số nguyên tố) và mảng c (các số còn lại).
void tachMang() {
  int a[max], na;
  nhapMang(a, na);
  int b[max], nb = 0;
  int c[max], nc = 0;
  for (int i = 0; i < na; i++) {
    if (kiemTraSoNguyenTo(a[i])) {
      b[nb] = a[i];
      nb++;
    } else {
      c[nc] = a[i];
      nc++;
    }
  }
  printf("Mang b (so nguyen to): ");
  xuatMang(b, nb);
  printf("Mang c (so con lai): ");
  xuatMang(c, nc);
}

// 7: Tìm giá trị lớn nhất trong a.
void inMax() {
  int a[max], n;
  nhapMang(a, n);
  printf("max = %d\n", timMax(a, n));
}

// 8: Sắp xếp mảng tăng dần.
void sapXepTangDan() {
  int a[max], n;
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

// 9: Sắp xếp mảng giảm dần.
void sapXepGiamDan() {
  int a[max], n;
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

// 10: Thêm phần tử x vào vị trí k.
void themPhanTu() {
  int a[max], n;
  nhapMang(a, n);
  if (n == max) {
    printf("Mang da day, khong the them\n");
    return;
  }
  int x;
  printf("Nhap gia tri can them: ");
  scanf("%d", &x);
  int k = nhapViTri(n);
  for (int i = n; i > k; i--) {
    a[i] = a[i - 1];
  }
  a[k] = x;
  n++;
  printf("Mang sau khi them: ");
  xuatMang(a, n);
}

// 11: Xóa phần tử ở vị trí k.
void xoaPhanTu() {
  int a[max], n;
  nhapMang(a, n);
  int k = nhapViTri(n - 1);
  for (int i = k; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  n--;
  printf("Mang sau khi xoa: ");
  xuatMang(a, n);
}

// 12: Sửa phần tử ở vị trí k.
void suaPhanTu() {
  int a[max], n;
  nhapMang(a, n);
  int k = nhapViTri(n - 1);
  printf("Nhap gia tri moi: ");
  scanf("%d", &a[k]);
  printf("Mang sau khi sua: ");
  xuatMang(a, n);
}

// 13: Chèn x vào mảng (đã tăng dần) sao cho mảng vẫn tăng dần.
void chenGiuThuTuTang() {
  int a[max], n;
  printf("Nhap mang tang dan:\n");
  nhapMang(a, n);
  if (n == max) {
    printf("Mang da day, khong the chen\n");
    return;
  }
  int x;
  printf("Nhap x can chen: ");
  scanf("%d", &x);
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

// 14: Xóa tất cả các phần tử có giá trị nhỏ hơn x.
void xoaPhanTuNhoHonX() {
  int a[max], n;
  nhapMang(a, n);
  int x;
  printf("Nhap x: ");
  scanf("%d", &x);
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

// 15: Cập nhật các phần tử có giá trị lớn nhất thành giá trị nhỏ nhất.
void capNhatMaxThanhMin() {
  int a[max], n;
  nhapMang(a, n);
  int giaTriMax = timMax(a, n);
  int giaTriMin = timMin(a, n);
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
      saoChepMang();
      break;
    case 3:
      timViTriPhanTu();
      break;
    case 4:
      kiemTraMangToanSoNguyenTo();
      break;
    case 5:
      gopMang();
      break;
    case 6:
      tachMang();
      break;
    case 7:
      inMax();
      break;
    case 8:
      sapXepTangDan();
      break;
    case 9:
      sapXepGiamDan();
      break;
    case 10:
      themPhanTu();
      break;
    case 11:
      xoaPhanTu();
      break;
    case 12:
      suaPhanTu();
      break;
    case 13:
      chenGiuThuTuTang();
      break;
    case 14:
      xoaPhanTuNhoHonX();
      break;
    case 15:
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
