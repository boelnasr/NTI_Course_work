#include<stdio.h>


int main()
{
    int i=1;
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("the multiplication table is:");
    while (x!=11)
    {
      printf("%d*%d=%d",x,i,(x*i));

    }
            
}