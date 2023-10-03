#include <stdio.h>
#include <string.h>

int main() {
    char s[400];
    char op[600];

    scanf("%399[^\n]%*c", s);
    scanf("%599[^\n]%*c", op); 

    int i = 0;
    while (op[i] != 'N') {
        if (op[i] == 'Z') {
            for (int j = 0; j < strlen(s); j++) {
                if (s[j] == op[i+2]) {
                    s[j] = op[i+4];
                }
            }
            i += 4;
        }
        if (op[i] == 'D') {
            strncat(s, &op[i+2], 1);
            i += 2;
        }
        if (op[i] == 'U') {
            int n = op[i + 2] - '0';
            if (strlen(s) != 0) {
                if (strlen(s) > n) {
                    s[strlen(s) - n] = '\0';
                }
                else {
                    s[0] = '\0';
                }
            } 
            else {
                s[0] = '\0';
            }
        }

        i += 2;
    }

    printf("%s", s);

    return 0;
}

