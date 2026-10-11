#include <stdio.h>

// Câu 5: Viết chương trình nhập 1 số nguyên có ba chữ số. Hãy in ra cách đọc
// của nó.
// Ví dụ: 105 Một trăm lẻ năm, 101 Một trăm lẻ một, 110 Một trăm mười,
// 131 Một trăm ba mươi mốt, 145 Một trăm bốn mươi lăm

int main() {
  int n;
  printf("Nhap so nguyen co 3 chu so: ");
  scanf("%d", &n);

  if (n < 100 || n > 999) {
    printf("\nVui long nhap so nguyen co 3 chu so\n");
  } else {
    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donVi = n % 10;
    printf("\n");

    switch (tram) {
    case 1:
      printf("Mot tram");
      break;
    case 2:
      printf("Hai tram");
      break;
    case 3:
      printf("Ba tram");
      break;
    case 4:
      printf("Bon tram");
      break;
    case 5:
      printf("Nam tram");
      break;
    case 6:
      printf("Sau tram");
      break;
    case 7:
      printf("Bay tram");
      break;
    case 8:
      printf("Tam tram");
      break;
    case 9:
      printf("Chin tram");
      break;
    }

    switch (chuc) {
    case 0:
      // Hàng chục = 0 thì đọc "le", trừ khi đơn vị cũng = 0 (vd 200)
      if (donVi != 0) {
        printf(" le");
      }
      break;
    case 1:
      printf(" muoi");
      break;
    case 2:
      printf(" hai muoi");
      break;
    case 3:
      printf(" ba muoi");
      break;
    case 4:
      printf(" bon muoi");
      break;
    case 5:
      printf(" nam muoi");
      break;
    case 6:
      printf(" sau muoi");
      break;
    case 7:
      printf(" bay muoi");
      break;
    case 8:
      printf(" tam muoi");
      break;
    case 9:
      printf(" chin muoi");
      break;
    }

    switch (donVi) {
    case 0:
      break;
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
      printf(" bon");
      break;
    case 5:
      // Đứng sau "le" thì đọc "nam" (105), đứng sau "muoi" thì đọc "lam" (145)
      if (chuc == 0) {
        printf(" nam");
      } else {
        printf(" lam");
      }
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
  }

  return 0;
}
