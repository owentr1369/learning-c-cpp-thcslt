#include <stdio.h>

// Câu 4: Làm các câu 1, và câu 2 -a, b, d, e, f đối với mảng một chiều các số
// thực.
// Phạm vi: các hàm của câu 1 (trừ hàm liên quan số nguyên tố), câu 2a, 2b, và
// các ý của câu 3 áp dụng được cho số thực: b (đếm số dương), d (trung bình
// cộng), e (trung bình cộng số dương).

// Test cases (xuất 2 chữ số thập phân, vị trí tính từ 0;
// a = 1.5 -2.25 3 0 4.75 nếu không ghi khác):
// Cau 2 - Nhap/Xuat:
//   Input: n = 5, 1.5 -2.25 3 0 4.75 => Output: 1.50 -2.25 3.00 0.00 4.75
//   Input: n = 0, n = 11, ... => Output: yeu cau nhap lai
// Cau 3:
//   b. So luong so duong: 3
//   d. Trung binh cong: 1.40
//   e. Trung binh cong so duong: 3.08
//   Voi a = -1.5 -0.5:
//   b. So luong so duong: 0
//   d. Trung binh cong: -1.00
//   e. Khong co so duong nao
// Cau 1:
//   Sao chep => b = 1.50 -2.25 3.00 0.00 4.75
//   Tim x = 3 => 3.00 nam o vi tri 2
//   Tim x = 2.5 => 2.50 khong co trong mang
//   Gop a voi b = 9.5 -1 => c = 1.50 -2.25 3.00 0.00 4.75 9.50 -1.00, nc = 7
//   Max => 4.75
//   Sap xep tang => -2.25 0.00 1.50 3.00 4.75
//   Sap xep giam => 4.75 3.00 1.50 0.00 -2.25
//   Them 2.5 vao vi tri 1 => 1.50 2.50 -2.25 3.00 0.00 4.75
//   Xoa vi tri 0 => -2.25 3.00 0.00 4.75
//   Sua vi tri 2 thanh 3.5 => 1.50 -2.25 3.50 0.00 4.75
//   Chen x = 2 vao mang tang -2.25 0 1.5 3 4.75
//     => -2.25 0.00 1.50 2.00 3.00 4.75
//   Xoa cac phan tu nho hon 1 => 1.50 3.00 4.75
//   Cap nhat max thanh min => 1.50 -2.25 3.00 0.00 -2.25

int main() {
  // TODO
  return 0;
}
