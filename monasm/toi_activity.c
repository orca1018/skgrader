#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    
    long long int low = n/2;
    long long int remain=1;
    for(int i=low+1;i<=n;i++){
        remain*=i;
    }
    long long int bottom = 1;
    for(int i=1;i<=n-low;i++){
        bottom*=i;
    }
    if(n%2==1){
        printf("%lld",remain*2/bottom);
    }
    else{
        printf("%lld",remain/bottom);
    }
}
