#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(unsigned int n) {
    if (n <= 1) {
        return false;
    }
    else if (n <= 3) {
        return true;
    }
    else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    else {
        for (int i=5; i*i<=n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }

    return true;
}

int main(int argc, char **argv) {
    unsigned short int N;
    scanf("%hu", &N);

    unsigned int A;
    for (int i = 0; i < N; i++) {
        scanf(" %u", &A);
        printf("%s\n", is_prime(A) ? "GG,WP" : "GL,HF");
    }

    return 0;
}
