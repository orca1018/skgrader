#include <stdio.h>
#include <string.h>

int main() {
    char str[8];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)] == '\n') {
        str[strlen(str)] = '\0';
    }

    unsigned int S = 0, ch = 0; 
    for (int i=0; i<strlen(str); i++) {
        if (str[i] == ' ') {
            break;
        }
        S*=10;
        S+=(str[i]-'0');
        ch++;
    }
    
    switch (str[++ch]) {
        case 'G':
            S*=24;
        case 'M':
            S*=24;
        case 'K': 
            S*=24;
        case 'B':
            printf("%uM", S);
    }
    
    return 0;
}
