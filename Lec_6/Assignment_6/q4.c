#include<stdio.h>

int n;
int insert(int a[] ,int pos, int x)
{   n=x;
    for (int i = n-1; i >= pos; i--)
        a[i] = a[i - 1];
   
    a[pos - 1] = x;
    n++;
}
void printDuplicate(int arr[], int size) 
{ 
  int i, j; 
  printf(" Repeating elements is "); 
  for(i = 0; i < size; i++) 
    for(j = i+1; j < size; j++) 
      if(arr[i] == arr[j]) 
        printf(" %d ", arr[i]); 
}      

int main()
{   int a[101];
    //create the array
    for (int i = 0; i < 100; i++)
        a[i]=i;
    insert(a,66,8);
    printDuplicate(a,101);
    
    
    
}