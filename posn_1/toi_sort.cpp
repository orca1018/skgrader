#include <stdio.h>

void swap(int* A, int i, int j, int* pt) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
    *pt += 2;
}

void bubble_sort(int A[], int size, int* pt) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, j, j + 1, pt);
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N], count = 0;
    int *pt = &count;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int size = sizeof(A) / sizeof(A[0]);
    bubble_sort(A, size, pt);
    printf("%d", count);
    return 0;
}
