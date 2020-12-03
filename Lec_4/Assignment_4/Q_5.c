#include<stdio.h>
#include<math.h>

int CheckNumber( int n)
{   
    int r;
    int s= sqrt(n);
    int c = sqrt(n);
    if (n %s==0)
       r=1;
    else if(n% c== 0)
        r=0;
    else
         r=-1;
    return("%d",r);
}


int main()
{   int n,r;
    printf("Enter a positive intiger");
    scanf("%d",&n);
    r= CheckNumber(n);
    if (r==1)
        printf("the number is of power of 2");
    else if (r==0)
        printf("the number is of power of 3");
    else
        printf("the number is neither of power of 2 nor power of 3");
    
}