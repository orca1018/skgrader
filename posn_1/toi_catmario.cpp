#include <stdio.h>

int main() {
    unsigned short int N, M;
    scanf("%hu %hu", &N, &M);
    
    unsigned short int A[N+1] = {0}, in_A, B;
    for (int i=0; i<M; i++) {
        scanf("%hu %hu", &in_A, &B);
        if (A[in_A] == '\0') {
            A[in_A] = B;
        } 
        else {
            if (A[in_A] > B) {
                A[in_A] = B; 
            }
        }
    }
    
    unsigned int sum = 0;
    for (int j=1; j<=N; j++) {
        sum+=A[j];
    }
    printf("%u\n", sum);
    for (int k=1; k<=N; k++) {
        printf("%d %u\n", k, A[k]);
    }
    
    return 0;
}
