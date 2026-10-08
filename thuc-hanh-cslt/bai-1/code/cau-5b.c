#include <stdio.h>

// Câu 5b: Nhập vào ba số nguyên. Xuất ra màn hình giá trị lớn nhất.

// Test cases:
// Input: 1 2 3 => Output: 3
// Input: 9 2 5 => Output: 9
// Input: 2 8 4 => Output: 8
// Input: -1 -7 -3 => Output: -1
// Input: 5 5 2 => Output: 5
// Input: 6 6 6 => Output: 6

int main() {
  int a, b, c;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);
  printf("Nhap so nguyen c: ");
  scanf("%d", &c);
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("\nGia tri lon nhat: %d\n", max);
  return 0;
}
