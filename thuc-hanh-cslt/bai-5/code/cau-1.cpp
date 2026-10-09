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

void nhapMang(int a[], int &n) {
  printf("Nhap so phan tu mang a: ");
  scanf("%d", &n);
  printf("\nNhap cac phan tu mang a: ");
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

void saoChepMang(int a[], int b[], int n) {
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
}

void timViTriPhanTu(int a[], int n) {
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

int main() {
  int a[max];
  int n;
  nhapMang(a, n);
  xuatMang(a, n);

  int b[max];
  saoChepMang(a, b, n);
  printf("Mang b sau khi sao chep: ");
  xuatMang(b, n);

  timViTriPhanTu(a, n);

  return 0;
}
