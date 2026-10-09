#include <stdio.h>

// Câu 2: Ma trận vuông cấp n là mảng 2 chiều có số dòng = số cột = n.
// a. Sinh ngẫu nhiên 1 ma trận vuông cấp n chứa số nguyên (n nhập từ bàn phím).
// b. Xuất ma trận.
// c. Liệt kê các phần tử trên đường chéo chính.
// d. Liệt kê các phần tử trên đường chéo phụ.
// e. Tính tổng các phần tử nằm trên dòng thứ k (k do người dùng nhập).
// f. Tính tổng các phần tử trên mỗi dòng.
// g. Xuất ra các dòng có tổng lớn nhất.

// Test cases:
// a. Ma tran sinh ngau nhien nen moi lan chay khac nhau (dung srand(time(NULL))
//    va rand(), gia tri trong doan [0, 99]). De kiem tra cac ham c -> g, tam
//    thoi gan cung cac ma tran mau duoi day (dong tinh tu 0):
// Ma tran n = 3:
//   1 2 3
//   4 5 6
//   7 8 9
//   => c. 1 5 9
//      d. 3 5 7
//      e. k = 1 => Tong dong 1: 15
//      f. Dong 0: 6, Dong 1: 15, Dong 2: 24
//      g. Dong co tong lon nhat: 2
// Ma tran n = 4:
//   5 0 2 8
//   1 7 3 4
//   6 6 9 0
//   2 1 4 3
//   => c. 5 7 9 3
//      d. 8 3 6 2
//      e. k = 0 => Tong dong 0: 15
//      f. Dong 0: 15, Dong 1: 15, Dong 2: 21, Dong 3: 10
//      g. Dong co tong lon nhat: 2
// Ma tran n = 1:
//   4
//   => c. 4
//      d. 4
//      e. k = 0 => Tong dong 0: 4
//      f. Dong 0: 4
//      g. Dong co tong lon nhat: 0
// Ma tran n = 2 (nhieu dong cung tong lon nhat):
//   1 2
//   2 1
//   => c. 1 1
//      d. 2 2
//      e. k = 1 => Tong dong 1: 3
//      f. Dong 0: 3, Dong 1: 3
//      g. Dong co tong lon nhat: 0 1
// Input: k nam ngoai [0, n - 1] => Output: Dong khong hop le
// Input: n = 0 => Output: Vui long nhap n > 0

int main() {
  // TODO
  return 0;
}
