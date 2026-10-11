#include <stdio.h>

// Câu 3: Viết chương trình nhập vào tháng và năm, in ra tháng đó có bao nhiêu
// ngày.

int main() {
  int thang, nam;
  printf("Nhap thang: ");
  scanf("%d", &thang);
  printf("Nhap nam: ");
  scanf("%d", &nam);

  int soNgay = 0;
  // Các case liền nhau không có break sẽ dùng chung lệnh bên dưới
  switch (thang) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    soNgay = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    soNgay = 30;
    break;
  case 2:
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
      soNgay = 29;
    } else {
      soNgay = 28;
    }
    break;
  default:
    printf("\nThang khong hop le\n");
    break;
  }

  if (soNgay != 0) {
    printf("\nThang %d/%d co %d ngay\n", thang, nam, soNgay);
  }

  return 0;
}
