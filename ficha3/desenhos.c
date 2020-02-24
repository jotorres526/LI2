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

//Calculates a line's character sequence
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
//Starts out by calculating the "fstHalf" and prints a triangle based on its height
//Then, prints an inverted triangle based on the "sndHalf" 
//fstHalf >= sndHalf
void imprime_losango(int height) {
    int fstHalf, sndHalf;
    
    if(height < 3) {
        printf("Um losango necessita de uma altura maior que 2.\n");
        return;
    }
    
    fstHalf = (height + 1) / 2; //adding 1 to height to ensure it's always superior to 'sndHalf'
    sndHalf = height - fstHalf;
    imprime_triangulo(fstHalf);
    //Starts the loop on the sndHalf but still prints spaces based on the first half
    //so the middle line doesn't print twice, but the spaces display correctly
    for(int i = sndHalf; i != 0; i--) {
        drawSpaces(fstHalf, i);
        drawSeq(sndHalf, i);
        putchar('\n');
    }
}

//Receives an hexagon line and height
//Prints a line of that hexagon
void drawHexLine(int height, int line) {
    int nspaces, ntags;
    nspaces = height - line;
    ntags = 2 + 2 * line;
    for(int j = 0; j < nspaces; j++) putchar(' ');
    for(int j = 0; j < ntags; j++) {
        if (j == 0 || j == (ntags - 1) || line == 1) putchar('#');
        else putchar(' ');
    }
    putchar('\n');
}

//Prints a sequence of characters forming a hexagon
//Starts out by calculating the "fstHalf" and prints the top part of the shape
//Then, prints the bottom part based on the "sndHalf" 
//fstHalf >= sndHalf
void imprime_hexagono(int height){
    int fstHalf, sndHalf;
    if(height < 3) {
        printf("Um hexagono necessita de uma altura maior que 2.\n");
        return;
    }
    fstHalf = (height + 1) / 2;
    sndHalf = height - fstHalf;
     //4 + 2(lines - 1) (=) 4 + 2lines - 2 (=) 2 + 2lines
    for(int line = 1; line <= fstHalf; line++) {
        drawHexLine(fstHalf, line);
    }
    for(int line = sndHalf; line > 0; line--) {
        drawHexLine(fstHalf, line);
    }
}