#include <stdio.h> 
#include "../standard_types.h"

void insertionSort(u16 arr[], u16 n) 
{ 
	u16 i, temp, j; 
	for (i = 1; i < n; i++) { 
		temp = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > temp) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; } 
		arr[j + 1] = temp;} 
} 
int scan_array( u16 *ptr,u16 x) 
{ printf("\nPlease Enter the  Array Elements\n");
    u16 i;
 for( i=0;i<x;i++)
scanf("%d",ptr+i);}

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
int main() 
{ 
	s16 a[50],n; 
	printf("enter the number of elements");
    scanf("%d",&n);
     scan_array(a,n);
	insertionSort(a, n); 
   
	printArray(a, n); 

	return 0; 
} 
