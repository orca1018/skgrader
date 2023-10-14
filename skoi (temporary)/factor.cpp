#include <stdio.h>

void factor(unsigned int n, unsigned int *pt) {
    int i = 2;
    int count = 0;
    do {
        if (n % i == 0) {
            n /= i;
            count++;
        }
        else {
            if (count > 0) {
                printf("%d^%d ", i, count);
                count = 0;
            }
            i++;
        }
    } while (n != 1);
    if (count > 0) {
        printf("%d^%d", i, count);
    }
}

int main(int argc, char **argv) {
    unsigned int N, f_count[40] = {0};
    unsigned int *pt = f_count;
    scanf("%u", &N);
    factor(N, pt);

    return 0;
}
