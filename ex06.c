#include <stdio.h>
#include <stdlib.h>

int main() {
    int vfat[4] = {10, 20, 30, 40};
    int *p;
    
    // Pode-se fazer assim...
    p = &vfat[3];
    for(int i = 0; i < 4; i++) {
        printf("Empresa %d: %X -> %d\n", 4-i, p-i, *(p-i)); 
    }

    printf("\n");
    // Ou assim...
    p = vfat;
    for(int i = 3; i >= 0; i--) {
    	printf("Empresa %d: %X -> %d\n", i+1, p+i, *(p+i));
    }

    return 0;
}