#include <stdio.h>
#include <string.h> // strlen

// Câu 4: Bài thực hành dùng các hàm thư viện trong string.h
// a. Nhập vào 2 chuỗi ký tự s1 và s2.
// b. Xuất 2 chuỗi ký tự ra màn hình.
// c. Xuất độ dài của 2 chuỗi ký tự trên.
// d. Sao chép chuỗi ký tự s1 vào chuỗi s3.
// e. Nối chuỗi s2 vào chuỗi s1.
// f. So sánh hai chuỗi ký tự.
// g. Kiểm tra chuỗi s2 trong một chuỗi ký tự khác.

const int max = 100;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin);
  s[strlen(s) - 1] = '\0';
}

// a. Nhập vào 2 chuỗi ký tự s1 và s2
void nhapHaiChuoi(char s1[], char s2[]) {
  printf("Nhap chuoi s1: ");
  nhapChuoi(s1);
  printf("Nhap chuoi s2: ");
  nhapChuoi(s2);
  printf("\n");
}

// b. Xuất 2 chuỗi ký tự ra màn hình
void xuatHaiChuoi(char s1[], char s2[]) {
  printf("Chuoi s1: %s\n", s1);
  printf("Chuoi s2: %s\n", s2);
  printf("\n");
}

int main() {
  char s1[max], s2[max];
  nhapHaiChuoi(s1, s2);
  xuatHaiChuoi(s1, s2);
  return 0;
}
