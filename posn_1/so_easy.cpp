#include <stdio.h>
#include <string.h>

int main() {
    char num1[134], num2[134];
    scanf("%[^\n]", num1);
    scanf(" %[^\n]", num2);
    for (int i=0; num1[i] != '\0' && num2[i] != '\0'; i++) {
        printf("%d", num1[i] - num2[i]);
    }

    return 0;
}