#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define CORRECT 1
#define WRONG 0

//Generates 2 int's and asks what's the product between those two numbers
//rand() % (max_number + 1 - minimum_number) + minimum_number
void genQuestion(int *n1, int *n2) {
    srand(time(NULL)); 
    *n1 = rand() % 10;     
    *n2 = rand() % 10;
    printf("Quanto é %d vezes %d?\n", *n1, *n2);
}

//Generates a comment for correct and wrong answers
//Receives an int isCorrect :: {0,1}
//if isCorrect = 1 generates correct comment, otherwise generates wrong comment 
void genComment(int isCorrect) {
    int randint;
    char *correct[] = {"Ótimo!", "Belo Trabalho!", "Continua assim!"};
    char *wrong[] = {"Errado, tenta novamente...", "Não, tente mais uma vez.", "Não desistas!"};
    randint = rand() % 3;
    if(isCorrect) printf("%s\n",correct[randint]);
    else printf("%s\n", wrong[randint]);
}

//main
int main() {
    int input, n1, n2;
    genQuestion(&n1, &n2);
    while(1) {
        if(scanf("%d", &input) != 1) {
            printf("Introduz apenas um número.\n");
        } 
        else if((n1 * n2) == input) {
            genComment(CORRECT);
            genQuestion(&n1, &n2); 
        } else {
            genComment(WRONG);
            printf("Quanto é %d vezes %d?\n", n1, n2);
        }
        getchar();
    }
    return 0;
}