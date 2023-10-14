#include <stdio.h>

int main() {
    char num[1000001];
    scanf("%[^\n]", num);
    
    unsigned int rmd = 0, temp;
    for (int i=0; num[i] != '\0'; i++) {
        temp = 10*rmd + (num[i] - '0');
        rmd = temp%3;
    }
    printf("%u ", rmd);

    rmd = 0;
    for (int j=0; num[j] != '\0'; j++) {
        temp = 10*rmd + (num[j] - '0');
        rmd = temp%11;
    }
    printf("%u", rmd);

    return 0;
}