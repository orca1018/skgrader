#include <stdio.h>
#include <stdbool.h>

bool Dota_mai(unsigned long long int num[]) {
    if (2*num[0] != num[1]) {
        return false;
    }
    if (num[7] != num[0] + num[1]) {
        return false;
    }
    long long int temp = num[2] - num[4];
    if (temp < 0 ) {
        temp = -temp;
    }
    if (temp != num[3]) {
        return false;
    }
    if ((num[6]) != (num[5])*(num[0])) {
        return false;
    }
    if (num[5] != (int)(num[4])/(num[0])) {
        return false;
    }
    unsigned long long int sum8 = 0;
    for (int i=0; i<8; i++) {
        sum8+=(num[i]);
    }
    if (num[8] != sum8%19) {
        return false;
    }
    
    return true;
}

int main(int argc, char **argv) {
    unsigned long long int num[9];
    for (int i=0; i<9; i++) {
        scanf(" %llu", &num[i]); 
    }
    
    printf("%s", (Dota_mai(num) == true) ? "YES" : "NO");
    
    return 0;
}
