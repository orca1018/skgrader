#include <stdio.h>

int main(int argc, char **argv) {
    unsigned short int N;
    scanf("%hu", &N);
    
    int L = 1, R = 2*N -1;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=2*N-1; j++) {
            if (j<=L || j>=R) {
                printf("*");
            }
            else {
                printf(".");
            }
        } 
        L++;
        R--;
        printf("\n");
    }
    for (int i=1; i<N; i++) {
        for (int j=1; j<=2*N-1; j++) {
            if (j<=R || j>=L) {
                printf("*");
            }
            else {
                printf(".");
            }
        }
        L++;
        R--;
        printf("\n");
    }
    
    return 0;
}
