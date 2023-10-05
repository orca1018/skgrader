#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int vol = a*b*c;
    int sur = 2*c*(a+b)+2*a*b;
    printf("%d\n%d", vol, sur);
    
    return 0;
}
