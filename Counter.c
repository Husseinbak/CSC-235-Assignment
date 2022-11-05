/*C program to count 1 - N */

#include <stdio.h>
int number;
int main() {
    /*User enters value for N*/
    printf("Enter a number: ");
    scanf("%i", &number);
    printf("\t \n");
    printf("Printing 1 to %i \n" , number);
    printf("\t \n");

    /*Prints out 1 to the number inputted by user.*/
    for(int start=1; start <= number; start++) {
        printf("%i \n", start);
    }


    return 0;
}
