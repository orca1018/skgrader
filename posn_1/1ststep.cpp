#include<stdio.h>

int main(int argc, char **argv) {
    unsigned short int n;
    scanf("%hu", &n);
    int len = 4*n+1;
    int arr[len];

    for (int i=0; i<n; i++) {
        arr[i] = 2*i + 1;
    }
    int val = 3;
    for (int i=n; i<2*n; i++) {
        arr[i] = val;
        val+=2;
    }
    arr[2*n] = 2*n+3;
    val-=2;
    for (int i=2*n+1; i<=3*n; i++) {
        arr[i] = val;
        val-=2;
    }
    val = 2*n-1;
    for (int i=3*n+1; i<=4*n; i++) {
        arr[i] = val;
        val-=2;
    }

    int max = arr[2*n];
    for (int i=0; i<len; i++) {
        int sp = (max-arr[i])/2;
        for (int j=0; j<sp; j++) {
            printf(" ");
        }
        for (int j=0; j<arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}