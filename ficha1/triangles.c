#include <stdlib.h>
#include <math.h>
#include <stdio.h>
//Receives 3 int's 
//Returns 0 in case they do not form a triangle (not valid)
//Returns 1 in case they form triangle (valid)
int valid(int a, int b, int c) {
	int r;
	r = 0;
	if(a > abs(b - c) && a < b + c) {
		if(b > abs(a - c) && b < a + c) { 
			if(c > abs(b - a) && c < a + b) { 
				r=1;	
			}
		}
	}
	return r;
}

//Receives 3 int's that form a triangle and will print it's type accordingly
void type(int a, int b, int c) {
	printf("Triangle type: ");
	if (a == b && a == c) {
		printf ("Equilateral\n"); 
	} else if(a == b || a == c || b == c) { 
		printf ("Isosceles\n");
	} else {
		printf ("Scalene\n");
	}
}

//Receives 3 int's that form a triangle
//Calculates it's area using Heron's formula
float area(int a, int b, int c) {
	float s;
	float r; 
	s = (a + b + c)/2.0f;
	r = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("This triangle has an area of: %f\n", r);
	return r;
}

//main
int main() {
	int a, b, c;
	a = b = c = 0;
	printf("Input 3 values: \n");
	scanf("%d %d %d", &a, &b, &c);
	if (valid(a, b, c) == 0) {
		printf("Invalid triangle\n");
		return -1;
	}
	type(a, b, c);
	area(a, b, c);
	return 0;
}