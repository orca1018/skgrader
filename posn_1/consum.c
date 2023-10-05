#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    int num[N], sum = 0;
    for (int i=0; i<N; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int j=0; j<N; j++) {
        sum+=num[j];
        printf("%d " ,sum);
    }
    
    return 0;
}
