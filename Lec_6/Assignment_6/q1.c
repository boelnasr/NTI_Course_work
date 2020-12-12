#include<stdio.h>
int n;
int scan_array( int a[],int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i = 0; i < x; i++)
  {scanf("%d", &a[i]);}}
 int deleteElement(int a[], int size, int x) 
{   int i; 
   for (i=0; i<size; i++) 
      if (a[i] == x) 
         break; 
   if (i < size) 
   {  size = size - 1; 
     for (int j=i; j<size; j++) 
        a[j] = a[j+1]; } 
   return size; } 
int print_array(int array[], int n)
{   printf("the array is {");
    int i;
    for (i=0;i<n;i++)
        printf("%d,\t",array[i]); 
    printf("}");
    printf("\n");}
int main ()
{    int a[50]={0};
    int x,r,d;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(a,x);
    print_array(a,x);
    printf("\nPlease Enter the  Element to delete \n");
    scanf("%d",&d);
    r=deleteElement(a,x,d);
    if (r==x)
        printf("the element was n't found");
    else   
     print_array(a,r);
}

