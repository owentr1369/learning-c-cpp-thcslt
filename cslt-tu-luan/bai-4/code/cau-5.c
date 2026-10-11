#include <stdio.h>

// Câu 5: Viết chương trình nhập 1 số nguyên có ba chữ số. Hãy in ra cách đọc
// của nó.
// Ví dụ: 105 Một trăm lẻ năm, 101 Một trăm lẻ một, 110 Một trăm mười một,
// 131 Một trăm ba mươi mốt, 145 Một trăm bốn mươi lăm

// Lưu ý: đề ghi "110 Một trăm mười một" là gõ nhầm, 110 đọc là "Một trăm mười".
// Quy tắc đọc:
// - Hàng chục = 0, đơn vị khác 0: thêm "le" (105 -> Mot tram le nam)
// - Hàng chục = 1: đọc "muoi" (110 -> Mot tram muoi)
// - Hàng chục >= 2: đọc "<so> muoi" (131 -> Mot tram ba muoi mot)
// - Đơn vị = 5 và hàng chục >= 1: đọc "lam" (145 -> Mot tram bon muoi lam)
// - Đơn vị = 0: không đọc (200 -> Hai tram, 250 -> Hai tram nam muoi)

// Test cases:
// Input: 105 => Output: Mot tram le nam
// Input: 101 => Output: Mot tram le mot
// Input: 110 => Output: Mot tram muoi
// Input: 115 => Output: Mot tram muoi lam
// Input: 131 => Output: Mot tram ba muoi mot
// Input: 145 => Output: Mot tram bon muoi lam
// Input: 200 => Output: Hai tram
// Input: 250 => Output: Hai tram nam muoi
// Input: 999 => Output: Chin tram chin muoi chin
// Input: 99  => Output: Vui long nhap so nguyen co 3 chu so

int main() {

  return 0;
}
