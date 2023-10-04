#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int deg;
    int score_joy = 0;
    int score_jaew = 0;
    for (int i=0; i<N; i++) {
        scanf("%d", &deg);
        if (deg >= 360) {
           deg%=360;
        }
        if (deg%60 != 0) {
            int temp = deg/60;
            if (temp % 2 == 0) {
                score_joy++;
            }
            else {
                score_jaew++;
            }
        }  
    }
    printf("%d %d\n", score_joy, score_jaew);
    if (score_joy == score_jaew) {
        printf("Draw");
    }
    else {
        if (score_joy > score_jaew) {
            printf("Joy");
        }  
        else {
            printf("Jaew");
        }
    }
    
    return 0;
}
