#include <stdio.h>

int main() {
    unsigned short int N;
    scanf("%hu", &N);
    short int H[300];
    int count = 0;
    for (int i=0; i<N; i++) {
        scanf("%hd", &H[i]);
        if (H[i] >= 80) {
            count++;
        }
        else {
            if (i !=0 && H[i] >= 20 && H[i] - H[i-1] >= 10) {
                count++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}
