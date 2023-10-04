#include <stdio.h>

int main() {
    int N, k;
    scanf("%d %d", &N, &k);
    int arr[1001];

    for (int k=0; k<N; k++) {
        scanf("%d", &arr[k]);
    }

    // bubble sort template 
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[0]);
    for (int l=1; l<k; l++) {
        if (arr[l] != arr[l-1]) {
            printf("%d\n", arr[l]);
        }
    }

    return 0;
}