#include <stdio.h>
void show(int x, int y);

void show(int x, int y)
{
    if (x > y)
        return;
    printf("%d Hello\n", x);
    show((x + 1), y);
}
int main()
{
    show(1, 100);
    return 0;
}
