#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//Generates 2 int's and asks what's the product between those two numbers
//rand() % (max_number + 1 - minimum_number) + minimum_number
void genQuestion(int *n1, int *n2) {
    srand(time(NULL)); 
    *n1 = rand() % 10;     
    *n2 = rand() % 10;
    printf("Quanto é %d vezes %d?\n", *n1, *n2);
}

//main
int main() {
    int a, n1, n2, rchar;
    char *lc[] = {"Ótimo!", "Belo Trabalho!", "Continua assim!"};
    char *lw[] = {"Errado, tenta novamente...", "Não, tente mais uma vez.", "Não desistas!"};
    genQuestion(&n1, &n2);
    while(1) {
        rchar = rand() % 3;
        if(scanf("%d", &a) != 1) {
            printf("Introduz apenas um número.\n");
        } 
        else if( (n1 * n2) == a) {
            printf("%s\n", lc[rchar]);
            genQuestion(&n1, &n2); 
        } else {
            printf("%s\n", lw[rchar]);
            printf("Quanto é %d vezes %d?\n", n1, n2);
        }
        getchar();
    }
    return 0;
}