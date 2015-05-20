#include <stdio.h>

int main() {
    int fahr, cel;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 20;
    cel = lower;
    printf("%s\t%s\n", "Celsius", "Fahrenheit");
    while(cel <= upper) {
        fahr = 9 * cel / 5 + 32;
        printf("%d\t%d\n", cel, fahr);
        cel += step;
    }
}

