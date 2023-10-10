#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X <= Y) {
        printf("%d", 5*(Y-X));
    }
    else {
        printf("%d", 5*(12-X+Y));
    }
    
    return 0;
}
