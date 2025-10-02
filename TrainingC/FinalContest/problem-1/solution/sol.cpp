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