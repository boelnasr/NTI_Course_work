#include<stdio.h>
int scan_array( int a[],int x) // #of elements to be filled
{
 printf("\nPlease Enter the  Array Elements\n");
    
 for(int i = 0; i < x; i++)
  {
      scanf("%d", &a[i]);
  }
 
  }
int search(int arr[], int n, int x)
{
    int i,count=0;
    for (i = 0; i < n; i++){
        if (arr[i] == x)
           count++;
        
    }
    return count;
    }
int main()
{int a[10]={0};
int r,x;
printf("enter the array elements");
scan_array(a,10);
printf("enter the value s yo be searched for");
scanf("%d",&x);
r=search(a, 10 , x);
 if (r==0)
    printf("Element is not present in array");
else
{
   printf("Element frequency the  in array is %d",r);
}
}