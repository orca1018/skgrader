#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int sum[n][n] = {0};

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            scanf(" %d", &matrix[i][j]);
        }
    }

    for (int l=1; l<=n; l++) {
        for (int m=1; m<=n; m++) {
            for (int a=1; a<=l; a++) {
                for (int b=1; b<=m; b++) {
                    sum[l][m] += matrix[a][b];
                }
            }
            printf("%d ", sum[l][m]);
        }
        printf("\n");
    }

    return 0;
}