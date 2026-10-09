#include <stdio.h>

// Câu 11a: Viết chương trình hiển thị ra màn hình 5 dòng như hình sau:
// ******
// ******
// ******
// ******
// ******

// Test cases:
// Input: (không có) => Output: 5 dòng, mỗi dòng 6 dấu *

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 6; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
