#include <stdio.h>

struct print{
    int x;
    int y;
    char ch;
};


int main()
{
    char a[1000000];
    scanf("%s",a);
    char *pA;
    int len = 0;
    for(pA=a;*pA!='\0';pA++){
        len++;
    }
    struct print f[len];
    int x=1,y=1;
    f[0].x = 1;
    f[0].y = 1;
    f[0].ch = 97;
    int xmax=1,ymax=1;
    for(int i=1;i<len;i++){
        if(a[i]=='D'){
            y++;
        }
        else if(a[i]=='U'){
            y--;
        }
        else if(a[i]=='L'){
            x--;
        }
        else if(a[i]=='R'){
            x++;
        }
        xmax = x>xmax?x:xmax;
        ymax = y>ymax?y:ymax;
        f[i].x = x;
        f[i].y = y;
        f[i].ch = 97+i;
        if(97+i>122){
            f[i].ch = 65+i-26;
        }
        for(int j=0;j<i;j++){
            if(f[j].x == f[i].x && f[j].y == f[i].y){
                f[j].ch = f[i].ch;
            }
        }
    }
    for(int i=1;i<=ymax;i++){
        for(int j=1;j<=xmax;j++){
            int con = 0;
            for(int k=0;k<len;k++){
                if(f[k].x == j && f[k].y == i){
                    printf("%c",f[k].ch);
                    con = 1;
                    break;
                }
            }
            if(con == 0){
                printf(".");
            }
        }
        printf("\n");
    }
}
