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
//The vertical size of the triangle is given by the parameter 'height' 
void imprime_triangulo(int height) {
    for(int i = 1; i <= height; i++) {
        drawSpaces(height, i);
        drawSeq(height, i);
        putchar('\n');
    }
}

//Prints a sequence of characters forming a diamond
//The vertical size of the diamond is given by the parameter 'height' 
//Starts out by calculating the "fstHalf" and prints a triangle based on that height
//Prints an inverted triangle based on the "sndHalf" 
//fstHalf >= sndHalf
void imprime_losango(int height) {
    int fstHalf, sndHalf;
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

//TODO
void imprime_hexagono(int height){

}