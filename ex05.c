#include <stdio.h>
#include <stdlib.h>

int main() {
    int vfat[4] = {10, 20, 30, 40};
    
    for(int i = 4; i > 0; i--) {
       printf("Empresa %d: %X -> %d\n", i, &vfat[i-1], vfat[i-1]); 
    }

    return 0;
}