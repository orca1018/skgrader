#include <stdio.h>
#include <math.h>

int main() {
    int arr[4][6];
    for (int i=0; i<4; i++) {
        scanf("%d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5]);
    }
    int sum[6] = {0};
    for (int j=0; j<6; j++) {
        for (int k=0; k<4; k++) {
            sum[j]+=arr[k][j] * pow(2, 3-k); 
        }
    }
    
    printf("%d%d:%d%d:%d%d", sum[0], sum[1], sum[2], sum[3], sum[4], sum[5]);
    
    return 0;
}
