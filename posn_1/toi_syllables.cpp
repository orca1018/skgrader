#include <stdio.h>
#include <string.h>

int main() {
    int N, flag = 0, count;
    scanf("%d", &N);
    
    char str[31];
    for (int i=0; i<N; i++) {
        count = 0, flag = 0;
        scanf(" %30s", str);
        
        for (int j=0; j<strlen(str); j++) {
            if (flag == 0) {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {  
                    count++;
                    flag = 1;
                }
            }
            if (flag == 1) {
                if (str[j] != 'a' && str[j] != 'e' && str[j] != 'i' && str[j] != 'o' && str[j] != 'u') {
                    flag = 0;
                }
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}
