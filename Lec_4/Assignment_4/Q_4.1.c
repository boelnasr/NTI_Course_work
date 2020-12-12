#include<stdio.h>
int T_Holes(int n);
int HoleInNo( int n);
int T_Holes(int n);
int main()
{   int n,r;
    printf("Enter a positive intiger");
    scanf("%d",&n);
    r= T_Holes(n);
    printf("the total # of holes is%d",r);

    
}
/*int T_Holes(int n)
{   int temp,count=0;
    while (n!=0)
    {   temp=n%10;
     if (temp == 8)
    count += 2; 
    else if (temp== 0 || temp== 4 || temp== 6 || temp == 9)
     count++;
        n=n/10;
    }
    
    return(count);
    
}*/
