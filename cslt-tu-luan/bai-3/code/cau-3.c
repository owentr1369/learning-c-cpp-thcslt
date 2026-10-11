#include <stdio.h>

// Câu 3: Viết chương trình nhập vào một số thực. Đơn vị tính cho số này là
// centimet (cm). Hãy in ra số tương đương bằng đơn vị foot và inch. Độ chính
// xác của foot và inch là một số lẻ thập phân. (Hướng dẫn: 2.54 cm = 1 inch,
// 12 inch = 1 foot)

int main() {
  float cm;
  printf("Nhap so do (cm): ");
  scanf("%f", &cm);

  float inch = cm / 2.54;
  float foot = inch / 12;
  printf("\nInch: %.1f", inch);
  printf("\nFoot: %.1f\n", foot);

  return 0;
}
