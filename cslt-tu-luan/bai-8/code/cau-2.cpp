#include <stdio.h>
#include <string.h>

// Câu 2: Viết chương trình nhập một chuỗi, tách chuỗi thành các từ và in ra
// màn hình.

// Cách hiểu: các từ cách nhau bởi một hoặc nhiều dấu cách, có thể có dấu cách
// ở hai đầu. In mỗi từ trên một dòng.

const int max = 1000;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin);
  s[strlen(s) - 1] = '\0';
}

// In mỗi từ trên một dòng, trả về số từ đã in.
int tachTu(char s[]) {
  int soTu = 0;
  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    if (s[i] != ' ') {
      printf("%c", s[i]);
      // Ký tự sau là dấu cách hoặc hết chuỗi thì từ này đã kết thúc
      if (s[i + 1] == ' ' || s[i + 1] == '\0') {
        printf("\n");
        soTu++;
      }
    }
  }
  return soTu;
}

int main() {
  char s[max];
  printf("Nhap chuoi: ");
  nhapChuoi(s);

  printf("\nCac tu trong chuoi:\n");
  if (tachTu(s) == 0) {
    printf("Chuoi khong co tu nao\n");
  }

  return 0;
}
