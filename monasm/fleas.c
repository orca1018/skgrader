/*
Don't try to understand this shit.
                           -Monasm
*/
#include <stdio.h>

void swap(int *a,int *b){
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("A");
        return 0;
    }
    int save_n = n,ch = 1,line = 0;
    while(save_n>0){
        save_n-=ch;
        ch++;
        line++;
    }
    int max[3];
    save_n = n;
    ch = 1;
    while(n==n){
        if(save_n-ch < 0){
            max[0] = save_n;
            max[1] = ch-1;
            max[2] = ch-2;
            break;
        }
        else if(save_n-ch == 0){
            max[0] = ch;
            max[1] = ch-1;
            max[2] = ch-2;
            break;
        }
        save_n-=ch;
        ch++;
    }
    int order[line];
    for(int i=0;i<line-1;i++){
        order[i] = i+1;
    }
    order[line-1] = max[0];
    int find_mid[3];
    if(line%2==0){
        find_mid[0] = 0;
        find_mid[1] = 1;
        find_mid[2] = 0;
    }
    else{
        find_mid[0] = 1;
        find_mid[1] = 0;
        find_mid[2] = 1;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max[j]<max[j+1] && j!=2){
                swap(&max[j],&max[j+1]);
                swap(&find_mid[j],&find_mid[j+1]);
            }
        }
    }
    int column = max[0]+max[1]-1,mid;
    if(find_mid[0] == 0){
        mid = max[0];
    }
    else{
        mid = column-max[0]+1;
    }
    int ASCII = 65;
    for(int i=1;i<=line;i++){
        if(i%2==1){
            for(int j=1;j<=column;j++){
                if(j>=mid && j<=mid+(order[i-1]-1)){
                    if(ASCII>90){
                        ASCII=(ASCII-90-1)+65;
                    }
                    else if(ASCII<65){
                        ASCII = 90-(65-ASCII-1);
                    }
                    printf("%c",(char)ASCII);
                    ASCII++;
                }
                else{
                    printf(".");
                }
            }
        }
        else if(i%2==0){
            ASCII+=order[i-1]-1;
            for(int j=1;j<=column;j++){
                if(j<=mid && j>=mid-(order[i-1]-1)){
                    if(ASCII>90){
                        ASCII=(ASCII-90-1)+65;
                    }
                    else if(ASCII<65){
                        ASCII = 90-(65-ASCII-1);
                    }
                    printf("%c",(char)ASCII);
                    ASCII--;
                }
                else{
                    printf(".");
                }
            }
            ASCII+=order[i-1]+1;
        }
        printf("\n");
    }
    return 0;
}
