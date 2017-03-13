#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 40;
    step = 2;

    celsius = lower;

    while (celsius <= upper) {
        fahr = (9 * celsius) / 5 + 32;
        printf("%3.1f\t%6.1f\n", fahr, celsius);
        celsius += step;
    }
}
