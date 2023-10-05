#include <stdio.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);
    double area, cir;
    double pi = acos(-1.0);
    area = pi*pow(r, 2);
    cir = 2*pi*r;
    
    printf("%.3lf %.3lf", area, cir);
    
    return 0;
}
