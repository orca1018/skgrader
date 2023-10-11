#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned short int N;
    int M, m;
    scanf("%hu %u", &N, &M);

    unsigned int bag_count = 1;
    int temp = M;
    for (int i=0; i<N; i++) {
        scanf("%u", &m);
        temp-=m;
        if (temp < 0) {
            bag_count++;
            temp = M - m;
        }
        else if (temp == 0 && i != N-1) {
            bag_count++;
            temp = M;
        }
        else {
            continue;
        }
    }
    printf("%u", bag_count);

    return 0;
}