#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int remain1 = n-2 , remain2 = 0,remain3 = n-2,remain4=0;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        if(remain1!=0){
            for(int j=1;j<=remain1;j++){
                printf("_");
            }
            remain1--;
        }
        for(int j=1;j<=n-(i-1);j++){
            printf("+");
        }
        if(remain2!=0){
            for(int j=1;j<=remain2;j++){
                printf("_");
            }
            remain2++;
        }
        remain2+=remain2==0?1:0;
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        printf("*");
    }
    printf("O");
    for(int i=1;i<=n-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        if(remain3!=0){
            for(int j=1;j<=remain3;j++){
                printf("_");
            }
            remain3--;
        }
        for(int j=1;j<=i+1;j++){
            printf("+");
        }
        if(remain4!=0){
            for(int j=1;j<=remain4;j++){
                printf("_");
            }
            remain4++;
        }
        remain4+=remain4==0?1:0;
        for(int j=1;j<=n-1-(i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
