#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//Generates 2 int's and returns the product between those numbers
int genQuestion() {
    int n1, n2, m;
    srand(time(NULL)); 
    n1 = rand() % 10;     
    n2 = rand() % 10;
    printf("Quanto é %d vezes %d?\n", n1, n2);
    m = n1 * n2;
    return m;
}

//main
int main() {
    int q, a;
    q = genQuestion();
    while(1) {
        scanf("%d", &a);
        if(q == a) {
            printf("Muito bem!!!\n");
            q = genQuestion(); 
        } else {
            printf("Errado. Tenta novamente!\n");
        }
    }
    return 0;
}