#include <stdio.h>

int main() {
    int fahr, step;
    step = 20;
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    for(fahr = 300; fahr >= 0; fahr -= step) {
        printf("%3d%6.0f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
