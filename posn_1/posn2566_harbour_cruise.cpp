#include <stdio.h>

int main() {
    int K, T, N;
    scanf("%d %d", &K, &T);
    scanf("%d", &N);
    int round = K/T;
    int r[round+1];
    for (int i=0; i<=round; i++) {
        r[i] = i*T;
    }

    int u[N], v[N];
    for (int i=0; i<N; i++) {
        scanf(" %d %d", &u[i], &v[i]);
    }

    int count = round;
    for (int i=0; i<N; i++) {
        for (int j=1; j<=round; j++) {
            if (r[j] >= u[i] && r[j] <= v[i] && r[j] != '\0') {
                r[j] = {0};
                count--;
            }
        }
    }   

    int flag = 0;
    for (int i=0; i<=round; i++) {
        if (r[i] != '\0') {
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("no");
    }
    else {
        printf("%d\n", count);
    }

    for (int i=0; i<=round; i++) {
        if (r[i] != '\0') {
            printf("%d\n", r[i]);
        }
    }

    return 0;
}

