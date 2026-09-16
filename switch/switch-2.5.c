#include <stdio.h>

int main() {
  unsigned int a;
  printf("Nhap mo so tu 1 den 12: ");
  scanf("%u", &a);

  switch (a) {
  // Thang 1, 3, 5, 7, 8, 10, 12 co 31 ngay
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("Thang %u co 31 ngay\n", a);
    break;

  // Thang 4, 6, 9, 11 co 30 ngay
  case 4:
  case 6:
  case 9:
  case 11:
    printf("Thang %u co 30 ngay\n", a);
    break;

  // Thang 2 phu thuoc vao nam nhuan
  case 2: {
    unsigned int y;
    printf("Vui long nhap them nam: ");
    scanf("%u", &y);
    // Nam nhuan la nam chia het cho 4
    if (y % 4 == 0)
      printf("Thang %u nam %u co 29 ngay\n", a, y);
    else
      printf("Thang %u nam %u co 28 ngay\n", a, y);
    break;
  }

  default:
    printf("Khong ton tai thang nay\n");
    break;
  }

  return 0;
}
