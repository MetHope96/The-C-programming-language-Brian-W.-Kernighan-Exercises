#include <stdio.h>

#define IN  1   // dentro una parola
#define OUT 0   // fuori da una parola

int main(void) {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("Line: %d\n", nl);
    printf("Word: %d\n", nw);
    printf("Char: %d\n", nc);

    return 0;
}
