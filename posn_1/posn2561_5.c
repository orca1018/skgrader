#include <stdio.h>

int main() { 
    int sd, feb, m;
    int flag = 0;
    scanf("%d%d%d", &sd, &feb, &m);
    printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat\n");
    int count = 365 + feb;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (feb == 1) {
        month[1] = 29;
    }
    
    int dayy = 0;
    for (int i = 0; i < m - 1; i++) {
        dayy += month[i];
    }
    
    for (int j = 1; j <= month[m - 1]; j++) {
        int l_day = (dayy + j + sd - 2) % 7;
        
        if (flag == 0) {
            for (int k = 0; k < l_day; k++) {
                printf("       ");
            }
            flag++;
        }
        
        if (j < 10) {
            printf("%d      ", j);
        }
        else {
            printf("%d     ", j);
        }
        
        if (l_day == 6) {
            printf("\n");
            flag = 0;
        }
    }

    return 0;
}
