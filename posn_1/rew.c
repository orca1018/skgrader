#include <stdio.h>

int main(){
    short int a, b, c;
    scanf("%hd %hd %hd", &a, &b, &c);
    printf("%hd %hd %hd\n%hd %hd %hd", a, b, c, c, b, a);
    
    return 0;
}
