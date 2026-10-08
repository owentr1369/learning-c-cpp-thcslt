#include <stdio.h>

// Câu 7: Đếm chữ số của số tự nhiên N

// Test cases:
// Input: 12345 => Output: So chu so: 5
// Input: 7 => Output: So chu so: 1
// Input: 100 => Output: So chu so: 3
// Input: 1000000 => Output: So chu so: 7
// Input: 0 => Output: So chu so: 1
// Input: -25 => Output: Vui long nhap so tu nhien (N >= 0)

int main() {
  int n;
  printf("Nhap N: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("\nVui long nhap so tu nhien (N >= 0)\n");
    return 0;
  }
  int dem = 0;
  do {
    dem++;
    n /= 10;
  } while (n > 0);
  printf("\nSo chu so: %d\n", dem);
  return 0;
}
