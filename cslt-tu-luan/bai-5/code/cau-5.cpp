#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Câu 5: Viết chương trình cho một dòng chữ chạy dọc màn hình, đến đáy thì lại
// xuất hiện trở lại ở phía đỉnh màn hình và tiếp tục như vậy cho đến khi bấm
// phím bất kỳ thì kết thúc.

// Cách hiểu: màn hình cao 20 dòng. Mỗi bước xóa màn hình, in dòng chữ ở dòng
// thứ i, chờ một chút rồi tăng i. Khi i đến dòng cuối thì quay lại dòng 0.
// Lặp đến khi người dùng bấm phím.
// Chỉ chạy được trên Windows (Dev-C++) vì dùng các hàm:
// - system("cls") trong <stdlib.h>: xóa màn hình
// - Sleep(ms) trong <windows.h>: dừng ms mili giây
// - kbhit() trong <conio.h>: trả về khác 0 nếu có phím vừa được bấm
// - getch() trong <conio.h>: đọc phím vừa bấm

const int soDong = 20;

void inDongChu(int dong) {
  // In dong dòng trống để đẩy dòng chữ xuống vị trí thứ dong
  for (int i = 0; i < dong; i++) {
    printf("\n");
  }
  printf("Xin chao HUTECH!\n");
}

int main() {
  int dong = 0;

  // kbhit() không dừng chương trình để chờ phím, chỉ kiểm tra đã bấm chưa
  while (!kbhit()) {
    system("cls");
    inDongChu(dong);
    Sleep(200);
    dong++;
    if (dong == soDong) {
      dong = 0;
    }
  }
  getch();

  return 0;
}
