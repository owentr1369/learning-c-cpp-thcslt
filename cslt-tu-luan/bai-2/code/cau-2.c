#include <stdio.h>

// Câu 2: Viết chương trình nhập vào 3 số nguyên biểu diễn ngày, tháng, năm và
// xuất ra màn hình dưới dạng "dd/mm/yyyy"

// Test cases:
// Input: 5 3 2024 => Output: 05/03/2024
// Input: 25 12 2023 => Output: 25/12/2023
// Input: 1 1 999 => Output: 01/01/0999
// Input: 31 10 2026 => Output: 31/10/2026

int main() {
  int d, m, y;
  printf("Nhap ngay: ");
  scanf("%d", &d);
  printf("Nhap thang: ");
  scanf("%d", &m);
  printf("Nhap nam: ");
  scanf("%d", &y);

  if (d <= 0 || d > 31) {
    printf("Ngay khong hop le\n");
  } else if (m <= 0 || m > 12) {
    printf("Thang khong hop le\n");
  } else {
    // Năm vẫn có thể âm (năm trước Công Nguyên) nên không cần check năm
    printf("\nNgay thang nam da nhap: %02d/%02d/%04d\n", d, m, y);
  }

  return 0;
}
