#include <stdio.h>

int main() {
    int N, max, min;
    scanf("%d", &N);
    int arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    
    for (int j=0; j<N; j++) {
        if (arr[j]>max) {
            max = arr[j];
        }
    }
    for (int k=0; k<N; k++) {
        if (arr[k]<min) {
            min = arr[k];
        }
    }
    
    printf("%d", max-min);
    
    return 0;
}