#include <stdio.h>

int main() {
    int R, S, T, N, n;
    scanf("%d %d %d", &R, &S, &T);
    scanf("%d", &N);
    
    for (int i=0; i<N; i++) {
        scanf(" %d", &n);
        if (n <= R) {
            printf("no\n");
            continue;
        }
        else {
            n-=R;
            if (n%(S+T) <= S) {
                printf("yes\n");
                continue;
            }
            else {
                printf("no\n");
                continue;
            }
        }
    }
    
    return 0;
}
