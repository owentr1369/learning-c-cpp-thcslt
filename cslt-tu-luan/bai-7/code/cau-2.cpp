#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Câu 2: Cho ma trận số nguyên dương có kích thước n (dòng) x m (cột), với n và
// m có giá trị trong khoảng [1,100]. Thực hiện các thao tác sau:
// a. Viết hàm nhập các giá trị ngẫu nhiên từ 0->100 cho các phần tử của ma
//    trận.
// b. Viết hàm xuất các giá trị của ma trận
// c. Viết hàm xuất ma trận theo hình thức sau: nếu là số chẵn thì xuất ra giá
//    trị, nếu là số lẻ thì xuất ký tự 'x'.
// d. Viết hàm tính tổng các phần tử trên cột thứ k (1≤ k ≤ m) của ma trận.
// e. Viết hàm tính tổng các phần tử trên dòng thứ k (1≤ k ≤ n) của ma trận
// f. Viết hàm tìm số X có xuất hiện trong ma trận không?: nếu có thì trả về 1 –
//    đồng thời trả về vị trí của số X ở dòng nào, cột nào thông qua tham biến;
//    nếu không thì trả về 0.
// g. Viết hàm tính trung bình cộng của các phần tử của ma trận.
// h. Giả sử ma trận là vuông (n=m), viết hàm tính và trả về tổng đường chéo
//    chính và tổng đường chéo phụ thông qua tham biến.
// i. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm dưới đường chéo chính.
// j. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm trên đường chéo phụ.

// Cách hiểu:
// - n, m nhập từ bàn phím, nhập lại nếu ngoài [1, 100].
// - Dòng, cột đếm từ 1 giống đề (1 ≤ k ≤ m), kể cả vị trí trả về ở câu f.
// - Câu f: trả về vị trí xuất hiện đầu tiên (duyệt từng dòng từ trên xuống).
// - Câu h, i, j: nếu n != m thì báo "Ma tran khong vuong".
// - Câu i, j: theo hình trong đề, KHÔNG lấy phần tử nằm trên đường chéo.
//   Dưới chéo chính: cột < dòng. Trên chéo phụ: dòng + cột < n - 1 (đếm từ 0).
//   In giữ nguyên hình tam giác, chỗ không thuộc tam giác để trống.

// Test cases: ma trận ngẫu nhiên nên không có output cố định. Để kiểm tra, tạm
// gán ma trận mẫu bên dưới thay cho hàm nhập ngẫu nhiên.
//
// Ma trận 3 x 4:
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// c. => x 2 x 4 / x 6 x 8 / x 10 x 12
// d. k = 2 => 2 + 6 + 10 = 18;   k = 5 => Cot khong hop le
// e. k = 2 => 5 + 6 + 7 + 8 = 26
// f. X = 7  => tra ve 1, dong 2, cot 3
//    X = 50 => tra ve 0
// g. => 78 / 12 = 6.50
// h. => Ma tran khong vuong
//
// Ma trận vuông 4 x 4:
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16
// h. => tong cheo chinh = 1 + 6 + 11 + 16 = 34, tong cheo phu = 4 + 7 + 10 + 13 = 34
// i. =>
//    (dong 1 trong)
//     5
//     9 10
//    13 14 15
// j. =>
//     1  2  3
//     5  6
//     9
//    (dong 4 trong)

int main() {

  return 0;
}
