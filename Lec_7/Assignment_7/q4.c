#include<stdio.h>
int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}
int smallest(int *ptr,int n)
{
 int small=*ptr;
      for(int i=0;i<n;i++,ptr++)
        {    if(*ptr<small)
                  small=*ptr;}
      printf("\nSmallest Element : %d",small);
}
int main()
{
	int a[50]={0};
     int *ptr=a;
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(ptr,x);
    smallest(ptr,x);
    
    
    }