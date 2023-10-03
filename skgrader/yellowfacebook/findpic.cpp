#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[51];
    scanf("%d", &n);
    scanf(" %50s", str);
    size_t ln_len = strlen(str) / (size_t)n;
    int i = 0;
    while (str[i]) {
        if (i > 0 && i % ln_len == 0) {
            printf("\n");
        }
        switch (str[i]) {
            case '0':
                printf("....");
                break;
            case '1':
                printf("...*");
                break;
            case '2':
                printf("..*.");
                break;
            case '3':
                printf("..**");
                break;
            case '4':
                printf(".*..");
                break;
            case '5':
                printf(".*.*");
                break;
            case '6':
                printf(".**.");
                break;
            case '7':
                printf(".***");
                break;
            case '8':
                printf("*...");
                break;
            case '9':
                printf("*..*");
                break;
            case 'A':
                printf("*.*.");
                break;
            case 'B':
                printf("*.**");
                break;
            case 'C':
                printf("**..");
                break;
            case 'D':
                printf("**.*");
                break;
            case 'E':
                printf("***.");
                break;
            case 'F':
                printf("****");
                break;
        }
        i++;
    }

    return 0;
}
