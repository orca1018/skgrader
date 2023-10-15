#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv) {
    char str[134];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    int len = strlen(str);

    char reverse_str[len + 1];

    for (int i = 0; i < len; i++) {
        reverse_str[len - 1 - i] = str[i];
    }

    for (int i = 0; i < len; i++) {
        if (isalpha(reverse_str[i])) {
            char base = islower(reverse_str[i]) ? 'a' : 'A';
            reverse_str[i] = (reverse_str[i] - base + len) % 26 + base;
        }
        printf("%c", reverse_str[i]);
    }

    return 0;
}
