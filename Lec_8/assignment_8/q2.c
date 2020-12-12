#include<stdio.h>


void swap(int *a,int *b)
{*a ^= *b;
  *b   ^= *a;
  *a ^= *b;
}
void main()
{   int x,y;
    printf("enter the first #");
    scanf("%d",&x);
    printf("\nenter the second #");
    scanf("%d",&y);
    swap(&x,&y);
    printf("after the swap %d %d",x,y);
}