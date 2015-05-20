#include <stdio.h>

int main() {
    unsigned int w;
    unsigned char x;
    unsigned short y;
    unsigned long z;
    int counter;
    w = x = y = z = 1;
    counter = 0;
    while(w != 0) {
        w <<= 1;
        counter++;
    }
    printf("%d\n", counter);
    counter = 0;
    while(x != 0) {
        x <<= 1;
        counter++;
    }
    printf("%d\n", counter);
    counter = 0;
    while(y != 0) {
        y <<= 1;
        counter++;
    }
    printf("%d\n", counter);
    counter = 0;
    while(z != 0) {
        z <<= 1;
        counter++;
    }
    printf("%d\n", counter);
    counter = 0;
}
