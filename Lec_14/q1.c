
#include <stdio.h> 
#include "../standard_types.h"

void swap(int *a, int *b) 
{ 
	u16 temp = *a; 
	*a = *b; 
	*b = temp; 
} 

void selectionSort(int a[], int n) 
{ 	u16 i, j, min_idx; 
	for (i = 0; i < n-1; i++) 
	{ 	min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (a[j] < a[min_idx]) 
			min_idx = j;  
		swap(&a[min_idx], &a[i]);}}

int print_array(u16 * ptr,u16 n){
    for (u16 i = 0; i <n;i++,ptr++) {
      printf("\n %d ", *ptr);}}

int scan_array( u16 *ptr,u16 x) 
{ printf("\nPlease Enter the  Array Elements\n");
    u16 i;
 for( i=0;i<x;i++)
scanf("%d",ptr+i);}
void merge(u16 a[], u16 m, u16 b[], u16 n, u16 sorted[]) {
  u16 i, j, k;
  j = k = 0;
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}
int main() 
{   u16 x,y,a[20]={0},b[20]={0},c[50]={0};
    printf("enter the size of the 1st array");
    scanf("%d",&x);
    scan_array(a,x);
	selectionSort(a, x); 
    print_array(a, x);
    printf("\n enter the size of the 2nd array");
    scanf("%d",&y);
    scan_array(b,x);
	selectionSort(b, x); 
	printf("Sorted array: \n"); 
	print_array(b, y); 
    merge(a,x,b,y,c);
    print_array(c,(x+y));
	return 0; 
} 
