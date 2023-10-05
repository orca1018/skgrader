#include <stdio.h>

int main(){
    unsigned short int a_1, a_2, b_1, b_2;
    scanf("%hu %hu %hu %hu", &a_1, &b_1, &a_2, &b_2);
    printf("%d", a_1*b_1+a_2*b_2);
    
    return 0;
}
