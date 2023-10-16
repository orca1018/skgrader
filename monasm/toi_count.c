#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int a[n][2];
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a[i][0],&a[i][1]);
    }
    for(int i=0;i<n;i++){
        long long int sum=((a[i][0])*(a[i][0]+1))/2;
        long long int diff = ((a[i][1])*(a[i][1]+1))/2;
        printf("%lld\n",sum-diff);
    }
    
}
