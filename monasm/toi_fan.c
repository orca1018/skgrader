#include <stdio.h>

int main() {
    int n,joy=0,jaew=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if((a[i]/60)%2==0 && a[i]%60 != 0){
            joy++;
        }
        else if((a[i]/60)%2!=0 && a[i]%60 != 0){
            jaew++;
        }
    }
    int ans = joy>jaew?1:joy==jaew? 2 : 3;
    printf("%d %d\n",joy,jaew);
    if(ans == 1){
        printf("Joy");
    }
    else if(ans == 3){
        printf("Jaew");
    }
    else{
        printf("Draw");
    }
    return 0;
}
