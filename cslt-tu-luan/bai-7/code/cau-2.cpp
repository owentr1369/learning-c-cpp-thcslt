#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Câu 2: Cho ma trận số nguyên dương có kích thước n (dòng) x m (cột), với n và
// m có giá trị trong khoảng [1,100]. Thực hiện các thao tác sau:
// a. Viết hàm nhập các giá trị ngẫu nhiên từ 0->100 cho các phần tử của ma
//    trận.
// b. Viết hàm xuất các giá trị của ma trận
// c. Viết hàm xuất ma trận theo hình thức sau: nếu là số chẵn thì xuất ra giá
//    trị, nếu là số lẻ thì xuất ký tự 'x'.
// d. Viết hàm tính tổng các phần tử trên cột thứ k (1≤ k ≤ m) của ma trận.
// e. Viết hàm tính tổng các phần tử trên dòng thứ k (1≤ k ≤ n) của ma trận
// f. Viết hàm tìm số X có xuất hiện trong ma trận không?: nếu có thì trả về 1,
//    đồng thời trả về vị trí của số X ở dòng nào, cột nào thông qua tham biến;
//    nếu không thì trả về 0.
// g. Viết hàm tính trung bình cộng của các phần tử của ma trận.
// h. Giả sử ma trận là vuông (n=m), viết hàm tính và trả về tổng đường chéo
//    chính và tổng đường chéo phụ thông qua tham biến.
// i. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm dưới đường chéo chính.
// j. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm trên đường chéo phụ.

// Cách hiểu:
// - Dùng menu như bài tập 7.2, 7.3 trong slide. Các lựa chọn dùng CHUNG một ma
//   trận, phải chọn 1 (tạo ma trận) trước.
// - n, m nhập từ bàn phím, nhập lại nếu ngoài [1, 100].
// - Dòng, cột đếm từ 1 giống đề (1 ≤ k ≤ m), kể cả vị trí trả về ở câu f.
// - Câu f: trả về vị trí xuất hiện đầu tiên (duyệt từng dòng từ trên xuống).
// - Câu h, i, j: nếu n != m thì báo "Ma tran khong vuong".
// - Câu i, j: theo hình trong đề, KHÔNG lấy phần tử nằm trên đường chéo.
//   Dưới chéo chính: cột < dòng. Trên chéo phụ: dòng + cột < n - 1 (đếm từ 0).
//   In giữ nguyên hình tam giác, chỗ không thuộc tam giác để trống.

const int max = 100;

void nhapKichThuoc(int &n, int &m) {
  do {
    printf("Nhap so dong n (1 - %d): ", max);
    scanf("%d", &n);
  } while (n < 1 || n > max);
  do {
    printf("Nhap so cot m (1 - %d): ", max);
    scanf("%d", &m);
  } while (m < 1 || m > max);
}

// a. Viết hàm nhập các giá trị ngẫu nhiên từ 0->100 cho các phần tử của ma
//    trận.
void nhapMaTranNgauNhien(int a[][max], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      a[i][j] = rand() % 101;
    }
  }
}

// b. Viết hàm xuất các giá trị của ma trận
void xuatMaTran(int a[][max], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}

// c. Viết hàm xuất ma trận theo hình thức sau: nếu là số chẵn thì xuất ra giá
//    trị, nếu là số lẻ thì xuất ký tự 'x'.
void xuatMaTranChanLe(int a[][max], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] % 2 == 0) {
        printf("%4d", a[i][j]);
      } else {
        printf("%4c", 'x');
      }
    }
    printf("\n");
  }
}

// d. Viết hàm tính tổng các phần tử trên cột thứ k (1≤ k ≤ m) của ma trận.
int tongCot(int a[][max], int n, int k) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    // Cột thứ k (đếm từ 1) nằm ở chỉ số k - 1
    tong += a[i][k - 1];
  }
  return tong;
}

// e. Viết hàm tính tổng các phần tử trên dòng thứ k (1≤ k ≤ n) của ma trận
int tongDong(int a[][max], int m, int k) {
  int tong = 0;
  for (int j = 0; j < m; j++) {
    tong += a[k - 1][j];
  }
  return tong;
}

// f. Viết hàm tìm số X có xuất hiện trong ma trận không?: nếu có thì trả về 1,
//    đồng thời trả về vị trí của số X ở dòng nào, cột nào thông qua tham biến;
//    nếu không thì trả về 0.
int timX(int a[][max], int n, int m, int x, int &dong, int &cot) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == x) {
        dong = i + 1;
        cot = j + 1;
        return 1;
      }
    }
  }
  return 0;
}

int tongMaTran(int a[][max], int n, int m) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      tong += a[i][j];
    }
  }
  return tong;
}

