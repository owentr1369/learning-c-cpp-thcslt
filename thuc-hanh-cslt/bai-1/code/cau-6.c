#include <math.h>
#include <stdio.h>

// Câu 6: Nhập vào 3 số nguyên dương a, b, c. Kiểm tra xem 3 số đó có lập thành
// tam giác không? Nếu có hãy tính chu vi và diện tích của tam giác theo công
// thức:
// - Chu vi CV = a + b + c.
// - Diện tích S = sqrt(p * (p - a) * (p - b) * (p - c)), trong đó: p = CV / 2.
// Xuất các kết quả ra màn hình.

// Test cases:
// Input: 3 4 5 => Output: Chu vi: 12, Dien tich: 6.00
// Input: 5 5 5 => Output: Chu vi: 15, Dien tich: 10.83
// Input: 2 3 4 => Output: Chu vi: 9, Dien tich: 2.90
// Input: 6 8 10 => Output: Chu vi: 24, Dien tich: 24.00
// Input: 1 2 3 => Output: Khong lap thanh tam giac
// Input: 1 1 5 => Output: Khong lap thanh tam giac
// Input: 0 3 4 => Output: Vui long nhap 3 so nguyen duong
// Input: -3 4 5 => Output: Vui long nhap 3 so nguyen duong

int main() {
  int a, b, c;
  printf("Nhap canh a: ");
  scanf("%d", &a);
  printf("Nhap canh b: ");
  scanf("%d", &b);
  printf("Nhap canh c: ");
  scanf("%d", &c);
  if (a <= 0 || b <= 0 || c <= 0) {
    printf("\nVui long nhap 3 so nguyen duong\n");
  } else if (a + b <= c || a + c <= b || b + c <= a) {
    printf("\nKhong lap thanh tam giac\n");
  } else {
    int chuVi = a + b + c;
    float p = chuVi / 2.0;
    float dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nChu vi: %d", chuVi);
    printf("\nDien tich: %.2f\n", dienTich);
  }
  return 0;
}
