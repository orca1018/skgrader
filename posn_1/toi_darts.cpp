#include <stdio.h>
#include <math.h>

float distance(int x, int y);
void pts_count(unsigned int *count, float distance);

int main() {
    int N;
    scanf("%d", &N);
    
    int x, y;
    unsigned int count = 0;
    unsigned int *pt_count = &count;
    for (unsigned short int i=0; i<N; i++) {
        scanf("%d %d", &x, &y);
        pts_count(pt_count, distance(x, y));
    }

    printf("%u", count);

    return 0;
}

float distance(int x, int y) {
    float distance = sqrt(pow(x, 2)+pow(y, 2));

    return distance;
}

void pts_count(unsigned int *count, float distance) {
    if (distance <= 2) {
        *count += 5;
    }
    else if (distance <= 4) {
        *count += 4;
    }
    else if (distance <= 6) {
        *count += 3;
    }
    else if (distance <= 8) {
        *count += 2;
    }
    else if (distance <= 10) {
        (*count)++;
    }
}