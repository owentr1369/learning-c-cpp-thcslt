#include <stdio.h>

// Câu 11c: Viết chương trình hiển thị ra màn hình 5 dòng như hình sau:
// *****
// ****
// ***
// **
// *

// Test cases:
// Input: (không có) => Output: dòng thứ i có (6 - i) dấu * (i từ 1 đến 5)

int main() {
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
