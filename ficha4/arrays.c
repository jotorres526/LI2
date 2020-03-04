#include "../macros.h"
#include <stdio.h>
void soma_elemento(int *arr, int dim, int idx) {
    if(idx < dim && idx > -1) {
        int tmp = arr[idx];
        FOREACH(dim) arr[i] += tmp;
    }
    printf("Array soma: | ");
    FOREACH(dim) printf("%d | ", arr[i]);
    putchar('\n');
}

void roda_esq(int *arr, int dim, int shifter) {
    if(shifter > 0) {
        FOREACH(shifter) {
            //for(int j = 0; j < dim; j++)
        }
    }
}
int remove_menores(int *arr, int dim, int valor) {
    int i = 0;
    return i;
}