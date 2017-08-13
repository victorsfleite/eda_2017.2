#include <stdio.h>
#include <stdlib.h>

int main() {
    int p = 100;
    int *ptr = &p;

    // printf (*ptr)++;
    // printf("%d\n", p++);
    printf("%d\n", (*ptr)++);
    printf("%d\n", p);
    printf("%d\n", *(ptr++));

    return 0;
}