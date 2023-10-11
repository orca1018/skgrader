#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    unsigned short int N;
    bool easy = true;
    scanf("%hu", &N);
    
    int arr[N], cd;
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            continue;
        }
        if (i == 1) {
            cd = arr[i] - arr[i-1];
            if (cd < 0) {
                cd*=(-1);
            }
        } 
        int temp = arr[i] - arr[i-1];
        if (temp < 0) {
            temp*=(-1);
        }
        if (temp != cd) {
            easy = false; 
            break;
        }
    }
    
    if (easy == true) {
        printf("Easy");
    }
    else {
        printf("Not Easy");
    }
    
    return 0;
}
