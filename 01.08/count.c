#include <stdio.h>

/* blank counter (space, tab and newline) */
int main()
{
    int c, count = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++count;
        }
    }

    printf("%d", count);
}
