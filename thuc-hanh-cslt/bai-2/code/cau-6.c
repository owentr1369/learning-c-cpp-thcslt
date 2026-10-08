#include <stdio.h>

// Câu 6: Nhập vào ngày, tháng, năm. Kiểm tra xem ngày, tháng, năm đó có hợp lệ
// hay không? In kết quả ra màn hình.

// Test cases (Input: ngay thang nam; năm nhuận là năm chia hết cho 4):
// Input: 15 8 2024 => Output: Ngay thang nam hop le
// Input: 31 12 2023 => Output: Ngay thang nam hop le
// Input: 30 4 2024 => Output: Ngay thang nam hop le
// Input: 31 4 2024 => Output: Ngay thang nam khong hop le
// Input: 29 2 2024 => Output: Ngay thang nam hop le
// Input: 29 2 2023 => Output: Ngay thang nam khong hop le
// Input: 29 2 2000 => Output: Ngay thang nam hop le
// Input: 0 5 2024 => Output: Ngay thang nam khong hop le
// Input: 15 13 2024 => Output: Ngay thang nam khong hop le
// Input: 1 1 0 => Output: Ngay thang nam khong hop le

int main() {
  int ngay, thang, nam;
  printf("Nhap ngay: ");
  scanf("%d", &ngay);
  printf("Nhap thang: ");
  scanf("%d", &thang);
  printf("Nhap nam: ");
  scanf("%d", &nam);

  int soNgayToiDa = 0;
  switch (thang) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    soNgayToiDa = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    soNgayToiDa = 30;
    break;
  case 2:
    if (nam % 4 == 0) {
      soNgayToiDa = 29;
    } else {
      soNgayToiDa = 28;
    }
    break;
  }

  if (nam > 0 && ngay >= 1 && ngay <= soNgayToiDa) {
    printf("\nNgay thang nam hop le\n");
  } else {
    printf("\nNgay thang nam khong hop le\n");
  }
  return 0;
}
