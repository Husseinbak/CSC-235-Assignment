/*C program to accept the names of 10 people*/

#include <stdio.h>
int main () {
    char name[100];
    /*For loop to ask for name 10 times.*/
    for(int start = 1; start < 11; start++){
        printf("Enter your name: ");
        fgets(name, 100, stdin);
    }
    
    return 0;
}
