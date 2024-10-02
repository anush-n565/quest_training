/*
Program: Count the no. of 1s in the binary equivalent of a given number
Author: Anush N
Date: 02-10-2024
*/

#include <stdio.h>

// Function to count the no of 1s 
int countOnes(int num) {
    int count = 0;
    while(num > 0) {    //To check each bit of the number
        if((num & 1) == 1) {  //if the lsb is 1 increment the count
            count++;
        }
        num /= 2;  // dividing by 2 shifts the bits to the right
    }
    return count;
}

int main() {
    int num, count;
    printf("Enter the number: ");
    scanf("%d",&num);
    count = countOnes(num);  //calling the function to count the 1s and storing the result
    printf("No. of 1s in the binary equivalent of %d is %d\n",num,count);
    return 0;
}
