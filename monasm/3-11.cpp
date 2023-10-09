#include <stdio.h>
#include <string.h>

int main() {
    char num[1000001];
    fgets(num, sizeof(num), stdin);
    if (num[strlen(num)-1] == '\n') {
        num[strlen(num)-1] = '\0';
    }

    int rem1 = 0;
    for (int i=0; i<strlen(num); i++) {
        num[i]-='0';
        num[i]+=10*rem1;
        rem1 = num[i] % 3;
    }
    printf("%d ", rem1);

    int rem2 = 0;
    for (int j=0; j<strlen(num); j++) { // somehow error
        num[j]-='0';
        num[j]+=10*rem2;
        rem2 = num[j] % 11;
    }
    printf("%d", rem2);

    return 0;
}