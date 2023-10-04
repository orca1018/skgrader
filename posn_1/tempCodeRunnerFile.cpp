#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char m[51] = {0};
    char str[26] = {0};
    char ans[51] = {0};
    scanf("%50s", m);
    for (int i=0; i<n; i++) {
        short int flag = 0;
        scanf("%25s", str);
        short int pl = strlen(m)-1;
        for (int j=strlen(str)-1; j>=0; j--) {
            short int temp = str[j]+10*m[pl]+m[pl-1];
            if (flag == 1) {
                temp++;
                flag = 0;
            }
            if (temp > 99) {
                temp-=100;
                flag++;
            }
            int ones = temp%10;
            temp -= temp%10;
            int tenths = (temp%100)/10;
            ans[pl] = ones;
            ans[pl-1] = tenths;
            pl-=2;
        }
        for (int p=strlen(m)-1; p>=0; p--) {
        printf("%c", ans[p]);
        }
        printf("\n");
    }

    return 0;
}