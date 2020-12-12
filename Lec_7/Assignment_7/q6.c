#include<stdio.h>
int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}
int print_array(int * ptr,int n){
    for (int i = 0; i <n;i++,ptr++) {
      printf("\n %d ", *ptr);}}

void swapArray(int * a, int * b, int n)
{
    int * sourceArrEnd = (a + (n - 1));   
    int * destArrEnd   = (b + (n - 1));// Pointer to last element of destination array
    while(a <= sourceArrEnd && b <= destArrEnd)
    {
        *a ^= *b;
        *b   ^= *a;
        *a ^= *b;
        a++;      
        b++;
    }
}
int main()
{
	int a[20]={0};
    int *ptr1=a;
    int b[20]={0};
    int *ptr2=b;
    int x,r;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(a,x);
    scan_array(b,x);
    swapArray(a,b,x);
    printf("after swaping\n");
    printf("Array_1:\n");
    print_array(ptr1,x);
    printf("\nArray_2:");
    print_array(ptr2,x);
}
