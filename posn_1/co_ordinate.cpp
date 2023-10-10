#include <stdio.h>

int main() {
    int H, W, X, Y;
    scanf("%d %d %d %d", &H, &W, &X, &Y);
    
    for (int i=0; i<H+2; i++) {
        for (int j=0; j<W+2; j++) {
            if (i == 0 || i == H+1) {
                printf("#");
            } 
            else if (j == 0 || j == W+1) {
                printf("#");
            }
            else if (i == X && j == Y) {
                printf("+");
            }
            else if (i == X && j != Y) {
                printf("-");
            }
            else if (i != X && j == Y) {
                 printf("|");
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }
    
    return 0;
}
