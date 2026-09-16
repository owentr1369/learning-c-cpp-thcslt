#include <stdio.h>

int main() {
  unsigned int a;
  printf("Nhap so nguyen co 2 chu so: ");
  scanf("%u", &a);
  switch (a) {
  case 10: {
    printf("So muoi \n");
    break;
  }
  case 11: {
    printf("So muoi mot \n");
    break;
  }
  case 12: {
    printf("So muoi hai \n");
    break;
  }
  case 13: {
    printf("So muoi ba \n");
    break;
  }
  case 14: {
    printf("So muoi bon \n");
    break;
  }
  case 15: {
    printf("So muoi lam \n");
    break;
  }
  default: {
    printf("So qua lon khong doc noi... \n");
    break;
  }
  }
  return 0;
}