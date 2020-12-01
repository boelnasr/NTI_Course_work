#include<stdio.h>


int main()
{
    int i=1;
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("the multiplication table is:");
    for(i=0;i<11;i++)
    {
      printf("%d*%d=%d\n",x,i,(x*i));
        
    }
            
}