// g. Viết hàm tính trung bình cộng của các phần tử của ma trận.
float tbcMaTran(int a[][max], int n, int m) {
  return (float)tongMaTran(a, n, m) / (n * m);
}

// h. Giả sử ma trận là vuông (n=m), viết hàm tính và trả về tổng đường chéo
//    chính và tổng đường chéo phụ thông qua tham biến.
void tongDuongCheo(int a[][max], int n, int &tongChinh, int &tongPhu) {
  tongChinh = 0;
  tongPhu = 0;
  for (int i = 0; i < n; i++) {
    // Chéo chính: cột = dòng. Chéo phụ: dòng + cột = n - 1
    tongChinh += a[i][i];
    tongPhu += a[i][n - 1 - i];
  }
}

// i. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm dưới đường chéo chính.
void inTamGiacDuoiCheoChinh(int a[][max], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j < i) {
        printf("%4d", a[i][j]);
      } else {
        printf("    ");
      }
    }
    printf("\n");
  }
}

// j. Giả sử ma trận là vuông (n=m), viết hàm in ra các phần tử thuộc hình tam
//    giác nằm trên đường chéo phụ.
void inTamGiacTrenCheoPhu(int a[][max], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j < n - 1) {
        printf("%4d", a[i][j]);
      } else {
        printf("    ");
      }
    }
    printf("\n");
  }
}

void hienThiMenu() {
  printf("\n===== MENU =====\n");
  printf("1. Nhap n, m va tao ma tran ngau nhien\n");
  printf("2. Xuat ma tran\n");
  printf("3. Xuat ma tran (so le thay bang x)\n");
  printf("4. Tong cot k\n");
  printf("5. Tong dong k\n");
  printf("6. Tim X\n");
  printf("7. Trung binh cong ma tran\n");
  printf("8. Tong duong cheo chinh va cheo phu\n");
  printf("9. In tam giac duoi duong cheo chinh\n");
  printf("10. In tam giac tren duong cheo phu\n");
  printf("0. Thoat\n");
  printf("Nhap lua chon: ");
}

void chonMenu() {
  int a[max][max];
  int n = 0, m = 0;
  int chon;
  do {
    hienThiMenu();
    scanf("%d", &chon);
    if (chon >= 2 && chon <= 10 && n == 0) {
      printf("Chua co ma tran, hay chon 1 truoc\n");
      continue;
    }
    switch (chon) {
    case 1:
      nhapKichThuoc(n, m);
      nhapMaTranNgauNhien(a, n, m);
      printf("Ma tran %d x %d:\n", n, m);
      xuatMaTran(a, n, m);
      break;
    case 2:
      xuatMaTran(a, n, m);
      break;
    case 3:
      xuatMaTranChanLe(a, n, m);
      break;
    case 4: {
      int k;
      printf("Nhap cot k (1 - %d): ", m);
      scanf("%d", &k);
      if (k < 1 || k > m) {
        printf("Cot khong hop le\n");
      } else {
        printf("Tong cot %d: %d\n", k, tongCot(a, n, k));
      }
      break;
    }
    case 5: {
      int k;
      printf("Nhap dong k (1 - %d): ", n);
      scanf("%d", &k);
      if (k < 1 || k > n) {
        printf("Dong khong hop le\n");
      } else {
        printf("Tong dong %d: %d\n", k, tongDong(a, m, k));
      }
      break;
    }
    case 6: {
      int x, dong, cot;
      printf("Nhap X can tim: ");
      scanf("%d", &x);
      if (timX(a, n, m, x, dong, cot)) {
        printf("Tim thay %d o dong %d, cot %d\n", x, dong, cot);
      } else {
        printf("Khong tim thay %d\n", x);
      }
      break;
    }
    case 7:
      printf("Trung binh cong: %.2f\n", tbcMaTran(a, n, m));
      break;
    case 8: {
      if (n != m) {
        printf("Ma tran khong vuong\n");
        break;
      }
      int tongChinh, tongPhu;
      tongDuongCheo(a, n, tongChinh, tongPhu);
      printf("Tong cheo chinh: %d\n", tongChinh);
      printf("Tong cheo phu: %d\n", tongPhu);
      break;
    }
    case 9:
      if (n != m) {
        printf("Ma tran khong vuong\n");
      } else {
        inTamGiacDuoiCheoChinh(a, n);
      }
      break;
    case 10:
      if (n != m) {
        printf("Ma tran khong vuong\n");
      } else {
        inTamGiacTrenCheoPhu(a, n);
      }
      break;
    case 0:
      printf("Thoat chuong trinh\n");
      break;
    default:
      printf("Lua chon khong hop le\n");
      break;
    }
  } while (chon != 0);
}

int main() {
  srand(time(NULL));
  chonMenu();
  return 0;
}
