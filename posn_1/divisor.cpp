#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    int s = sqrt(num);
    int arr[100000] = {0};
    for (int i=1; i*i<=num; i++) {
        if (num%i == 0) {
            printf("%d\n", i);
            arr[i] = i;
        }
    }
    for (int j=s; j>=1; j--) {
        if (arr[j] != '\0') {
            if (num/j == j) {
                printf("");
            }
            else {
                printf("%d\n", num/j);
            }
        }
    }

    return 0;
}