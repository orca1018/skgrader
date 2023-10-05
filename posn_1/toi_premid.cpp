#include <stdio.h>

int main() {
    unsigned short int N;
    int days[7] = {6, 2, 6, 6, 4, 5, 10};
    scanf("%hu", &N);
    int n = 0;
    for (int i=0; i<N; i++) {
        int hr[N], ans;
        scanf("%d", &hr[i]);
        
        int sum = 0;     
        for (int j=i; j>=0; j--) {
            sum+=hr[j]; 
        }
        sum%=39;
        for (int k=0; k<7; k++) {
            sum-=days[k];
            if (sum <= 0) {
                ans = k;
                break;
            }
        }
        
        switch(ans)
        {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    }
    
    return 0;
}
