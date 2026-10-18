#include <stdio.h>
#include <string.h>

// Câu 4: Viết chương trình nhập một chuỗi và kiểm tra xem trong chuỗi đó có bao
// nhiêu loại ký tự, mỗi loại ký tự xuất hiện bao nhiêu lần.

// Cách hiểu: mỗi ký tự khác nhau là một "loại" (kể cả dấu cách), phân biệt hoa
// thường. In theo thứ tự mã ASCII tăng dần.

const int max = 1000;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin);
  s[strlen(s) - 1] = '\0';
}

// dem[c] là số lần ký tự có mã ASCII c xuất hiện trong chuỗi
void demKyTu(char s[], int dem[]) {
  for (int c = 0; c < 256; c++) {
    dem[c] = 0;
  }
  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    // Ép sang unsigned char để chữ có dấu không tạo ra chỉ số âm
    dem[(unsigned char)s[i]]++;
  }
}

// Mỗi ô dem[c] > 0 là một ký tự có xuất hiện trong chuỗi, tức là một loại.
// Ví dụ "hello": dem['e'] = 1, dem['h'] = 1, dem['l'] = 2, dem['o'] = 1,
// các ô còn lại = 0 => có 4 ô > 0 => 4 loại.
int demSoLoai(int dem[]) {
  int soLoai = 0;
  for (int c = 0; c < 256; c++) {
    // Chỉ đếm ô, không cộng dem[c], nên 'l' xuất hiện 2 lần vẫn tính 1 loại
    if (dem[c] > 0) {
      soLoai++;
    }
  }
  return soLoai;
}

void xuatThongKe(int dem[]) {
  for (int c = 0; c < 256; c++) {
    if (dem[c] > 0) {
      printf("'%c': %d lan\n", c, dem[c]);
    }
  }
}

int main() {
  char s[max];
  int dem[256];
  printf("Nhap chuoi: ");
  nhapChuoi(s);

  demKyTu(s, dem);
  printf("\nCo %d loai ky tu:\n", demSoLoai(dem));
  xuatThongKe(dem);

  return 0;
}
