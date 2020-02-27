#include <stdio.h>
#include <math.h>

//Calculates the amount of spaces that must be printed in the beginning of a line
//Based on max height and current line
//Prints 'spaces' amount of spaces
void drawSpaces(int height, int line) {
    int spaces;
    spaces = 2 * (height - line);
    for(int i = 0; i < spaces; i++) putchar(' ');
}

//Calculates a line's sequence
//Based on max height and current line
//Prints said char sequence
//Ex: 'A' 'B' 'C' 'B' 'A'
void drawSeq(int height, int line) {
    char nxtChar, nxtMid;
    nxtChar = 'A';
    nxtMid = 'A' + (line - 1);
    while(nxtChar != nxtMid) {
        putchar(nxtChar++);
        putchar(' ');
    }
    while(nxtChar >= 'A') {
        putchar(nxtChar--);
        putchar(' ');
    }
}


//Prints a sequence of characters forming a triangle
//height needs to be greater than 1
void imprime_triangulo(int height) {
    if(height < 2) {
        printf("Um triangulo necessita de uma altura maior que 1.\n");
        return;
    }
    for(int i = 1; i <= height; i++) {
        drawSpaces(height, i);
        drawSeq(height, i);
        putchar('\n');
    }
}

//Prints a sequence of characters forming a diamond
//Starts out by printing a triangle based on given height
//Then, prints an inverted triangle with the same height, removing the duplicated middle sequence
//height needs to be greater than 1
void imprime_losango(int height) {
    int sndHalf;
    if(height < 2) {
        printf("Um losango necessita de uma altura maior que 1.\n");
        return;
    }
    
    sndHalf = height - 1;
    imprime_triangulo(height);
    for(int i = sndHalf; i > 0; i--) {
        drawSpaces(height, i); //The spaces are calculated based on the total height
        drawSeq(sndHalf, i);
        putchar('\n');
    }
}


//Receives an hexagon line and height
//Calculates the shape of that line and prints it
void drawHexLine(int height, int line) {
    int nspaces, ntags;
    nspaces = height - line; //Last line has 0 spaces
    ntags = height + 2 * (line - 1); //number of # starts out equal to height in the first line and for each other line adds 2 #
    for(int j = 0; j < nspaces; j++) putchar(' ');
    for(int j = 0; j < ntags; j++) {
        if (j == 0 || j == (ntags - 1) || line == 1) putchar('#');
        else putchar(' ');
    }
    putchar('\n');
}

//Prints a sequence of characters forming a hexagon
//Starts out by printing the upper half
//Then, prints the bottom part based on the 'sndHalf'
//height needs to be greater than 1
void imprime_hexagono(int height){
    int sndHalf;
    if(height < 2) {
        printf("Um hexagono necessita de uma altura maior que 1.\n");
        return;
    }
    sndHalf = height - 1; //- 1 to not duplicate middle line
    for(int line = 1; line <= height; line++) {
        drawHexLine(height, line);
    }
    for(int line = sndHalf; line > 0; line--) {
        drawHexLine(height, line);
    }
}