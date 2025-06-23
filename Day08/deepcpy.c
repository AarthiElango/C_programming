#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int  value;
} Node;

void deep_copy(Node *dst, const Node *src) {
    dst->value = src->value;
    dst->name = malloc(strlen(src->name) + 1);
    strcpy(dst->name, src->name);
}

int main(void) {
    Node n1;
    n1.name = malloc(50);
    strcpy(n1.name, "Hello");
    n1.value = 42;

    Node n3;
    deep_copy(&n3, &n1);

    n1.name[0] = 'Y';
    printf("n1.name = %s\n", n1.name);
    printf("n3.name = %s\n", n3.name);

    free(n1.name);
    free(n3.name);
    return 0;
}

