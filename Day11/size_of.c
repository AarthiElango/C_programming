#include <stdio.h>
#define size_of(x) ((char *)(&x + 1) - (char *)(&x))

int main()
{
    double n;
    printf("%d bytes\n", size_of(n));
    
    return 0;
}