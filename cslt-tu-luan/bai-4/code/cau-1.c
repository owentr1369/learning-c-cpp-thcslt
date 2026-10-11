#include <math.h>
#include <stdio.h>

// Câu 1: Viết chương trình nhập vào 3 số nguyên dương a, b, c. Kiểm tra xem a,
// b, c có tạo thành 3 cạnh của tam giác không? Nếu có thì tính diện tích tam
// giác đó.
// Gợi ý: S=sqrt(p*(p-a)*(p-b)*(p-c)) với p =(a+b+c)/2.

int main() {
  int a, b, c;
  printf("Nhap 3 canh a b c: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a <= 0 || b <= 0 || c <= 0) {
    printf("\nVui long nhap 3 so nguyen duong\n");
  } else if (a + b > c && a + c > b && b + c > a) {
    // Chia cho 2.0 để ra số thực, chia cho 2 sẽ mất phần lẻ vì a, b, c là int
    float p = (a + b + c) / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nDien tich tam giac: %.2f\n", s);
  } else {
    // Tổng 2 cạnh bất kỳ phải lớn hơn cạnh còn lại mới tạo thành tam giác
    printf("\nKhong phai 3 canh cua tam giac\n");
  }

  return 0;
}
