#include <stdio.h>

int main() {
    int T;
    long long ans;
    scanf("%d", &T);
    
    int N, M;
    for (int i=0; i<T; i++) {
        scanf(" %d %d", &N, &M);
        ans = (N*(N+1)/2)-(M*(M+1)/2);
        printf("%lld\n", ans);
        ans = 0;
    }
    
    return 0;
}