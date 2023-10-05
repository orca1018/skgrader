#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int line = (n*2)-1;
    int column = (n*2)-1;
    int p1 = 1,p2 = column;
    int con = 0;
    for(int i=1;i<=line;i++){
        for(int j=1;j<=column;j++){
            if(j==p1 && j==p2){
                con=1;
                printf("*");
            }
            else if(j<=p1 || j>=p2){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        p1+=con==0?1:-1;
        p2+=con==0?-1:1;
        printf("\n");
    }
    return 0;
}
