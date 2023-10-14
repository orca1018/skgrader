#include <stdio.h>

int main() {
    unsigned short int S;
    char U[3];
    scanf("%hu %2s", &S, U);

    unsigned long long int cheat_byte;
    switch (U[0]) {
        case 'K':
            cheat_byte = (unsigned long long int)24*S;
            printf("%lluM", cheat_byte);
            break;
        case 'M':
            cheat_byte = (unsigned long long int)48576*S;
            printf("%lluM", cheat_byte);
            break;
        case 'G':
            cheat_byte = (unsigned long long int)73741824*S;
            printf("%lluM", cheat_byte);
            break;
    }

    return 0;
}