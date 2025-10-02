# SOLUTION PROBLEM 1: Xuất hiện nhiều nhất

Đề bài: **[frequency.md](../frequency.md)**
Code: **[sol.cpp](sol.cpp)**

---

**Giải thích:**  
Số 1 và số 2 đều xuất hiện 2 lần. Vì số 1 nhỏ hơn số 2, nên in ra 1.

---

## Giải thuật

1. **Khởi tạo mảng đếm tần suất** `freq[0..1000] = 0`.  
2. **Duyệt từng phần tử `x` trong mảng:**  
   - Tăng `freq[x]++`  
   - Nếu `freq[x] > maxtanso`, cập nhật `maxtanso = freq[x]` và `res = x`  
   - Nếu `freq[x] == maxtanso` và `x < res`, cập nhật `res = x`  
3. **In kết quả** `res`.

---

## Code C mẫu

```c
#include <stdio.h>

int freq[1005] = {0};

int main() {
    int n, res = 10000, maxtanso = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
        if (freq[x] > maxtanso) {
            maxtanso = freq[x];
            res = x;
        } else if (freq[x] == maxtanso && x < res) {
            res = x;
        }
    }
    printf("%d\n", res);
    return 0;
}
