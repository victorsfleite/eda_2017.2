#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    printf("v[0]: %X\nv+3: %X\n", &v, v+3);

    return 0;
}