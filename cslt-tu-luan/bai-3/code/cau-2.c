#include <stdio.h>

// Câu 2: Viết chương trình nhập hai số nguyên a và b, tính toán và hiển thị ra
// màn hình giá trị của các biểu thức: (a & b), (a | b), (a^b), (~a), (a<<2) và
// (a>>2)

int main() {
  int a, b;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  printf("Nhap so nguyen b: ");
  scanf("%d", &b);

  // Ví dụ: a = 60 = 0011 1100, b = 13 = 0000 1101

  // AND: bit kết quả = 1 khi cả hai bit đều = 1 -> 0000 1100 = 12
  printf("\na & b = %d", a & b);
  // OR: bit kết quả = 1 khi ít nhất một bit = 1 -> 0011 1101 = 61
  printf("\na | b = %d", a | b);
  // XOR: bit kết quả = 1 khi hai bit khác nhau -> 0011 0001 = 49
  printf("\na ^ b = %d", a ^ b);
  // NOT: đảo mọi bit (0 thành 1, 1 thành 0), kết quả luôn = -(a + 1) -> -61
  printf("\n~a = %d", ~a);
  // Dịch trái 2 bit, thêm 2 bit 0 bên phải = nhân với 4 -> 1111 0000 = 240
  printf("\na << 2 = %d", a << 2);
  // Dịch phải 2 bit, bỏ 2 bit bên phải = chia nguyên cho 4 -> 0000 1111 = 15
  printf("\na >> 2 = %d\n", a >> 2);

  return 0;
}
