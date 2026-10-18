#include <math.h>
#include <stdio.h>

// Câu 5: Viết hàm giải phương trình bậc hai ax2+bx+c=0.

// Cách hiểu: a = 0 thì phương trình trở thành bậc một bx + c = 0.

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

// Trả về số nghiệm (-1 nếu vô số nghiệm), các nghiệm lưu vào x1, x2.
int giaiPTB2(float a, float b, float c, float &x1, float &x2) {
  if (a == 0) {
    return giaiPTB1(b, c, x1);
  }
  float delta = b * b - 4 * a * c;
  if (delta < 0) {
    return 0;
  }
  if (delta == 0) {
    if (b == 0) {
      x1 = 0;
    } else {
      x1 = -b / (2 * a);
    }
    return 1;
  }
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);
  return 2;
}

int main() {
  float a, b, c, x1, x2;
  printf("Giai phuong trinh ax^2 + bx + c = 0\n");
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);
  printf("Nhap c: ");
  scanf("%f", &c);

  int soNghiem = giaiPTB2(a, b, c, x1, x2);
  switch (soNghiem) {
  case -1:
    printf("\nVo so nghiem\n");
    break;
  case 0:
    printf("\nVo nghiem\n");
    break;
  case 1:
    if (a == 0) {
      printf("\nCo nghiem x = %.2f\n", x1);
    } else {
      printf("\nCo nghiem kep x = %.2f\n", x1);
    }
    break;
  case 2:
    printf("\nCo 2 nghiem x1 = %.2f, x2 = %.2f\n", x1, x2);
    break;
  }

  return 0;
}
