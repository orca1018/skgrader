#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool overleap(int x1, int y1, int r1, int x2, int y2, int r2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    float distance = (float) sqrt(pow(dx, 2) + pow(dy, 2));
    return (distance <= r1 + r2);
}

int main(int argc, char **argv) {
    unsigned int d;
    scanf("%u", &d);
    int x1, x2, y1, y2, r1, r2;
    
    for (unsigned int i = 0; i < d; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        printf("%s\n", overleap(x1, y1, r1, x2, y2, r2) ? "TAK" : "NIE");
    }

    return 0;
}
