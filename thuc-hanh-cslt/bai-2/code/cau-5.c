#include <stdio.h>

// Câu 5: Viết chương trình nhập vào tháng của một năm, cho biết số ngày của
// tháng đó. Nếu tháng nhập vào < 1 hoặc > 12 thì thông báo "Không tồn tại
// tháng này". Biết rằng:
// - Các tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày.
// - Các tháng 4, 6, 9, 11 có 30 ngày.
// - Nếu là tháng 2 thì yêu cầu nhập thêm năm, nếu là năm nhuận thì tháng 2 có
//   29 ngày, còn lại là 28 ngày. Năm nhuận là năm chia hết cho 4.

// Test cases:
// Input: 1 => Output: Thang 1 co 31 ngay
// Input: 2, nam 2024 => Output: Thang 2 nam 2024 co 29 ngay
// Input: 2, nam 2023 => Output: Thang 2 nam 2023 co 28 ngay
// Input: 2, nam 2000 => Output: Thang 2 nam 2000 co 29 ngay
// Input: 4 => Output: Thang 4 co 30 ngay
// Input: 7 => Output: Thang 7 co 31 ngay
// Input: 8 => Output: Thang 8 co 31 ngay
// Input: 9 => Output: Thang 9 co 30 ngay
// Input: 12 => Output: Thang 12 co 31 ngay
// Input: 0 => Output: Khong ton tai thang nay
// Input: 13 => Output: Khong ton tai thang nay

int main() {
  int thang, nam;
  printf("Nhap thang: ");
  scanf("%d", &thang);
  switch (thang) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("\nThang %d co 31 ngay\n", thang);
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("\nThang %d co 30 ngay\n", thang);
    break;
  case 2:
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (nam % 4 == 0) {
      printf("\nThang 2 nam %d co 29 ngay\n", nam);
    } else {
      printf("\nThang 2 nam %d co 28 ngay\n", nam);
    }
    break;
  default:
    printf("\nKhong ton tai thang nay\n");
  }
  return 0;
}
