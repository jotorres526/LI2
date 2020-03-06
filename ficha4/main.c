#include "../macros.h"
#include "arrays.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
        int tarefa;
        printf("Escolha uma tarefa de 1 a 3 (1 -> soma; 2 -> roda esquerda; 3 -> remove menores)\n");
        scanf("%d", &tarefa);
        if(tarefa > 0 && tarefa < 4) {
            int arrSize;
            printf("Qual vai ser o tamanho do array?\n");
            scanf("%d", &arrSize);
            if(arrSize > 0) {
                int arr[arrSize];
                printf("Introduza agora os elementos do array (separado por espaços ou por newlines)\n");
                FORI(arrSize) {
                    scanf("%d", (arr + i));
                } 
                int lstArg;
                printf("Introduza o ultimo argumento da tarefa %d\n", tarefa);
                scanf("%d", &lstArg);
                switch(tarefa) {
                case 1:
                    soma_elemento(arr, arrSize, lstArg);
                    break;
                case 2:
                    roda_esq(arr, arrSize, lstArg);
                    break;
                case 3:
                    remove_menores(arr, arrSize, lstArg);
                    break;
                default:
                    break;
                }
                printf("Array transformado:\n");
                FORI(arrSize) printf("%d ", arr[i]);
                putchar('\n');
            }
        }
    return 0;
}