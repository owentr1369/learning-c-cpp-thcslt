#include <stdio.h>

// Câu 4: Viết chương trình in ra bảng cửu chương.

// Test cases:
// Input: (không nhập) => Output: in đủ bảng cửu chương từ 1 đến 9
//   Bang cuu chuong 1:
//   1 x 1 = 1
//   1 x 2 = 2
//   ...
//   1 x 10 = 10
//   ...
//   Bang cuu chuong 9:
//   9 x 1 = 9
//   ...
//   9 x 10 = 90
//
// Kiểm tra nhanh vài dòng trong output:
//   Dòng đầu tiên:    1 x 1 = 1
//   Dòng cuối bảng 5: 5 x 10 = 50
//   Dòng cuối cùng:   9 x 10 = 90
//   Tổng cộng: 9 bảng x 10 dòng = 90 phép nhân

int main() {
  for (int i = 1; i <= 9; i++) {
    printf("\nBang cuu chuong %d:\n", i);
    for (int j = 1; j <= 10; j++) {
      printf("%d x %2d = %2d\n", i, j, i * j);
    }
  }
  return 0;
}