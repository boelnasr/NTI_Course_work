#include <stdio.h> 
#include<stdlib.h>
#include "../standard_types.h"
int swap (u32 *a ,u32 *b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int buble(u32* ptr, u16 n)
{
    int i, j ;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (*(ptr+j)>*(ptr+j+1))
            {
                swap((ptr+j),(ptr+j+1));
            }
        }
        
    }

}
int scan_array( u32 *ptr,u16 x) 
{ printf("\nPlease Enter the  Array Elements\n");
    u16 i;
 for( i=0;i<x;i++)
scanf("%d",ptr+i);}
void printArray(u32 *ptr, u16 n) 
{ 
	u16 i; 
	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr+i)); 
	printf("\n"); 
} 
  
int main()
{   u16 n;
    printf("enter the size of array");
    scanf("%d",&n);
    u32 *ptr =(u32*)malloc(n*sizeof(u32));
    scan_array(ptr,n);
    buble(ptr,n);
    printArray(ptr,n);




}