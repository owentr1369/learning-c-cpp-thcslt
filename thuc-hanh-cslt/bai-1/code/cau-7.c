#include <stdio.h>

// Câu 7: Viết chương trình đảo ngược một số nguyên dương có đúng 3 chữ số.
// VD: Nhập vào n=234 => In ra: 432

// Test cases:
// Input: 234 => Output: 432
// Input: 999 => Output: 999
// Input: 120 => Output: 021
// Input: 100 => Output: 001
// Input: 99 => Output: Vui long nhap so nguyen duong co dung 3 chu so
// Input: 1000 => Output: Vui long nhap so nguyen duong co dung 3 chu so
// Input: -234 => Output: Vui long nhap so nguyen duong co dung 3 chu so

int main() {
  int n;
  printf("Nhap so nguyen duong co 3 chu so: ");
  scanf("%d", &n);
  if (n < 100 || n > 999) {
    printf("\nVui long nhap so nguyen duong co dung 3 chu so\n");
  } else {
    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donVi = n % 10;
    printf("%d%d%d\n", donVi, chuc, tram);
  }
  return 0;
}
