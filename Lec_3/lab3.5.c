#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d using while is : %d",n,f);
     f=i=1;
    do
    {
       f*=i;
        i++;
    } while (i<=n);
    printf("\n The Factorial of %d using do while is : %d",n,f);
    return 0;
}