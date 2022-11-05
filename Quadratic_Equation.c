/* C program to solve a quadratic equation.*/

#include <stdio.h>
#include <math.h>
float a, b, c, t, u, x1, x2, res, complex_no;
int main() {
    /*General equation for a quadratic equation.*/
    printf("ax^2 + bx + c = 0\n");
    printf("\t \n");
    /*Accepting inputs for the co-efficients of the variables*/
    printf("Enter the co-efficient for the equation \n");
    printf("Enter a number for a: ");
    scanf("%f", &a);
    printf("Enter a number for b: ");
    scanf("%f", &b);
    printf("Enter a number for c: ");
    scanf("%f", &c);
    /*Where t is the discriminant d = b^2 - 4ac*/
    t = (b * b ) - (4 * a * c) ;
    if(t > 0)
    /*The equation has two unequal roots.*/
    {
        printf("The equation has two distinct real root.\n");
        printf("\t \n");
        res = sqrt(t);
        x1 = (-b + res) / (2 * a);
        x2 = (-b - res) / (2 * a);
        printf("The first root: %f\n", x1);
        printf("The second root: %f\n", x2);
    }
    else if(t == 0)
    /*The equation has two equal roots. i.e Root1 = Root2*/
    {
        printf("The equation has two equal real roots.\n");
        printf("\t \n");
        x1 = (-b) / (2 * a);
        printf("The first root: %f\n", x1);
        printf("The second root: %f\n", x1);
    }
    else if(t < 0)
    /*The equation has no real roots. It gives complex numbers as it roots.*/
    {
        printf("The equation has no real roots. \n"); 
        res = sqrt(-t);
        complex_no = (res / (2 * a));
        x1 = ((-b) / (2 * a));
        x2 = ((-b) / (2 * a));
        printf("The first root: %f + %fi\n", x1, complex_no);
        printf("The second root: %f - %fi\n", x2, complex_no);
    }
    return 0;
} 