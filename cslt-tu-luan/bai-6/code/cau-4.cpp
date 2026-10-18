#include <stdio.h>

// Câu 4: Viết hàm giải phương trình bậc một ax+bx=0.

// Lưu ý: đề ghi "ax+bx=0" là gõ nhầm, phương trình bậc một là ax + b = 0
// (giống ví dụ 6.5 trong slide).

// Trả về -1 nếu vô số nghiệm, 0 nếu vô nghiệm, 1 nếu có nghiệm (lưu vào x).
int giaiPTB1(float a, float b, float &x) {
  if (a == 0) {
    if (b == 0) {
      return -1;
    }
    return 0;
  }
  // b = 0 thì -b / a ra -0.00, nên gán thẳng x = 0
  if (b == 0) {
    x = 0;
  } else {
    x = -b / a;
  }
  return 1;
}

int main() {
  float a, b, x;
  printf("Giai phuong trinh ax + b = 0\n");
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);

  int soNghiem = giaiPTB1(a, b, x);
  switch (soNghiem) {
  case -1:
    printf("\nVo so nghiem\n");
    break;
  case 0:
    printf("\nVo nghiem\n");
    break;
  case 1:
    printf("\nCo nghiem x = %.2f\n", x);
    break;
  }

  return 0;
}
