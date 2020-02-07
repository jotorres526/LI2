#include <math.h>
#include <stdio.h>

int valid(int a, int b, int c) {
	if(a > abs(b - c) && a < b+c) return 1;
	else return 0;
}

int main() {
	int a=0, b=0, c=0;
	scanf("%d %d %d\n", &a, &b, &c);
	if (valid(a, b, c) == 0) return -1;
	
	if (a == b && a == c) printf ("Triangulo Equilatero"); 
	else if (a==b) printf ("Triangulo Isóseles");
	else printf ("Triangulo Equilatero");

	return 0;
}
