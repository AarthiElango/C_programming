//faster way to multiply by 9
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int product= (n<<3)+n;
    printf("%d*9 is %d",n,product);
    return 0;
}
