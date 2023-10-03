#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n == 0) {
        if (m == 0) {
            printf("NIESKONCZONOSC");
        } else {
            printf("0");
        }
    } else if (m == 0) {
        printf("1");
    } else if (n > m) {
        printf("0");
    } else if (n == m) {
        printf("1");
    } else if (m > n) {
        if (m % n == 0) {
            printf("1");
        } else {
            printf("0");
        }
    }

    return 0;
}
