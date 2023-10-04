#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    char p_y = y%4;
    char p;
    if (p_y == 0) {
        p_y = 'D';
    }
    else {
        p_y+=64;
    }
    p = p_y+(x%4)-1;
    if (p > 68) {
        p-=4;
    }
    char ch2 = p-2;
    if (ch2 < 65) {
        ch2+=4;
    }
    printf("%c %c\n %c\n%c %c", ch2, p, p, p, ch2);

    return 0;   
}