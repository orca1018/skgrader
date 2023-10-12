#include <stdio.h>
#include <string.h>

int main() {

    char num[1000001];
    scanf("%1000000s", num);
    int len = strlen(num);

    int sum3 = 0;
    for (int i = 0; i < len; i++) {
        sum3 += (num[i] - '0');
    }
    
    int mod11 = 0;
    for(int i = 0 ; num[i] != '\0' ; i++){
        mod11 = mod11 * 10 + (num[i] - '0');
        mod11 %= 11;
    }
    
    if (sum3 < 0) {
        sum3 = -sum3;
    }
    if (mod11 < 0) {
        mod11 = -mod11;
    }
    
    printf("%d %d", sum3 % 3, mod11 % 11);
    
    return 0;
}
