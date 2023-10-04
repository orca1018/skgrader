#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    char str[51];
    scanf("%d", &n);
    scanf(" %50s", str);
    size_t ln_len = strlen(str) / (size_t)n;

    int deca[n];
    for (int i = 0; i < n; i++) {
        deca[i] = 0;
        for (int j = 0; j < ln_len; j++) {
            int v = ln_len * i + j;
            if (str[v] >= 'A' && str[v] <= 'F') {
                str[v] = str[v] - 'A' + 10;
            }
            else {
                str[v] = str[v] - '0';
            }
            deca[i] += str[v] * pow(16, ln_len - 1 - j);
        }
        deca[i] = deca[i] % 26;
    }

    for (int k = 0; k < n; k++) {
        printf("%c", deca[k] + 'A');
    }

    return 0;
}
