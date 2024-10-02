/*
Program: Evaluate a quadratic equation
Author: Anush N
Date: 02-10-2024
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter the coeff of a: ");
    scanf("%f", &a);
    printf("Enter the coeff of b: ");
    scanf("%f", &b);
    printf("Enter the coeff of c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n Root 2 = %.2f",root1, root2);
    }

    else if(discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same\n");
        printf("Root = %.2f", root1);
    }
    else {
        printf("No real root exists");
    } 

    return 0;
}