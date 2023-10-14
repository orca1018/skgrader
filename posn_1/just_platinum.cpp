#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    double surface_area1, surface_area2, surface_area3;
    scanf("%lf %lf %lf", &surface_area1, &surface_area2, &surface_area3);

    double A, B, C;

    A = sqrt(surface_area1 * surface_area2 / surface_area3);
    B = sqrt(surface_area1 * surface_area3 / surface_area2);
    C = sqrt(surface_area2 * surface_area3 / surface_area1);
    
    double temp;
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A < B) {
        temp = A;
        A = B; 
        B = temp;
    }
    printf("%.0lf %.0lf %.0lf", A, B, C);

    return 0;
}
