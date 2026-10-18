#include <stdio.h>

// Câu 4: Viết chương trình tính tiền điện với công thức như sau:
// - Tiền thuê bao công tơ điện: 50000 đồng/tháng
// - Định mức sử dụng điện cho mỗi hộ: 50KW
// - Giá trong định mức: 1200 đồng/KW
// - Phần vượt định mức <=50KW thì giá 1500 đồng/KW
// - 50KW < Phần vượt định mức <=100KW thì giá 1800 đồng/KW
// - Phần vượt định mức >100 thì giá 2000 đồng/KW
// - Chỉ số mới và cũ được nhập từ bàn phím
// Yêu cầu in ra màn hình chỉ số cũ, chỉ số mới, tiền trả trong định mức, tiền
// trả vượt định mức và tổng tiền phải trả.

// Cách hiểu: tính lũy tiến theo bậc giống hóa đơn điện thật. 50KW vượt đầu tiên
// giá 1500, 50KW vượt tiếp theo giá 1800, phần vượt còn lại giá 2000.
// Tổng tiền = thuê bao + tiền trong định mức + tiền vượt định mức.

int main() {
  int chiSoCu, chiSoMoi;
  printf("Nhap chi so cu: ");
  scanf("%d", &chiSoCu);
  printf("Nhap chi so moi: ");
  scanf("%d", &chiSoMoi);

  if (chiSoMoi < chiSoCu) {
    printf("\nChi so moi phai lon hon hoac bang chi so cu\n");
  } else {
    int soKW = chiSoMoi - chiSoCu;
    int tienTrongDinhMuc, tienVuotDinhMuc;

    if (soKW <= 50) {
      tienTrongDinhMuc = soKW * 1200;
      tienVuotDinhMuc = 0;
    } else {
      tienTrongDinhMuc = 50 * 1200;
      int phanVuot = soKW - 50;
      if (phanVuot <= 50) {
        tienVuotDinhMuc = phanVuot * 1500;
      } else if (phanVuot <= 100) {
        // 50KW đầu giá 1500, phần còn lại giá 1800
        tienVuotDinhMuc = 50 * 1500 + (phanVuot - 50) * 1800;
      } else {
        // 50KW đầu giá 1500, 50KW tiếp giá 1800, phần còn lại giá 2000
        tienVuotDinhMuc = 50 * 1500 + 50 * 1800 + (phanVuot - 100) * 2000;
      }
    }

    int tongTien = 50000 + tienTrongDinhMuc + tienVuotDinhMuc;
    printf("\nChi so cu: %d", chiSoCu);
    printf("\nChi so moi: %d", chiSoMoi);
    printf("\nSo KW su dung: %d", soKW);
    printf("\nTien trong dinh muc: %d dong", tienTrongDinhMuc);
    printf("\nTien vuot dinh muc: %d dong", tienVuotDinhMuc);
    printf("\nTong tien phai tra (gom 50000 dong thue bao): %d dong\n",
           tongTien);
  }

  return 0;
}
