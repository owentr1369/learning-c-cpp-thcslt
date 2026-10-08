#include <stdio.h>

// Câu 4: Viết chương trình nhập số nguyên có hai chữ số, hiển thị cách đọc số
// đó.

// Test cases:
// Input: 10 => Output: muoi
// Input: 11 => Output: muoi mot
// Input: 14 => Output: muoi bon
// Input: 15 => Output: muoi lam
// Input: 20 => Output: hai muoi
// Input: 21 => Output: hai muoi mot
// Input: 24 => Output: hai muoi tu
// Input: 35 => Output: ba muoi lam
// Input: 99 => Output: chin muoi chin
// Input: 9 => Output: Vui long nhap so nguyen co hai chu so
// Input: 100 => Output: Vui long nhap so nguyen co hai chu so

int main() {
  int n;
  printf("Nhap so nguyen co hai chu so: ");
  scanf("%d", &n);
  if (n < 10 || n > 99) {
    printf("\nVui long nhap so nguyen co hai chu so\n");
    return 0;
  }
  int chuc = n / 10;
  int donVi = n % 10;
  printf("\n");
  switch (chuc) {
  case 1:
    printf("muoi");
    break;
  case 2:
    printf("hai muoi");
    break;
  case 3:
    printf("ba muoi");
    break;
  case 4:
    printf("bon muoi");
    break;
  case 5:
    printf("nam muoi");
    break;
  case 6:
    printf("sau muoi");
    break;
  case 7:
    printf("bay muoi");
    break;
  case 8:
    printf("tam muoi");
    break;
  case 9:
    printf("chin muoi");
    break;
  }
  switch (donVi) {
  case 1:
    printf(" mot");
    break;
  case 2:
    printf(" hai");
    break;
  case 3:
    printf(" ba");
    break;
  case 4:
    printf(chuc == 1 ? " bon" : " tu");
    break;
  case 5:
    printf(" lam");
    break;
  case 6:
    printf(" sau");
    break;
  case 7:
    printf(" bay");
    break;
  case 8:
    printf(" tam");
    break;
  case 9:
    printf(" chin");
    break;
  }
  printf("\n");
  return 0;
}
