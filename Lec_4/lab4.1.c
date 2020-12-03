#include<stdio.h>

int Get_max(int x,int y)
{
    if (x>y)
    {
        return(x);
    }
    else if (x<y)
    {
        return(y);
    }
    else
    {
        return(x);
    }
    
    
}
int main()
{   int N_1,N_2,max;
    printf("enter the first #:");
    scanf("%d",&N_1);
    printf("enter the second #:");
    scanf("%d",&N_2);
    max=Get_max(N_1,N_2);
    printf("the max is");
    printf("%d",max);
}