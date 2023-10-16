#include <stdio.h>

int main(int argc, char **argv) {
    unsigned short int N;
    scanf("%hu", &N);
    for (int i=1; i<=4*N; i++) {
        if (N-i >= 0) {
            for (int j=1; j<=4*N; j++) {
                if (j <= N) {
                    printf(" ");
                }
                else {
                    printf("#");
                }
            }
        }
        else if (2*N - i >= 0) {
            for (int j=1; j<=4*N; j++) {
                if (j <= 2*N) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
        }
        else if (3*N - i >= 0) {
            for (int j=1; j<=4*N; j++) {
                printf("#");
            }
        }
        else {
            for (int j=1; j<=4*N; j++) {
                if (N - j >= 0) {
                    printf(" ");
                }
                else if (2*N - j >= 0) {
                    printf("#");
                }
                else if (3*N - j >= 0) {
                    printf(" ");
                }
                else {
                    printf("#");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
