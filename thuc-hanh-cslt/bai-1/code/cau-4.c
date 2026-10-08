#include <stdio.h>

// Câu 4: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi
// và diện tích của hình tròn. In các kết quả lên màn hình.

// Test cases (PI = 3.14159):
// Input: r = 1 => Output: Chu vi: 6.28, Dien tich: 3.14
// Input: r = 2 => Output: Chu vi: 12.57, Dien tich: 12.57
// Input: r = 2.5 => Output: Chu vi: 15.71, Dien tich: 19.63
// Input: r = 5 => Output: Chu vi: 31.42, Dien tich: 78.54
// Input: r = 0 => Output: Vui long nhap ban kinh lon hon 0
// Input: r = -3 => Output: Vui long nhap ban kinh lon hon 0

int main() {
  const float PI = 3.14159;
  float r;
  printf("Nhap ban kinh r: ");
  scanf("%f", &r);
  if (r <= 0) {
    printf("\nVui long nhap ban kinh lon hon 0\n");
  } else {
    float chuVi = 2 * PI * r;
    float dienTich = PI * r * r;
    printf("\nChu vi: %.2f", chuVi);
    printf("\nDien tich: %.2f\n", dienTich);
  }
  return 0;
}
