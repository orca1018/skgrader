#include <stdio.h>
#include <string.h>
    
int main(int argc, char **argv) {
    char str[100000];
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
    }
        
    len = strlen(str);
    for (int i=0; i<len; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'	 || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            continue;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i]+=('a'-'A');
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
           	str[i]-=('a'-'A');
        }
        else {
            continue;
        }
    }
    
    for (int i=len-1; i>=0; i--) {
        printf("%c", str[i]);
    }
        
    
    return 0;
}
