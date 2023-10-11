#include <stdio.h>

void display(char ch) {
    if (ch == 'L') {
        printf("#\n#\n###\n");
    }
    else if (ch == 'O') {
        printf("###\n# #\n###\n");
    }
    else if (ch == 'V') {
        printf("# #\n# #\n #\n");
    }
    else if (ch == 'E') {
        printf("###\n##\n###\n");
    }
}

int main(int argc, char *argv[]) {
    char love[5];
    scanf("%[LOVE]", love);

    for (int i=0; i<4; i++) {
        display(love[i]);
        printf("\n");
    }

    return 0;
}