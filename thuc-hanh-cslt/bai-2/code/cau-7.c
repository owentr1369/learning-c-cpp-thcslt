#include <stdio.h>

// Câu 7: Viết chương trình tính tiền cước TAXI. Biết rằng:
// - KM đầu tiên là 5000đ.
// - 200m tiếp theo là 1000đ.
// - Nếu lớn hơn 30km thì mỗi km thêm sẽ là 3000đ.
// - Hãy nhập số km sau đó in ra số tiền phải trả.
//
// Quy ước: km đầu tiên tính trọn 5000đ (kể cả đi chưa đủ 1km); từ km thứ 2 đến
// km thứ 30 tính 1000đ mỗi 200m (tức 5000đ/km); từ km thứ 31 trở đi tính
// 3000đ/km.

// Test cases:
// Input: 0.5 => Output: So tien phai tra: 5000 dong
// Input: 1 => Output: So tien phai tra: 5000 dong
// Input: 1.4 => Output: So tien phai tra: 7000 dong
// Input: 2 => Output: So tien phai tra: 10000 dong
// Input: 10 => Output: So tien phai tra: 50000 dong
// Input: 30 => Output: So tien phai tra: 150000 dong
// Input: 31 => Output: So tien phai tra: 153000 dong
// Input: 40 => Output: So tien phai tra: 180000 dong
// Input: 0 => Output: Vui long nhap so km lon hon 0

int main() {
  // TODO
  return 0;
}
