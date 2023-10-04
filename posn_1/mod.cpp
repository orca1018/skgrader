#include <stdio.h>

int main() {
    int num[15] = {0};
    int ans[37] = {0}; 
    int aans = 0;

    for (int i = 0; i <= 14; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int j = 0; j <= 14; j++) {
        ans[num[j] % 37]++;
    }
    
    for (int k = 0; k <= 36; k++) { 
        if (ans[k] != 0) { 
            aans++;
        }
    }

    printf("%d", aans);
    
    return 0;
}
