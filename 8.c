#include <stdio.h>

int main() {
    int count, c;
    count = 0;
    while((c = getchar()) != EOF) {
        if(c == '\t' || c == ' ' || c == '\n') {
            count++;
        }
    }
    printf("%2d\n", count);
}
