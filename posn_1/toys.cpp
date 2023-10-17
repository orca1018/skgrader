#include <stdio.h>

int main(int argc, char **argv) {
    unsigned short int N;
    scanf("%hu", &N);
    for (int i=1; i<=2*N-1; i++) {
        for (int j=1; j<=2*N-1; j++) {
            if (i == N) {
                if (j == N) {
                    printf("O");
                }
                else {
                    printf("*");
                }
            }
            else if (i < N) {
                if (i >= j && j < N) {
                    printf("*");
                } 
                else if (j >= N && j <= (2*N)-i) {
                    printf("+");
                }
                else {
                    printf("_");
                }
            }
            else {
                if (j > N && (i-N) <= (j-N)) {
                    printf("*");
                }
                else if (j <= N && j + (i-N) >= N) {
                    printf("+"); 
                }   
                else {
                    printf("_");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
