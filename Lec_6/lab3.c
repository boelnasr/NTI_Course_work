#include <stdio.h>
 
int BinarySearching(int a[], int max, int element)
{
      int low = 0, high = max - 1, middle;
      while(low <= high)
      {
            middle = (low + high) / 2;
            if(element > a[middle])
                  low = middle + 1; 
            else if(element < a [middle])
                  high = middle - 1; 
            else
                  return middle;
      }
      return -1;
}
int scan_array( int a[],int x) // #of elements to be filled
{
 printf("\nPlease Enter the  Array Elements\n");
    
 for(int i = 0; i < x; i++)
  {scanf("%d", &a[i]);  }}
int buble(int array[], int n)
{    int i, j ;
    for(i=0;i<n-1;i++)
    {for (j=0;j<n-i-1;j++)
        {if (array[j]>array[j+1])
            {   int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }}}}
int print_array(int array[], int n)
{
    printf("the array is {  ");
    int i;
    for (i=0;i<n;i++)
        printf("%d,\t",array[i]); 
    printf("}");
    printf("\n");
}
int main()
{
int a[10]={0};
int r,x;
printf("enter the array elements");
scan_array(a,10);
buble(a,10);
printf("the array after sorting");
print_array(a,10);
printf("enter the element to search for");
scanf("%d",&x);
r=BinarySearching(a,a[9],x);
if (r==-1)
{
   printf("the element is in the list");
}
else
{
    printf("the index of the elemnt is %d",r+1);
}



}