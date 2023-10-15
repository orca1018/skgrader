#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    char str[134];
    scanf("%133s", str);

    int len = strlen(str);
    bool flag = true;
    for (int i=0; i<(int)len/2; i++) {
        if (str[i] != str[len-1-i]) {
            flag = false;
            break;
        }
    }

    printf("%s", (flag == true) ? "YES" : "NO");

    return 0;
}