#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10, b = 15;
    int max = ((a + b) + (abs(a - b))) / 2;
    int min = ((a + b) - (abs(a - b))) / 2;
    printf("min %d max %d\n", min, max);
  
    return 0;
}