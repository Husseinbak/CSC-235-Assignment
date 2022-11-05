/*C program to reverse a given sentence*/
#include <stdio.h>
#include<string.h>
char i;
char statement[200];
int lenght, h;
int main() {
    printf("Enter the statement you would like to be reversed: ");
    fgets(statement, 200, stdin);
    lenght = strlen(statement);
    printf("Print statement reversal in progress...\n");
    printf("Your reversed statement is:");
    for(h = lenght -1; h >= 0; h--) {
        printf("%c", statement[h]);
    }
    return 0;
}