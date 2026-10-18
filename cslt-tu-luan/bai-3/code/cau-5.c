#include <stdio.h>

// Câu 5: Viết chương trình nhập vào điểm ba môn Toán, Lý, Hoá của một học
// sinh. In ra điểm trung bình của học sinh đó với hai số lẻ thập phân.

int main() {
  float toan, ly, hoa;
  printf("Nhap diem Toan: ");
  scanf("%f", &toan);
  printf("Nhap diem Ly: ");
  scanf("%f", &ly);
  printf("Nhap diem Hoa: ");
  scanf("%f", &hoa);

  float diemTrungBinh = (toan + ly + hoa) / 3;
  printf("\nDiem trung binh: %.2f\n", diemTrungBinh);

  return 0;
}
