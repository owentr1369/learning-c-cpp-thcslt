#include <stdio.h>
#include <string.h>

// Câu 1: Viết chương trình nhập chuỗi và đếm xem trong chuỗi đó có bao nhiêu
// chữ "th".

// Cách hiểu: đếm số lần cặp ký tự 't' đứng liền trước 'h', phân biệt hoa
// thường ("Th", "TH" không tính).

const int max = 1000;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin);
  s[strlen(s) - 1] = '\0';
}

int demTh(char s[]) {
  int dem = 0;
  int n = strlen(s);
  // Dừng ở n - 1 vì phải xét thêm ký tự đứng sau s[i]
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 't' && s[i + 1] == 'h') {
      dem++;
    }
  }
  return dem;
}

int main() {
  char s[max];
  printf("Nhap chuoi: ");
  nhapChuoi(s);

  printf("\nCo %d chu \"th\"\n", demTh(s));

  return 0;
}
