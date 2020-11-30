//NTI C&embeded-c 
//Assignment_2
//Done by:Mohamed Aboelnasr
#include <stdio.h>
#include <math.h>// to fetch sqrt() function.

int main()
{   //check if the input is a char
     char exp;
    printf("\n Enter a character: ");
    scanf("%c", &exp);
    if ((exp >= 'a' && exp <= 'z') || (exp >= 'A' && exp <= 'Z'))
        printf("%c is an alphabet.\n", exp);
    else
        printf("%c is not an alphabet.", exp);
    // C Program to check Perfect Square using sqrt function 
   int n, temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = sqrt(n);

    if(temp*temp == n) printf("%d is a perfect square",n);
    else printf("%d is not a perfect square",n);
    
   
    // Convert Lowercase to Uppercase Character
   char lowerChar, upperChar;
   printf("/nEnter a lowercase Character: ");
    scanf("%c", &lowerChar);
    int ascii = lowerChar;
    upperChar = ascii-32;
    printf("\nIts Uppercase = %c", upperChar);
    return 0;
}