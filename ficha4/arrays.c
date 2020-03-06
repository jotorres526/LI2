#include "../macros.h"
#include <stdio.h>
void soma_elemento(int *arr, int dim, int idx) {
    if(idx < dim && idx > -1) {
        int tmp = arr[idx];
        FORI(dim) arr[i] += tmp;
    }
    printf("Soma elemento: | ");
    FORI(dim) printf("%d | ", arr[i]);
    putchar('\n');
}

void roda_esq(int *arr, int dim, int shifter) {
    if(shifter > 0) {
        int tmp;
        FORI(shifter) {
            tmp = arr[0];
            FORJ(dim - 1) arr[j] = arr[j + 1];
            arr[dim - 1] = tmp;
        }
    }
    printf("Roda esquerda: | ");
    FORI(dim) printf("%d | ", arr[i]);
    putchar('\n');
}

void toEnd(int *arr, int dim, int idx) {
    int tmp;
    FOR_I_TO_N(idx, dim - 1) {
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }
}

int remove_menores(int *arr, int dim, int valor) {
    int i = 0;
    while(i < dim)
        if(arr[i] < valor) {
            toEnd(arr, dim, i);
            dim--;
        } else i++;
    printf("Remove menores: | ");
    FORI(dim) printf("%d | ", arr[i]);
    putchar('\n');
    return dim;
}