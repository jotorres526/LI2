#include <stdlib.h>
#include <math.h>
#include <stdio.h>
//Receives 3 float's 
//Returns 0 in case they do not form a triangle (not valid)
//Returns 1 in case they form triangle (valid)
int valid(float a, float b, float c) {
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

//Receives 3 float's that form a triangle 
//If all 3 float's are equal it will print Equilateral
//If all 2 float's are equal and 1 is different it will print Isosceles
//If all 3 float's are different it will print Scalene
void type(float a, float b, float c) {
	printf("Triangle type: ");
	if (a == b && a == c) {
		printf ("Equilateral\n"); 
	} else if(a == b || a == c) { 
		printf ("Isosceles\n");
	} else {
		printf ("Scalene\n");
	}
}

//Receives 3 float's that form a triangle
//Calculates the area of said triangle using Heron's formula
float area(float a, float b, float c) {
	float s;
	float r; 
	s = (a + b + c)/2;
	r = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("This triangle has an area of: %f\n", r);
	return r;
}

//main
int main() {
	float a, b, c;
	a = b = c = 0;
	printf("Input 3 values: \n");
	scanf("%f %f %f", &a, &b, &c);
	if (valid(a, b, c) == 0) {
		printf("Invalid triangle\n");
		return -1;
	}
	type(a, b, c);
	area(a, b, c);
	return 0;
}