
#include <stdio.h> 
#include "../standard_types.h"

void swap(int *a, int *b) 
{ 
	u16 temp = *a; 
	*a = *b; 
	*b = temp; 
} 

void selectionSort(int a[], int n) 
{ 
	u16 i, j, min_idx; 
	for (i = 0; i < n-1; i++) 
	{ 	min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (a[j] < a[min_idx]) 
			min_idx = j;  
		swap(&a[min_idx], &a[i]); 
	} 
} 
void printArray(u16 arr[], u16 size) 
{ 
	u16 i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int scan_array( u16 *ptr,u16 x) 
{ printf("\nPlease Enter the  Array Elements\n");
    u16 i;
 for( i=0;i<x;i++)
scanf("%d",ptr+i);}
int main() 
{   u16 x,a[50]={0};
    printf("enter the size of the array");
    scanf("%d",&x);
    scan_array(a,x);
	selectionSort(a, x); 
	printf("Sorted array: \n"); 
	printArray(a, x); 
	return 0; 
} 
