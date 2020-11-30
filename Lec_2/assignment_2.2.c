//Program to simulate a simple calculator using switch statement
#include <stdio.h>
#include <math.h>// to fetch sqrt() function.

int main()
{ 
    //Q_1_C Program to check Perfect Square using sqrt function 
   int n, temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = sqrt(n);
    if(temp*temp == n) printf("%d is a perfect square",n);
    else printf("%d is not a perfect square",n);
    //Q_2 simple Calaculator
    int a, b, result;
    char op; // to store the operator
    
    printf("\nEnter an expression: ");
    scanf("%d%c%d", &a, &op, &b); //write the equation

    switch(op)
    {
        case '+':
            result = a + b;
             printf("Result = %d", result);
            break;
        case '-':
            result = a - b;
             printf("Result = %d", result);
            break;
        case '*':
            result = a * b;
             printf("Result = %d", result);
            break;
        case '/':
            result = a / b;
             printf("Result = %d", result);
            break;              
    }
    
    return 0;
    
    
    }