#include <stdio.h>

struct top{
    int x1;
    int x2;
    int y1;
    int y2;
};

int main() {
    int n;
    scanf("%d",&n);
    int a[n],max = 0,len = 0,sum = 0;
    struct top p[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        len += a[i]*2;
        p[i].x1 = (sum*2)+a[i];
        p[i].x2 = p[i].x1+1;
        p[i].y1 = a[i];
        p[i].y2 = a[i];
        sum+=a[i];
        max = i==0? a[i]:max<=a[i]? a[i]:max;
    }
    for(int i=max;i>=1;i--){
        for(int j=1;j<=len;j++){
            int con = 0;
            for(int k=0;k<n;k++){
                if(p[k].x1==j && p[k].x2!=j && p[k].y1==i){
                    printf("/");
                    p[k].x1-=1;
                    p[k].y1-=1;
                    con = 1;
                }
                else if(p[k].x1!=j && p[k].x2==j && p[k].y2==i){
                    printf("\\");
                    p[k].x2+=1;
                    p[k].y2-=1;
                    con = 1;
                }
            }
            if(con!=1){
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
