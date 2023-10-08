#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%100s", str);

    int i = 0;
    int y = 0, x = 0;
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i] == '\0') {
            break;
        }
        if (str[i] == 'Z') {
            x = 0;
            y = 0;
        }
        if (str[i] == 'N') {
            y++;
        }
        if (str[i] == 'S') {
            y--;
        }
        if (str[i] == 'E') {
            x++;
        }
        if (str[i] == 'W') {
            x--;
        }
    }
    printf("%d %d", x, y);

    return 0;
}