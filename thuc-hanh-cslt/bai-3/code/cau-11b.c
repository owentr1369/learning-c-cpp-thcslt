#include <stdio.h>

// Câu 11b: Viết chương trình hiển thị ra màn hình 5 dòng như hình sau:
// *
// **
// ***
// ****
// *****

// Test cases:
// Input: (không có) => Output: dòng thứ i có i dấu * (i từ 1 đến 5)

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
