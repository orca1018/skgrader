#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int x[N], y[N];
    for (int i=1; i<=N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    int x_max=x[1], x_min=x[1], y_max=y[1], y_min=y[1];
    for (int j=1; j<=N; j++) {
        if (x[j] > x_max) {
            x_max = x[j];
        }
        if (x[j] < x_min) {
            x_min = x[j];
        }
        if (y[j] > y_max) {
            y_max = y[j];
        }
        if (y[j] < y_min) {
            y_min = y[j];
        }
    }
    printf("%d", (2*(x_max-x_min+y_max-y_min)));

    return 0;
}