#include <stdio.h>

// Câu 2: Viết hàm liệt kê n số đầu tiên thuộc dãy Fibonacci
// Dãy Fibonacci có đặc trưng sau:
// Fibo(1) = Fibo(2) = 1; Fibo(n) = Fibo(n-1) + Fibo(n-2).
// Dãy Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,...

void nhapN(int &n) {
  do {
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 0) {
      printf("Vui long nhap n > 0\n");
    }
  } while (n <= 0);
}

void lietKeFibonacci(int n) {
  int truoc = 0;
  int sau = 1;
  int dem = 0;
  while (dem < n) {
    printf("%d ", sau);
    // Số kế tiếp = tổng 2 số gần nhất, rồi dịch truoc, sau lên 1 bước
    int tiep = truoc + sau;
    truoc = sau;
    sau = tiep;
    dem++;
  }
  printf("\n");
}

int main() {
  int n;
  nhapN(n);
  printf("\n%d so Fibonacci dau tien: ", n);
  lietKeFibonacci(n);
  return 0;
}
