#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    do {
        fgets(str, sizeof(str), stdin);
        if (str[0] == '0') {
            break;
        }

        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        int num_count = 0, flag_1 = 1;
        if (strncmp(str, "Agent", 5) == 0 && str[5] == ' ') {
            int cnt = 6;
            do {
                if (str[cnt] >= '0' && str[cnt] <= '9') {
                    num_count++;
                } 
                else if (str[cnt] == '\0') {
                    break;
                }
                else {
                    flag_1 = 0;
                    break;
                }
                cnt++;
            } while (1);
            
            if (flag_1 == 1 && num_count > 0) {
                printf("Agent ");
                for (int j = 0; j < num_count; j++) {
                    printf("X");
                }
            }
            else {
                printf("Secret Agent");
            }
        }
        
        else if (strncmp(str, "Mr", 2) == 0 && str[2] == ' ') {
            int flag_2 = 1;
            int k = 3;
            while (str[k] != '\0') {
                if (strchr("AEIOUaeiou", str[k]) != NULL || str[k] < 65) {
                    flag_2 = 0;
                    break;
                }
                k++;
            }
            if (flag_2 == 1) {
                printf("Alphabet Agent");
            } else {
                printf("Secret Agent");
            }
        } 
        
        else if (isdigit(str[0])) {
            printf("Agent ");
            for (int l=0; l<strlen(str); l++) {
                printf("X");
            }
        }
        else {
            printf("Secret Agent");
        }

        printf("\n");
    } while (1);

    printf("END");

    return 0;
}
