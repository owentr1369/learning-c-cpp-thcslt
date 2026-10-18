#include <stdio.h>
#include <string.h>

// Câu 3: Viết chương trình nhập một chuỗi và kiểm tra xem chuỗi đó có đối xứng
// không?

// Cách hiểu: đối xứng là đọc xuôi và đọc ngược giống nhau. So sánh nguyên văn,
// phân biệt hoa thường, dấu cách cũng tính là ký tự.

const int max = 1000;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin);
  s[strlen(s) - 1] = '\0';
}

// Trả về 1 nếu chuỗi đối xứng, ngược lại trả về 0.
int kiemTraDoiXung(char s[]) {
  int n = strlen(s);
  // So ký tự thứ i từ đầu với ký tự thứ i từ cuối, chỉ cần đi đến giữa chuỗi
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char s[max];
  printf("Nhap chuoi: ");
  nhapChuoi(s);

  if (kiemTraDoiXung(s)) {
    printf("\nChuoi doi xung\n");
  } else {
    printf("\nChuoi khong doi xung\n");
  }

  return 0;
}
