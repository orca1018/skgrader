#include <stdio.h>
#include <string.h>

int count(char str[], char ch) {
    int count = 0, i = 0;;
    do {
        if (str[i] == ch) {
            count++;
        }
        i++;
    } while (str[i] != '\0');

    return count;
}
int main() {
    char path[53], ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%52s", path);
    int U = count(path, 'U');
    int D = count(path, 'D');
    int L = count(path, 'L');
    int R = count(path, 'R');

    char c[R][D];
    memset(c, '\0', sizeof(c));
    c[0][0] = ch[0];
    for (int i=1; path[i] != '\0'; i++) {
        int x = 0, y = -1;
        switch (path[i]) {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'L':
                x++;    
                break;
            case 'R':
                x--;
                break;
        }
        c[x][y] = ch[i];
    }
    for (int i=0; i<R; i++) {
        for (int j=0; j<D; j++) {
            if (c[i][j] != '\0') {
                printf("%c", c[i][j]);
            }
            else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}