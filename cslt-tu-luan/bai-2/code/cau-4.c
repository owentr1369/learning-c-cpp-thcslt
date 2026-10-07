#include <stdio.h>

// Câu 4: Viết chương trình nhập vào một số là số giây, đổi số giây này ra giờ
// phút giây và xuất theo dạng gio:phut:giay, mỗi thành phần có 2 chữ số. Ví dụ
// 3661 = 01:01:01.

// Test cases:
// Input: 3661 => Output: 01:01:01
// Input: 0 => Output: 00:00:00
// Input: 59 => Output: 00:00:59
// Input: 3600 => Output: 01:00:00
// Input: 86399 => Output: 23:59:59
// Input: -5 => Output: Vui long nhap so giay khong am

int main() {
  int s;
  printf("Nhap so giay: ");
  scanf("%d", &s);
  if (s < 0) {
    printf("Vui long nhap so giay khong am");
  } else {
    int gio = s / 3600;
    int phut =
        (s % 3600) / 60; // Số dư của giờ sẽ quy ra phút, mỗi phút có 60 giây
    int giay = s % 60;   // Số dư của phút sẽ quy ra giây
    printf("%02d:%02d:%02d\n", gio, phut, giay);
  }
  return 0;
}
