/*C program to say Hello world to your Lecturer*/

#include <stdio.h>
char lec_name[100];

int main()
{
    /*To get input for lecturers name*/
    printf("Enter your lecturers name: ");
    fgets(lec_name,100, stdin);

    /*Prints Hello world to your lecturer*/
    printf("Hello world! %s \n", lec_name);
    return 0;
}
