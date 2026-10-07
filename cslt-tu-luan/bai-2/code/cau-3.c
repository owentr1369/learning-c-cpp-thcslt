#include <stdio.h>

// Câu 3: Viết chương trình nhập 2 số nguyên và in kết quả của phép (+), phép
// trừ (-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên.

// Test cases (Input: a b; Output: a + b, a - b, a * b, a / b, (float)a / b):
// Input: 7 2 => Output: 9, 5, 14, 3, 3.50
// Input: 10 5 => Output: 15, 5, 50, 2, 2.00
// Input: -7 2 => Output: -5, -9, -14, -3, -3.50
// Input: 3 8 => Output: 11, -5, 24, 0, 0.38
// Input: 10 0 => Output: 10, 10, 0, Vi b = 0 nen khong thuc hien duoc phep chia

int main() {
  int a, b;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);
  printf("\na + b = %d", a + b);
  printf("\na - b = %d", a - b);
  printf("\na * b = %d", a * b);
  if (b != 0) {
    printf("\na / b = %d", a / b);
    printf("\n\nNhan xet: phep chia 2 so nguyen (int) se bo phan thap phan "
           "(lam tron ve phia 0), vi du -7 / 2 = -3.\n"
           "Muon co ket qua so thuc thi phai ep kieu float");
    float ketQua = (float)a / b;
    printf("\nKet qua sau khi ep kieu thanh float a / b = %.2f\n", ketQua);
  } else {
    printf("\nVi b = 0 nen khong thuc hien duoc phep chia\n");
  }

  return 0;
}
