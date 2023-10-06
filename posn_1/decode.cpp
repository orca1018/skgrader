#include <stdio.h>

int main() {
    unsigned short int m, n, x, y;
    scanf("%hu %hu %hu %hu", &n, &m, &x, &y);
    for (int i=0; i<m+2; i++) {
        printf("#");
    }
    printf("\n");
    unsigned short int dot_1 = y-x+1, dot_2 = y+x-1;
    for (int ln_u=1; ln_u<x; ln_u++) {
        for (int j=0; j<m+2; j++) {
            if (j == 0 || j == m+1) {
                printf("#");
            }
            else if (j == dot_1 || j == dot_2) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        dot_1++;
        dot_2--;
        printf("\n");
    }
    
    for (int k=0; k<m+2; k++) {
        if (k == 0 || k == m+1) {
            printf("#");
        }
        else if (k == y) {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
    
    unsigned short int dot_3 = y-1, dot_4 = y+1;
    for (int ln_d=x+1; ln_d<=n; ln_d++) {
        for (int l=0; l<m+2; l++) {
            if (l == 0 || l == m+1) {
                printf("#");
            }
            else if (l == dot_3 || l == dot_4) {
                printf("*");
            }
            else {
                printf(" ");
            }
        } 
        dot_3--;
        dot_4++;
        printf("\n");
    }
    
    for (int i=0; i<m+2; i++) {
        printf("#");
    }
    
    return 0;
}
