#include <stdio.h>

int main() {
    unsigned int a = 0xFFFFFFFF;
    int b = -1;
    int c = a + b;
    printf("%d\n", c);
    return 0;
}

