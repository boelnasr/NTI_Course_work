//NTI C&embeded-c 
//Assignment_2
//Done by:Mohamed Aboelnasr
#include <stdio.h>
#include <math.h>// to fetch sqrt() function.

int main()
{   
    //Q_3_check if the input is a char 
     char exp;
    printf("\n Enter a character: ");
    scanf("%c", &exp);
    if ((exp >= 'a' && exp <= 'z') || (exp >= 'A' && exp <= 'Z'))
        printf("%c is an alphabet.\n", exp);
    else
        printf("%c is not an alphabet.", exp);
    //Q_5_check id N1 is multiable of N2
    int n1, n2;
    printf( "\n Input the first integer : " );
    scanf("%d", &n1);
    printf( "Input the second integer: " );
    scanf("%d", &n2); 
    if (n1 % n2 == 0) // if the reminder is zero then they are multibles
    printf( "\n%d is a multiple of %d.\n", n1, n2 );
    else printf( "\n%d is not a multiple of %d.\n", n1, n2 );
    //Q_7_Floor of a float number
    float x,y;
    printf( "\n Input the first float : " );
    scanf("%f", &x);
    printf( "Input the second flaot: " );
    scanf("%f", &y); 
    float sum=x+y;
    if (sum>=0)
    {sum=(int)sum; }
    else 
    {sum=(int)(sum-1);} 
    printf( "\n flor of the sum of %f and %f :%f ",x,y,sum);

    return 0;
}