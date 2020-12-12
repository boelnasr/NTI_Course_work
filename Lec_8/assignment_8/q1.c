#include<stdio.h>

int scan_array( int *ptr,int x) // #of elements to be filled
{ printf("\nPlease Enter the  Array Elements\n");
 for(int i=0;i<x;i++)
scanf("%d",ptr+i);}
int print_array(int * ptr,int n){
    for (int i = 0; i <n;i++,ptr++) {
      printf("\n %d ", *ptr);}}
void find_max(int *a, int n)
{   int max=a[0];
    int pos=0;
    for (int i=0;i<n;i++,a++)
    { if (max<*a)
      { max=*a;
      pos=i+1;}  
    }
    printf("maximum is %d at %d", max,pos);}
  void main ()
  {
    int a[50]={0};
    int x;
    printf("\nPlease Enter the Size of the Array\n");
    scanf("%d", &x);
    scan_array(a,x);
    find_max(a,x);
  }