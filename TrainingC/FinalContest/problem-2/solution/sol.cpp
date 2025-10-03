#include <stdio.h>
int a[110];

int main() {
    int n, x, k;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        int chiso; scanf("%d", &chiso);
        x -= a[chiso];
    }
    printf("%d", x + 1);
}