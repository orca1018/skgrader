#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i=0; i<N; i++) {
        scanf(" %d", &A[i]);
    }

    int B[M], C[M];
    for (int i=0; i<M; i++) {
        scanf(" %d %d", &B[i], &C[i]);
    }

    for (int i=0; i<M; i++) {
        int elevator = 0;
        int d = A[0] - B[i];
        if (d < 0) {
            d = -d;
        }
        else if (d == 0) {
            printf("1\n");
            A[0] = C[i];
            continue;
        }
        for (int j=1; j<N; j++) {
            int temp = A[j] - B[i];
            if (temp < 0) {
                temp = -temp;
            }
            if (temp < d) {
                d = temp;
                elevator = j;
            } 
        }
        printf("%d\n", elevator+1);
        A[elevator] = C[i];
    }

    return 0;
}