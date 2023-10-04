#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    int N, M;
    unsigned long long int ans[T]; 
    
    for (int i = 0; i < T; i++) {
        scanf(" %d %d", &N, &M);
        ans[i] = (N * (N + 1) / 2) - (M * (M + 1) / 2);
    }

    for (int i = 0; i < T; i++) {
        printf("%llu\n", ans[i]);
    }
    
    return 0;
}
