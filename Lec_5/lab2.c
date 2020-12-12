#include <stdio.h> 
  

int Number_of_ones(int n)
{   int count=0;
    for(int i=0;i<n;i++)
    {
        count+=((n >> i) & 1);
    }
   
    return count;   
}
int main()
{
    int n,r;
    printf("Enter a positive intiger");
    scanf("%d",&n);
    r=Number_of_ones(n);
    printf("The # of one is %d",r);
    
}
