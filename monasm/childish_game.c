#include <stdio.h>

struct word{
    int left;
};

int main(){
    char n;
    scanf("%c",&n);
    struct word w[6];
    char a[6][1000000];
    int maxl=0,maxr=0;
    for(int i=0;i<6;i++){
        int countl=0;
        scanf("%s",a[i]);
        char *pA;
        int len=0,con=0;
        for(pA=a[i];*pA!='\0';pA++){
            len++;
            if(*pA == n){
                con=1;
            }
            if(con==0){
                countl++;
            }
        }
        w[i].left = countl;
        maxl = maxl<countl?countl:maxl;
        int countr = len-countl-1;
        maxr = maxr<countr?countr:maxr;

    }
    int row = maxl+maxr+1;
    int mid = maxl+1;
    for(int i=0;i<6;i++){
        for(int j=1;j<=row;j++){
            if(mid-w[i].left==j){
                char *p;
                for(p=a[i];*p!='\0';p++){
                    printf("%c",*p);
                    j++;
                }
                j--;
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    
    return 0;
}

