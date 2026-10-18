#include <stdio.h>

// Câu 2: Viết chương trình nhập năm, in ra năm đó là năm nhuận hay không?
// Gợi ý: Năm nhuận là năm chia hết cho 4 và không chia hết cho 100, hoặc là
// năm chia hết cho 400.

int main() {
  int nam;
  printf("Nhap nam: ");
  scanf("%d", &nam);

  if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
    printf("\n%d la nam nhuan\n", nam);
  } else {
    printf("\n%d khong phai nam nhuan\n", nam);
  }

  return 0;
}
