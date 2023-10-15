#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int len = 3+(2*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(len-1)/2-i;j++){
            printf(" ");
        }
        for(int k=1;k<=1+(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
    int space = (len-3)/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<space-i;j++){
            printf(" ");
        }
        for(int j=1;j<=3+(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<len;i++){
        printf("*");
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<space-i;j++){
            printf(" ");
        }
        for(int j=1;j<=3+(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<(len-1)/2-i;j++){
            printf(" ");
        }
        for(int k=1;k<=1+(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
}
