#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int uy=0; uy<N; uy++) {
        for (int ux=0; ux<=2*N; ux++) {
            if (ux == uy || ux == 2*N-uy) {
                printf("*");
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for (int i=0; i<=2*N; i++) {
        printf("*");
    }
    printf("\n");
    
    int a =0;
    for (int dy=N+1; dy<=2*N; dy++) {
        for (int dx=0; dx<=2*N; dx++) {
            if (dx == N-1-a || dx == N+1+a) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        a++;
        printf("\n");
    }
    return 0;
}
