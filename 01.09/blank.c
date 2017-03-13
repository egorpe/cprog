#include <stdio.h>

int main()
{
    int c, prev = 0;

    while ((c = getchar()) != EOF) {
        if ((c == ' ' && prev != ' ') || c != ' ') {
            putchar(c);
            prev = c;
        }
    }
}
