#include <stdio.h>

int main() {
    int c;
    printf("%d\n", EOF);
    while((c = getchar()) != EOF) {
        putchar(c);
        printf("\n%d\n", c != EOF); 
    }
    printf("%d\n", c != EOF); 
}
