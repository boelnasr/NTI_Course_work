#include<stdio.h>
int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}
int print_array(int array[], int n)
{   printf("the array is {");
    int i;
    for (i=0;i<n;i++)
        printf("%d,\t",array[i]); 
    printf("}");
    printf("\n");}
void copy_array(int *a,int *b,int n){
    for (int i = 0; i < n; i++,a++,b++)
    {   *b=*a;           }
    
}
int main()
{
	int a[20]={0};
    int *ptr1=a;
    int copied_arr[50]={0}; 
    int *ptr2=copied_arr;
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(ptr1,x);
    printf("after coping\n");
    copy_array(ptr1,ptr2,x);
    printf("Array_2:");
    print_array(copied_arr,x);
}
