#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct lift{
    int num;
    int fl;
};
struct person{
    int start;
    int des;
};

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    struct lift e[n];
    struct person p[m];
    for(int i=0;i<n;i++){
        e[i].num = i+1;
        scanf("%d",&e[i].fl);
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&p[i].start,&p[i].des);
    }
    for(int i=0;i<m;i++){
        int min=0;
        for(int j=0;j<n;j++){
            if(j==0){
                min = abs(p[i].start-e[j].fl);
            }
            else if(abs(p[i].start-e[j].fl) <= min){
                min = abs(p[i].start-e[j].fl);
            }
        }
        for(int j=0;j<n;j++){
            if(min == abs(p[i].start-e[j].fl)){
                e[j].fl = p[i].des;
                printf("%d\n",e[j].num);
                break;
            }
        }
    }
    
    return 0;
}
