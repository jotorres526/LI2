#include "../macros.h"
#include <stdio.h>
void soma_elemento(int *arr, int dim, int idx) {
    if(idx < dim && idx > -1) {
        int tmp = arr[idx];
        FORI(dim) arr[i] += tmp;
    }
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
}


//Needs some bug fixing to preserve the order
void toEnd(int *arr, int dim, int idx) {
    int tmp;
    FOR_I_TO_N(idx, dim) {
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }
}

int remove_menores(int *arr, int dim, int valor) {
    int i = 0;
    int j = dim;
    while(i < j)
        if(arr[i] < valor) {
            roda_esq(arr + i, dim - i, 1);
            j--;
        }
        else i++;
    return j;
}