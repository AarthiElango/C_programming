#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int  value;
} Node;

void shallow_copy(Node *dst, const Node *src) {
    *dst = *src;
}

int main(void) {
    Node n1;
    n1.name = malloc(50);
    strcpy(n1.name, "Hello");
    n1.value = 42;

    Node n2;
    shallow_copy(&n2, &n1);

    n1.name[0] = 'Y';
    printf("n1.name = %s\n", n1.name);
    printf("n2.name = %s\n", n2.name);

    free(n1.name);
    return 0;
}

