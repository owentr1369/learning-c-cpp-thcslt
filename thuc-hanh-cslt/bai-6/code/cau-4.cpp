#include <stdio.h>
#include <string.h> // strlen, strcpy, strcat, strcmp, strstr

// Câu 4: Bài thực hành dùng các hàm thư viện trong string.h
// a. Nhập vào 2 chuỗi ký tự s1 và s2.
// b. Xuất 2 chuỗi ký tự ra màn hình.
// c. Xuất độ dài của 2 chuỗi ký tự trên.
// d. Sao chép chuỗi ký tự s1 vào chuỗi s3.
// e. Nối chuỗi s2 vào chuỗi s1.
// f. So sánh hai chuỗi ký tự.
// g. Kiểm tra chuỗi s2 trong một chuỗi ký tự khác.
// f so sánh s1 ban đầu (bản sao s3 ở câu d) với s2, vì câu e đã nối s2 vào s1.
// g nhập thêm chuỗi s4 rồi kiểm tra s2 có nằm trong s4 không.

const int max = 100;

// Nhập 1 chuỗi (có thể chứa dấu cách), bỏ ký tự xuống dòng ở cuối
void nhapChuoi(char s[]) {
  fgets(s, max, stdin); // Đọc 1 dòng từ bàn phím (stdin) vào s, tối đa max - 1 ký tự, giữ lại cả '\n'
  s[strlen(s) - 1] = '\0'; // strlen trả về độ dài chuỗi; thay ký tự cuối ('\n') bằng '\0' để kết thúc chuỗi
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

// c. Xuất độ dài của 2 chuỗi ký tự trên
void xuatDoDaiHaiChuoi(char s1[], char s2[]) {
  printf("Do dai chuoi s1: %d\n", (int)strlen(s1)); // strlen đếm số ký tự trước '\0'
  printf("Do dai chuoi s2: %d\n", (int)strlen(s2)); // Ép (int) vì strlen trả về kiểu size_t
  printf("\n");
}

// d. Sao chép chuỗi ký tự s1 vào chuỗi s3
void saoChepChuoi(char s3[], char s1[]) {
  strcpy(s3, s1); // Chép toàn bộ s1 (kể cả '\0') vào s3
  printf("Chuoi s3 sau khi sao chep s1: %s\n", s3);
  printf("\n");
}

// e. Nối chuỗi s2 vào chuỗi s1
void noiChuoi(char s1[], char s2[]) {
  strcat(s1, s2); // Nối s2 vào cuối s1, kết quả lưu trong s1
  printf("Chuoi s1 sau khi noi s2: %s\n", s1);
  printf("\n");
}

// f. So sánh hai chuỗi ký tự
void soSanhChuoi(char s1[], char s2[]) {
  int kq = strcmp(s1, s2); // So sánh theo mã ASCII từng ký tự: 0 nếu bằng, < 0 nếu s1 nhỏ hơn, > 0 nếu s1 lớn hơn
  if (kq == 0) {
    printf("Chuoi \"%s\" bang chuoi \"%s\"\n", s1, s2);
  } else if (kq < 0) {
    printf("Chuoi \"%s\" nho hon chuoi \"%s\"\n", s1, s2);
  } else {
    printf("Chuoi \"%s\" lon hon chuoi \"%s\"\n", s1, s2);
  }
  printf("\n");
}

// g. Kiểm tra chuỗi s2 trong một chuỗi ký tự khác
void kiemTraChuoiCon(char s2[]) {
  char s4[max];
  printf("Nhap chuoi can kiem tra s4: ");
  nhapChuoi(s4);
  if (strstr(s4, s2) != NULL) { // strstr tìm s2 trong s4, trả về NULL nếu không tìm thấy
    printf("Chuoi \"%s\" co nam trong chuoi \"%s\"\n", s2, s4);
  } else {
    printf("Chuoi \"%s\" khong nam trong chuoi \"%s\"\n", s2, s4);
  }
}

int main() {
  char s1[max], s2[max], s3[max];
  nhapHaiChuoi(s1, s2);
  xuatHaiChuoi(s1, s2);
  xuatDoDaiHaiChuoi(s1, s2);
  saoChepChuoi(s3, s1);
  noiChuoi(s1, s2);
  soSanhChuoi(s3, s2);
  kiemTraChuoiCon(s2);
  return 0;
}
