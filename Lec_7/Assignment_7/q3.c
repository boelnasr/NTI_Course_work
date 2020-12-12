#include<stdio.h>
int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}


void main()
{
	int a[50]={0};
     int *ptr=a;
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(ptr,x);

    ptr = &a[x - 1];
 
   printf("\nElements of array in reverse order are :");
 
   for (int i = x - 1; i >= 0; i--) {
      printf("\nElement%d is :%d ", (i+1), *ptr);
      ptr--;
   }}