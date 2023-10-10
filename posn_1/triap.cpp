#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    unsigned short int n;
    scanf("%hu", &n);
    unsigned int *arr = (unsigned int *)malloc((n + 1) * sizeof(unsigned int));
    bool TAK = false;

    for (int i = 0; i < n; i++) {
        scanf(" %u", &arr[i]);
        if (TAK == false && i > 0) {
            int count = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (arr[i] == arr[j]) {
                    count++;
                    if (count == 3) {
                        TAK = true;
                        break;
                    }
                }
            }
        }
    }

    free(arr);

    printf("%s", (TAK == true) ? "TAK" : "NIE");

    return 0;
}
