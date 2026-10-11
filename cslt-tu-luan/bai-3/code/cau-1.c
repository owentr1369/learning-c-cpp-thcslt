#include <stdio.h>

// Câu 1: Viết chương trình nhập hai số nguyên a và b, tính toán và hiển thị ra
// màn hình giá trị của các biểu thức: (a+b), (a-b), (a*b), (a/b), (a%b), (a++),
// (b--), (a==b), (a!=b), (a>b), (a<b), (a>=b) và (a<=b).

// Cách hiểu: tính lần lượt theo thứ tự đề bài, mỗi biểu thức một printf.
// a++ / b-- in ra giá trị CŨ rồi mới tăng/giảm, nên các phép so sánh phía sau
// dùng a đã tăng 1 và b đã giảm 1. Khi b = 0 thì bỏ qua a/b và a%b.

// Test cases (Input: a b):
// Input: 7 2   => a+b=9, a-b=5, a*b=14, a/b=3, a%b=1, a++=7, b--=2,
//                 (a=8, b=1) a==b=0, a!=b=1, a>b=1, a<b=0, a>=b=1, a<=b=0
// Input: 10 20 => a+b=30, a-b=-10, a*b=200, a/b=0, a%b=10, a++=10, b--=20,
//                 (a=11, b=19) a==b=0, a!=b=1, a>b=0, a<b=1, a>=b=0, a<=b=1
// Input: 5 5   => a+b=10, a-b=0, a*b=25, a/b=1, a%b=0, a++=5, b--=5,
//                 (a=6, b=4) a==b=0, a!=b=1, a>b=1, a<b=0, a>=b=1, a<=b=0
// Input: -7 2  => a+b=-5, a-b=-9, a*b=-14, a/b=-3, a%b=-1, a++=-7, b--=2,
//                 (a=-6, b=1) a==b=0, a!=b=1, a>b=0, a<b=1, a>=b=0, a<=b=1
// Input: 10 0  => a+b=10, a-b=10, a*b=0, Khong chia duoc cho 0, a++=10, b--=0,
//                 (a=11, b=-1) a==b=0, a!=b=1, a>b=1, a<b=0, a>=b=1, a<=b=0

int main() { return 0; }
