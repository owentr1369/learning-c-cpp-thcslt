#include <stdio.h>

// Câu 3: Nhập vào 3 số nguyên dương a, b, c. Kiểm tra xem 3 số đó có lập thành
// tam giác không? Nếu có hãy cho biết tam giác đó thuộc loại nào? (Cân, vuông,
// đều, …).

// Test cases:
// Input: 3 3 3 => Output: Tam giac deu
// Input: 3 4 5 => Output: Tam giac vuong
// Input: 5 3 4 => Output: Tam giac vuong
// Input: 13 5 12 => Output: Tam giac vuong
// Input: 5 5 8 => Output: Tam giac can
// Input: 8 5 5 => Output: Tam giac can
// Input: 4 5 6 => Output: Tam giac thuong
// Input: 1 2 3 => Output: Khong lap thanh tam giac
// Input: 1 1 5 => Output: Khong lap thanh tam giac
// Input: 0 3 4 => Output: Vui long nhap 3 so nguyen duong

int main() {
  int a, b, c;
  printf("Nhap canh a: ");
  scanf("%d", &a);
  printf("Nhap canh b: ");
  scanf("%d", &b);
  printf("Nhap canh c: ");
  scanf("%d", &c);
  if (a <= 0 || b <= 0 || c <= 0) {
    printf("\nVui long nhap 3 so nguyen duong\n");
  } else if (a + b <= c || a + c <= b || b + c <= a) {
    printf("\nKhong lap thanh tam giac\n");
  } else if (a == b && b == c) {
    printf("\nTam giac deu\n");
  } else if (a * a + b * b == c * c || a * a + c * c == b * b ||
             b * b + c * c == a * a) { // Định lý Pytago
    printf("\nTam giac vuong\n");
  } else if (a == b || b == c || a == c) {
    printf("\nTam giac can\n");
  } else {
    printf("\nTam giac thuong\n");
  }
  return 0;
}
