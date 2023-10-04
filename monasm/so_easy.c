#include <stdio.h>
#include <string.h>

int main(){
    char a[140],b[140];
    scanf("%s",a);
    scanf("%s",b);
    int len = strlen(a);
    int x[len],y[len],z[len];
    for(int i=0;i<len;i++){
        x[i] = ((int)a[i])-48;
        y[i] = ((int)b[i])-48;
    } 
    for(int i=len-1;i>=0;i--){
        if(x[i]>=y[i]){
            z[i] = x[i]-y[i];
        }
        else if(x[i] < y[i] && i!=0){
            z[i] = (x[i]+10)-y[i];
            x[i-1]-=1;
        }
        else if(x[i] < y[i] && i==0){
            z[i] = x[i]-y[i];
        }
    }
    for(int i=0;i<len;i++){
        printf("%d",z[i]);
    }
    return 0;
}    
