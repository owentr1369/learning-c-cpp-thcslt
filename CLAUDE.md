# CLAUDE.md

Coursework repo for HUTECH CMP3075 (Thực hành Cơ sở Lập trình). The owner is a beginner learning C.

## Layout

```
thuc-hanh-cslt/bai-N/
  de-bai.md          # problem statement for lesson N
  code/cau-K.cpp     # one file per exercise (Câu K)
  code/output/       # compiled binaries (ignored by git)
```

Lesson slides live in `~/Desktop/University/THCSLT/` (PDF). The filenames contain Vietnamese characters in NFD form, so globbing on `bài 5` fails. Find them by the unique hash suffix, e.g. `find ~/Desktop/University/THCSLT -name "*dmtawss3d4862f6bb94a4168b697e211bf057f82.pdf"`, then read with `pdftotext -layout`.

## Language and level

- Files are `.cpp` but the code is C style: `#include <stdio.h>`, `printf`/`scanf`, `int`/`float`, plain arrays.
- The only C++ feature used is reference parameters (`int &n`), as taught in the slides. When renaming `.c` to `.cpp`, use `git mv`.
- Stay at beginner level: no `iostream`, `std::vector`, `new`/`delete`, templates, or float epsilon tricks. If a request can only be done with advanced techniques, say so in one line and keep the simple version.
- Satisfy the problem statement and its test cases; do not add extra hardening (scanf return checks, overflow guards). Mention robustness concerns in one line at most.

## Code conventions

- Names: camelCase Vietnamese without diacritics (`nhapMang`, `xuatMang`, `kiemTraSoNguyenTo`, `demSoDuong`, `tongMang`, `tbcMang`, `timMax`, `hoanVi`).
- Array capacity: `const int max = ...;` (use the limit the statement gives, e.g. 10 for `0 < n <= 10`, otherwise 100).
- Comments: only the requirement label above each function, e.g. `// a. Nhập mảng ...`, plus a one-line contract for helpers that return a flag (`// Trả về 1 nếu ..., ngược lại trả về 0.`). No explanatory comments.
- UI strings: Vietnamese without diacritics (`"Mang vua nhap: "`, `"Khong co so nguyen to nao"`).
- Every input validation of a range uses `do { ... } while (invalid);` and re-prompts.

## Function design

- One function per sub-requirement (a, b, c, ...).
- Parameters: arrays as `int a[]` (no `&`); `int &n` only when the function sets `n` (input, insert, delete); read-only values by value.
- Computation helpers return values instead of printing: counts and sums return `int`/`float`, checks return `1`/`0` (`return dem == 2;`), searches return an index or `-1`.
- Averages reuse the count and sum helpers: `(float)tong(a, n) / dem(a, n)`. Cast before dividing. The caller checks for a zero count first and prints a "Khong co ..." message instead.
- Prime check uses the divisor-count style:
  ```cpp
  int kiemTraSoNguyenTo(int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        dem++;
      }
    }
    return dem == 2;
  }
  ```
- Building a result array uses a write index: `c[nc] = x; nc++;` with `nc = 0` at the start.
- Listing output prints a "none" message when nothing matches (use a `coSo` flag or a known first element).

## Menu programs

When an exercise asks for a menu, or has many independent sub-tasks:

- `void hienThiMenu()` prints the options and ends with `printf("Nhap lua chon: ");`.
- `void chonMenu()` runs `do { hienThiMenu(); scanf(...); switch (...) { ... } } while (chon != 0);`. Every `case` ends with `break`, `case 0` prints `"Thoat chuong trinh"`, `default` prints `"Lua chon khong hop le"`.
- Each option is a self-contained program: it reads its own input (its own array), does the task, and prints the result. Options do not share state, so any option can be chosen first.
- Wrap a `case` body in `{ }` if it declares variables.

If the statement says to continue in the same program (e.g. "Làm tiếp theo trong chương trình của câu 2"), read the input once in `main` and run the sub-tasks in order instead of using a menu.

## Ambiguous statements

If the statement has a typo or an unclear reference, flag it, pick the most sensible interpretation, and record that interpretation in the header comment of the file. Positions/indexes are counted from 0 unless the statement says otherwise.

## Verification

Before saying an exercise is done:

1. Compile in the scratchpad directory, not in the repo: `g++ -Wall -Wextra -Wshadow -o <scratch>/cau-K thuc-hanh-cslt/bai-N/code/cau-K.cpp`. Zero warnings is the bar.
2. Run every test case by piping input, e.g. `echo "1 5 3 7 4 7 2 0" | ./cau-K`. For menus, also run several options in one session and an invalid option.
3. Report results as a table of input vs output.

## Running interactively

The Code Runner extension runs programs in the read-only OUTPUT panel, where `scanf` cannot receive input. Run in the terminal instead, or set `"code-runner.runInTerminal": true`.

## Git

Do not commit unless asked. Stage renames with `git mv` so they show as renames.
