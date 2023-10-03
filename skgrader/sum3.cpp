#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);

    }

    b[n-1] = a[n-1];
    for (int j=n-2; j>=0; j--) {
        b[j] = b[j+1] + a[j];
    }

    for (int k=0; k<n; k++) {
        printf("%d ", b[k]);
    }

    return 0;
}