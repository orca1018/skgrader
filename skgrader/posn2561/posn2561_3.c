#include <stdio.h>

int main() {
    unsigned short int n, m;
    scanf("%hu %hu", &n, &m);
    int ans[10] = {0};

    for (int i=n; i<=m; i++) {
        int temp = i;
        int ones = temp%10;
        ans[ones]++;
        temp-=ones;
        if (temp != 0) {
            int tens = (temp%100)/10;
            ans[tens]++;
            temp-=10*tens;
            if (temp != 0) {
                int hundreds = (temp%1000)/100;
                ans[hundreds]++;
                temp-=100*hundreds;
                if (temp != 0) {
                    int thousands = (temp%10000)/1000;
                    ans[thousands]++;
                }
            }
        }
    }
    for (int j=0; j<10; j++) {
        printf("%d -> %d\n", j, ans[j]);
    }
    
    return 0;   
}