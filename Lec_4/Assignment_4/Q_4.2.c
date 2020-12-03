#include<stdio.h>

int HoleInNo(int n)
{   int i=0;
    switch (n)
    {
    case '0':
    case '4':
    case '6':
    case '9':
        i++;
        break;
    case '8':
        i+=2;
    default:
        break;
    }
    return(i);
}
int T_Holes(int n)
{   int temp,count=0;
    while (n!=0)
    {   temp=n%10;
        count+=HoleInNo(temp);
        n=n/10;
    }
    

    
}
