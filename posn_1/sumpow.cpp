#include <stdio.h>
#include <math.h>

int main() {
    unsigned short int n, m;
    scanf("%hu %hu", &n, &m);
    double arr[n], ans = 0;
    for (int i=0; i<n; i++) {
        scanf(" %lf", &arr[i]);
        ans += (double) pow(arr[i], m);
    }
    printf("%.3lf", ans);

    return 0;
}