#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double vol = a*b*c;
    double sur = 2*c*(a+b)+2*a*b;
    printf("%lf\n%lf", vol, sur);
    
    return 0;
}
