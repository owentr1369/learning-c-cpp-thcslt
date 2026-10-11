#include <math.h>
#include <stdio.h>

// Câu 4: Viết chương trình nhập vào tọa độ của hai điểm (x1, y1) và (x2, y2)
// a. Tính hệ số góc của đường thẳng đi qua hai điểm đó theo công thức:
//    Hệ số góc = (y2 - y1)/(x2 - x1)
// b. Tính khoảng cách giữa hai điểm.

int main() {
  float x1, y1, x2, y2;
  printf("Nhap toa do diem thu nhat (x1 y1): ");
  scanf("%f %f", &x1, &y1);
  printf("Nhap toa do diem thu hai (x2 y2): ");
  scanf("%f %f", &x2, &y2);

  // a. Hệ số góc = độ chênh theo y / độ chênh theo x
  // x1 = x2 thì đường thẳng đứng, mẫu số bằng 0 nên không có hệ số góc
  if (x1 != x2) {
    float heSoGoc = (y2 - y1) / (x2 - x1);
    printf("\nHe so goc: %.2f", heSoGoc);
  } else {
    printf("\nKhong tinh duoc he so goc vi x1 = x2");
  }

  // b. Khoảng cách = căn bậc hai của (dx^2 + dy^2), theo định lý Pytago
  float dx = x2 - x1;
  float dy = y2 - y1;
  float khoangCach = sqrt(dx * dx + dy * dy);
  printf("\nKhoang cach: %.2f\n", khoangCach);

  return 0;
}
