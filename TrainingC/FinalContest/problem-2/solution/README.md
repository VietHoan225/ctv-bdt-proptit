<center>

# SOLUTION PROBLEM 2: Hạt?

Đề bài: **[bai2.md](../bai2.md)**
Code: **[sol.cpp](sol.cpp)**

</center>

---

## Giải thuật

1. Tính tổng số hạt **không thuộc loại mong muốn**:  
    $$
    \text{notWanted} = x - \big(a_{b_0} + a_{b_1} + \dots + a_{b_{k-1}}\big)
    $$


2. Trong trường hợp xấu nhất, Hoàng Đỗ có thể rút ra toàn bộ `notWanted` hạt này mà không gặp loại hạt mong muốn nào.  

3. Do đó, để **đảm bảo** có ít nhất một hạt mong muốn, anh ấy cần lấy thêm 1 hạt nữa.  

4. Kết quả:  `notWanted + 1`


---

## Code C mẫu

```c
#include <stdio.h>
int a[110];

int main() {
    int n, x, k;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        int chiso; scanf("%d", &chiso);
        x -= a[chiso];
    }
    printf("%d", x + 1);
}