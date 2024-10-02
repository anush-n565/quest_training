/*
Program: Evaluate a quadratic equation
Author: Anush N
Date: 02-10-2024
*/

#include <stdio.h>
#include <math.h>  // Including math.h for sqrt function

int main() {
    float a, b, c;  // coefficients of the quadratic eqn
    float discriminant; // variable to store the discriminant
    float root1, root2; // variables to store the roots of the eqn

    //getting coefficients a, b, and c
    printf("Enter the coeff of a: ");
    scanf("%f", &a);
    printf("Enter the coeff of b: ");
    scanf("%f", &b);
    printf("Enter the coeff of c: ");
    scanf("%f", &c);

    // calculating the discriminant
    discriminant = b * b - 4 * a * c;

    // if the discriminant is positive (two distinct real roots)
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);  
        root2 = (-b - sqrt(discriminant)) / (2 * a);  
        printf("\nRoots are real and different\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);  
    }
    // if the discriminant is zero (one real root)
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("\nRoots are real and same\n");
        printf("Root = %.2f\n", root1);
    }
    // if the discriminant is negative (no real roots)
    else {
        printf("\nNo real roots exist\n");
    }

    return 0; 
}