#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ap[3], *bp[3], *cp[3];
    int i, j;
    
    for(i=0; i<3; i++) {
        ap[i] = (int *)malloc(4*sizeof(int));
        bp[i] = (int *)malloc(4*sizeof(int));
        cp[i] = (int *)malloc(4*sizeof(int));
    }
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            ap[i][j] = i*4+j+1;
            bp[i][j] = 12-(i*4+j);
            cp[i][j] = ap[i][j]+bp[i][j];
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            printf("%5d", cp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
