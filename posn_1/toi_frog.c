#include <stdio.h>

int main() {
    unsigned short int X, Y, flag = 0, ans;
    scanf("%hu %hu", &X, &Y);
    if (Y%X != 0) {
        flag = 1;
    }
    ans = Y/X;
    if (X>Y) {
        printf("2");
    }
    else {
        printf("%d", ans+flag);
    }
    
    return 0;
}