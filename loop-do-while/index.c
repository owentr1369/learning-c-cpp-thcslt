#include <stdio.h>

// Nhap vao mot so nguyen n thuoc doan [0; 9].
// Neu n nam ngoai doan nay thi yeu cau nhap lai.
// Neu n nam trong doan nay thi xuat thong bao: Ban vua nhap so ...
int main() {
  int n;

  do {
    printf("Nhap so nguyen n thuoc doan [0; 9]: ");
    scanf("%d", &n);

    if (n < 0 || n > 9)
      printf("So khong hop le, vui long nhap lai!\n");
  } while (n < 0 || n > 9);

  printf("Ban vua nhap so %d\n", n);
  return 0;
}
