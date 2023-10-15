#include <stdio.h>
#include <string.h>

typedef struct {
    char word[17];
    int len;
} data;

int main(int argc, char **argv) {
    int N, T, P, Z;
    scanf("%d %d %d %d", &N, &T, &P, &Z);

    data words[N];
    for (int i=0; i<N; i++) {
        scanf(" %16s", words[i].word);
        words[i].len = strlen(words[i].word);
    }

    int req_words = P/Z, t_count = 0;
    if (P % Z != 0) {
        req_words++;
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N-i-1; j++) {
            if (words[j].len > words[j+1].len) {
                data temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }

    for (int i=0; i<req_words; i++) {
        t_count += words[i].len;
    }

    printf("%s", (t_count > T) ? "Zombies ate my brain." : "Oyeabi");

    return 0;
}