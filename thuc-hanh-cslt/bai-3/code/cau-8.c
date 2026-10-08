#include <stdio.h>

// Câu 8: Nhập vào một số nguyên n thuộc đoạn [0; 9].
// (Nếu nhập ngoài đoạn [0; 9] thì yêu cầu nhập lại, nhập đúng thì in ra n.)

// Test cases (mỗi dòng input là một lần nhập):
// Input: 5 => Output: So vua nhap: 5
// Input: 0 => Output: So vua nhap: 0
// Input: 9 => Output: So vua nhap: 9
// Input: -1, 3 => Output: (yeu cau nhap lai) So vua nhap: 3
// Input: 10, 15, 9 => Output: (yeu cau nhap lai 2 lan) So vua nhap: 9

int main() {
  int n;
  printf("Nhap so nguyen n (0-9): ");
  do {
    scanf("%d", &n);
    if (n < 0 || n > 9) {
      printf("Khong hop le. Nhap lai: ");
    }
  } while (n < 0 || n > 9);
  printf("\nSo vua nhap: %d\n", n);
  return 0;
}
