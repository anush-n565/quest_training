/*
Program: Count the number of 1's in the binary equivalent of a given number
Author: Anush N
Date: 02-10-2024
*/

#include <stdio.h>

int main() {
    int num, count = 0;  // num is the input number, count keeps track of 1's

    // getting the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // counting the number of 1's in binary representation
    while (num) {
        count += num & 1;  // increment count if the last bit is 1
        num >>= 1;         // right shift num by 1 to check the next bit
    }

    printf("Number of 1's in the binary representation: %d\n", count);

    return 0; 
}
