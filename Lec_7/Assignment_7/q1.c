#include <stdio.h>
int sum_array(int *ptr, int n); 
int scan_array( int *ptr,int x);
void main()
{
	int a[50]={0};
     int *ptr=a;
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(ptr,x);
	int sum=0;
   	sum = sum_array(ptr,x); 
    printf("Sum of all array elements = %5d\n", sum);
 
}
int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}

int sum_array(int *ptr,int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++) 
        {
		sum += *(ptr + i);
	}
	return(sum);
 
}