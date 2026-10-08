#include <stdio.h>

// Câu 3c: Nhập một kí tự. Xuất ra màn hình kí tự vừa nhập.

// Test cases:
// Input: a => Output: a
// Input: Z => Output: Z
// Input: 5 => Output: 5
// Input: # => Output: #

int main() {
  char c;
  printf("Nhap ki tu: ");
  scanf(" %c", &c);
  printf("Ki tu vua nhap: %c\n", c);
  return 0;
}
