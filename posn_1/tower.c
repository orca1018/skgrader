#include <stdio.h>

int main() {
    int k, h, n, c, cnt = 0;
    scanf("%d", &k);
    for (int i=1; i<=k; i++) {
        scanf("%d %d", &h, &n);
        for (int j=1; j<=n; j++) {
            scanf("%d", &c);
            if (h == c) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}
