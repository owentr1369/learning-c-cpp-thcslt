#include <stdio.h>

// Câu 5: In ra tất cả các số nguyên từ 0 đến 20, ngoại trừ các số chia hết cho
// 5 như 0, 5, 10, 15.

// Test cases:
// Input: (không có) => Output: 1 2 3 4 6 7 8 9 11 12 13 14 16 17 18 19

int main() {
  for (int i = 0; i <= 20; i++) {
    if (i % 5 == 0) {
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}
