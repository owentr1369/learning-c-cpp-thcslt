#include <stdio.h>

// Câu 1: Viết chương trình nhập hai số nguyên a và b, tính toán và hiển thị ra
// màn hình giá trị của các biểu thức: (a+b), (a-b), (a*b), (a/b), (a%b), (a++),
// (b--), (a==b), (a!=b), (a>b), (a<b), (a>=b) và (a<=b).

int main() {
  int a, b;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);

  printf("\na + b = %d", a + b);
  printf("\na - b = %d", a - b);
  printf("\na * b = %d", a * b);
  if (b != 0) {
    printf("\na / b = %d", a / b);
    printf("\na %% b = %d", a % b);
  } else {
    printf("\nKhong chia duoc cho 0 nen bo qua a / b va a %% b");
  }

  printf("\na++ = %d", a++);
  printf("\nb-- = %d", b--);
  printf("\n\nSau a++ va b--: a = %d, b = %d", a, b);

  printf("\na == b = %d", a == b);
  printf("\na != b = %d", a != b);
  printf("\na > b = %d", a > b);
  printf("\na < b = %d", a < b);
  printf("\na >= b = %d", a >= b);
  printf("\na <= b = %d\n", a <= b);

  return 0;
}
