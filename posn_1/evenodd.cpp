#include <stdio.h>

int main() {
    int d, n[21];
    scanf("%d", &d);
    int arr[21][1001];

    for (int i = 1; i <= d; i++) {
        scanf("%d", &n[i]);
        for (int j = 1; j <= n[i]; j++) {
            scanf("%d", &arr[i][j]); 
        }
    }

    for (int k = 1; k <= d; k++) {
        for (int l = 2; l <= n[k]; l += 2) {
            printf("%d ", arr[k][l]);
        }
        for (int m = 1; m <= n[k]; m += 2) {
            printf("%d ", arr[k][m]);
        }
        printf("\n");
    }

    return 0;
}
