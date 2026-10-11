#include <stdio.h>

// Câu 5: Viết chương trình cho một dòng chữ chạy dọc màn hình, đến đáy thì lại
// xuất hiện trở lại ở phía đỉnh màn hình và tiếp tục như vậy cho đến khi bấm
// phím bất kỳ thì kết thúc.

// Cách hiểu: màn hình cao 20 dòng. Mỗi bước xóa màn hình, in dòng chữ ở dòng
// thứ i, chờ một chút rồi tăng i. Khi i đến dòng cuối thì quay lại dòng 0.
// Lặp đến khi người dùng bấm phím.
// Cần các hàm của Windows (chạy trên Dev-C++):
// - system("cls") trong <stdlib.h>: xóa màn hình
// - Sleep(ms) trong <windows.h>: dừng ms mili giây
// - kbhit() trong <conio.h>: trả về khác 0 nếu có phím vừa được bấm

// Test case (chạy tay):
// Chạy chương trình => dòng chữ đi xuống từng dòng, chạm đáy thì quay lại đỉnh
// Bấm phím bất kỳ  => chương trình kết thúc

int main() {

  return 0;
}
