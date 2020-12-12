#include<stdio.h>
int scan_array( int a[],int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i = 0; i < x; i++)
  {scanf("%d", &a[i]);}}
int print_array(int array[], int n)
{   printf("the array is {");
    int i;
    for (i=0;i<n;i++)
        printf("%d,\t",array[i]); 
    printf("}");
    printf("\n");}
int palindrome(int arr[], int x) {
   int i=x;
   int start=x-i;
   int end=i-1;
   // base case
   if (start >= end) {
      return 1;   }
   if (arr[start] == arr[end]) {
       i--;
      return palindrome(arr,i );   }
    else {
      return 0; }}
int main ()
{    int a[50]={0};
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(a,x);
    print_array(a,x);
    r=palindrome(a,x);
    if (r==1)
    printf("the array is palindrome");
    else
    printf("the array is n't palindrome");
    
}
