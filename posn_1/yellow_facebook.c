#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    char num[80],a[n][80],compare[n][80];
    scanf("%s",num);
    int digit = strlen(num),len[n],con[80];
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
        len[i] = strlen(a[i]);
    }
    for(int i=0;i<n;i++){
        int x=len[i]-1;
        for(int j=60;j>60-(len[i]*2);j--){
            compare[i][j] = (int)a[i][x]%10;
            j--;
            compare[i][j] = (int)a[i][x]/10;
            x--;
        }
        for(int j=60-(len[i]*2);j>=0;j--){
            compare[i][j] = 0;
        }
    }
    int x = digit-1;
    for(int i=60;i>60-digit;i--){
        con[i] = ((int)num[x])-48;
        x--;
    }
    for(int i=60-digit;i>=0;i--){
        con[i] = 0;
    }
    char ans[n][60];
    int final[n],max;
    for(int i=0;i<n;i++){
        x=0;
        int remain = 0;
        if(len[i]*2>digit){
            max = (len[i]*2)+1;
        }
        else{
            max = digit+1;
        }
        for(int j=60;j>=0;j--){
            int sum = con[j]+compare[i][j]+remain;
            remain = sum/10;
            ans[i][x] = (char)((sum%10)+48);
            x++;
        }
        final[i] = max;
    }
    for(int i=0;i<n;i++){
        for(int j=final[i]-1;j>=0;j--){
            if(j==final[i]-1 && ans[i][j] == '0'){
                continue;
            }
            else{
                printf("%c",ans[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
