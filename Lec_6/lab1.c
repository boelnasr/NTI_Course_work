#include<stdio.h>
int n;
int insert(int a[] ,int pos, int x)
{   n=x;
    for (int i = n-1; i >= pos; i--)
        a[i] = a[i - 1];
   
    a[pos - 1] = x;
    n++;
}
int print_array(int array[], int n)
{
    printf("the array is {");
    int i;
    for (i=0;i<n;i++)
        printf("%d,\t",array[i]); 
    printf("}");
    printf("\n");
}
int scan_array( int a[],int x) // #of elements to be filled
{
 printf("\nPlease Enter the  Array Elements\n");
    
 for(int i = 0; i < x; i++)
  {
      scanf("%d", &a[i]);
  }
 
  }
int main()
{int a[10]={0};
 int size;
printf("\nPlease Enter the Size of the Array\n");
scanf("%d", &size);
scan_array(a,size);
insert(a,5,11);
print_array(a,size+1);
}