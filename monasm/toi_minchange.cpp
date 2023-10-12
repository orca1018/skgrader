#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool changeable[10000];

void find_changeable(unsigned short int A, unsigned short int B) {
    memset(changeable, false, sizeof(changeable));
    unsigned short int* m_A = (unsigned short int*)malloc(sizeof(unsigned short int) * (10000 / A));
    unsigned short int* m_B = (unsigned short int*)malloc(sizeof(unsigned short int) * (10000 / B));
    unsigned short len = (10000/A > 10000/B) ? (10000/A) : (10000/B);
    
    for (int i=0; i<len; i++) {
        m_A[i] = A * i;
        m_B[i] = B * i;
    }
    
    for (int i=0; i<10000/A; i++) {
        for (int j=0; j<10000/B; j++) {
            changeable[m_A[i] + m_B[j]] = true;    
        }
    }

    free(m_A);
    free(m_B);
}


unsigned short int change(unsigned short int n) {
    do {
        n++; 
    } while (changeable[n] == false);
    
    return n;
}

int main(int argc, char *argv[]) {
    unsigned short int A, B, N, n;
    scanf("%hu %hu %hu", &A, &B, &N);
    find_changeable(A, B);
    
    for (int i=0; i<N; i++) {
        scanf("%hu", &n);
        printf("%hu\n", change(n));
    }
}
