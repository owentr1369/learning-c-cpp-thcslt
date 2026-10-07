#include <stdio.h>

// Câu 1: Viết chương trình nhập vào hai cạnh a và b của hình chữ nhật. Tính chu
// vi và diện tích hình chữ nhật và xuất kết quả ra màn hình.

// Test cases:
// Input: a = 3, b = 4 => Output: Chu vi: 14.00, Dien tich: 12.00
// Input: a = 2.5, b = 4 => Output: Chu vi: 13.00, Dien tich: 10.00
// Input: a = 5, b = 5 => Output: Chu vi: 20.00, Dien tich: 25.00
// Input: a = 0, b = 4 => Output: Vui long nhap canh lon hon 0
// Input: a = -3, b = 4 => Output: Vui long nhap canh lon hon 0

int main() {
  float a, b;
  printf("Nhap chieu dai canh a: ");
  scanf("%f", &a);
  printf("Nhap chieu dai canh b: ");
  scanf("%f", &b);
  if (a <= 0 || b <= 0) {
    printf("\nVui long nhap canh lon hon 0\n");
  } else {
    float chuVi = (a + b) * 2;
    float dienTich = a * b;
    printf("\nChu vi: %.2f", chuVi);
    printf("\nDien tich: %.2f\n", dienTich);
  }
  return 0;
}
