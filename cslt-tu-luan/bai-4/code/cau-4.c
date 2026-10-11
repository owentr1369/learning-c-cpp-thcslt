#include <stdio.h>

// Câu 4: Viết chương trình tính tiền điện với công thức như sau:
// - Tiền thuê bao công tơ điện: 50000 đồng/tháng
// - Định mức sử dụng điện cho mỗi hộ: 50KW
// - Giá trong định mức: 1200 đồng/KW
// - Phần vượt định mức <=50KW thì giá 1500 đồng/KW
// - 50KW < Phần vượt định mức <=100KW thì giá 1800 đồng/KW
// - Phần vượt định mức >100 thì giá 2000 đồng/KW
// - Chỉ số mới và cũ được nhập từ bàn phím
// Yêu cầu in ra màn hình chỉ số cũ, chỉ số mới, tiền trả trong định mức, tiền
// trả vượt định mức và tổng tiền phải trả.

// Cách hiểu: tính lũy tiến theo bậc giống hóa đơn điện thật. 50KW vượt đầu tiên
// giá 1500, 50KW vượt tiếp theo giá 1800, phần vượt còn lại giá 2000.
// Tổng tiền = thuê bao + tiền trong định mức + tiền vượt định mức.

// Test cases (Input: chiSoCu chiSoMoi; Output: trong dinh muc, vuot, tong):
// Input: 100 130  => Output: 36000, 0, 86000
// Input: 0 50     => Output: 60000, 0, 110000
// Input: 0 80     => Output: 60000, 45000, 155000
// Input: 0 150    => Output: 60000, 165000, 275000
// Input: 0 200    => Output: 60000, 265000, 375000
// Input: 1000 1175 => Output: 60000, 215000, 325000
// Input: 100 50   => Output: Chi so moi phai lon hon hoac bang chi so cu

int main() {

  return 0;
}
