#include <stdio.h>
#include <string.h>

int main() {
    unsigned short int T;
    char str[101];
    scanf("%hu", &T);

    int count[T+1] = {0}, flag = 0;
    for (int i=0; i<T; i++) {
        scanf(" %[^\n]", str);  // fuck my life, just don't use fgets here

        char temp = str[0];
        for (int j=1; j<=strlen(str); j++) {
            if (str[j] == temp && flag == 0 && str[j] != '0') {
                count[i]++;
                flag = 1;
            } 
            if (flag == 1) {
                if (str[j] == '0') {
                    flag = 0;
                }
                if (str[j] != str[j-1]) {
                    flag = 0;
                }
            }
            temp = str[j];
        }
    }

    for (int p=0; p<T; p++) {
        printf("%d\n", count[p]);
    }

    return 0;
}