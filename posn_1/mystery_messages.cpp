#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char str[m];
    char ans[n];

    for (int i=0; i<n; i++) {
        scanf("%s", str);
        ans[i] = '0';
        for (int j=0; j<m; j++) {
            if (str[j] <= 90) { // ASCII number of a capital letter 65 - 90 (A - Z)
                if (j == 0) {
                    ans[i] = str[m-1];
                }
                else {
                    ans[i] = str[j-1];
                }
                break;
            }
        }
    }

    for (int k=0; k<n; k++) {
        printf("%c", ans[k]);
    }
    
    return 0;
}