void drawWhitespaces() {
    
}

void imprime_triangulo(int num_linhas){
    int whitespaces, linesLeft;
    char letter;
    linesLeft = num_linhas;
    for(int i = 0; i < num_linhas; i++) {
        letter = 'A'; 
        whitespaces = 2 * linesLeft - 1;
        for(int j = whitespaces; j > 0; j--) putchar(' ');   
    }
}