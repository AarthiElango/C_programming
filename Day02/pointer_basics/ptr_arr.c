#include <stdio.h>

int main() {
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int *ptr = &arr[0][0];
    printf("%d\n", *(ptr + 4));

    return 0;
}

