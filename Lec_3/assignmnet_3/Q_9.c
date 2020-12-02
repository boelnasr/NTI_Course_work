#include<stdio.h>


void main()
{   int i,n,j;
    printf("enter the height=");
    scanf("%d",&n);
   printf("\n\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
    if(i<=n/2&&(i==j||i+j==n-1)||(i>n/2&&j==n/2))
   {    printf("*");    }
    else
  {    printf(" ");
   }
 }
   printf("\n");
    }
}