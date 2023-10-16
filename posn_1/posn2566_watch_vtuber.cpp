#include <stdio.h>

int main(int argc, char **argv) {
    int d_1, d_2, m_1, m_2;
    scanf("%d %d", &d_1, &m_1);
    scanf("%d %d", &d_2, &m_2);
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m_1 == m_2) {
        printf("%hu", 3*(d_2-d_1+1));
    }
    else {
        int days = 0;
        days += month[m_1-1] - d_1 + 1;
        days += d_2;
        if (m_2 - m_1 == 1) {
            printf("%d", 3*days);
        }
        else {
            for (int i=m_1+1; i<m_2; i++) {
                days += month[i-1];
            }
            printf("%d", 3*days);
        }
    }

    return 0;
}

