#include <stdio.h>

void print_sp(int n);

int main() {
    int n; 
    scanf("%d", &n);
    int sp[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &sp[i]);
    }
    for (int j=0; j<n; j++) {
        print_sp(sp[j]);
    }
    
    return 0;
}

void print_sp(int n) {
    for (int k=0; k<n; k++) {
        for (int l=0; l<20; l++) {
            if (l == 19-k) {
                printf("/");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int a=n; a>0; a--) {
        for (int b=20; b>0; b--) {
            if (b == a) {
                printf("\\");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
