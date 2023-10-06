#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char arr[m][n];

    for (int s_1 = 0; s_1 < m; s_1++) {
        for (int s_2 = 0; s_2 < n; s_2++) {
            scanf(" %c", &arr[s_1][s_2]);
            if (arr[s_1][s_2] >= 'a' && arr[s_1][s_2] <= 'z') {
                arr[s_1][s_2] -= 32;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 2; j++) {
            if (arr[i][j] == 'S' && arr[i][j + 1] == 'K' && arr[i][j + 2] == 'S') {
                count++;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m - 2; l++) {
            if (arr[l][k] == 'S' && arr[l + 1][k] == 'K' && arr[l + 2][k] == 'S') {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
