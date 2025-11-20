#include <stdio.h>

#define MAX_IDS 32

int main () {
    int ids[MAX_IDS] = {0,1,2};
    //int ids[] = {1,2,3,4,5,6,7};
    
    printf("%d\n", ids[7]);
    
    ids[3] = 0b11;
    
    printf("%d\n", ids[3]);
    
    return 0;
}