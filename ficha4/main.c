#include "../macros.h"
#include "arrays.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//argc -> argument counter
//argv[] -> argument vector
    //array of strings
    //argv[0] name of the program
int main(int argc, char **argv) {
    if(argc == 5) {
        int tarefa = atoi(argv[1]);
        int arrSize = atoi(argv[2]);
        int arr[arrSize];
        char *strtmp = strtok(argv[3], ",");
        FOREACH(arrSize) {
            arr[i] = atoi(strtmp);
            strtmp = strtok(NULL, ","); 
        } 
        int lstArg = atoi(argv[4]);
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
    }
    return 0;
}