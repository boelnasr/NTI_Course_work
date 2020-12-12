#include<stdio.h>

int sum_array(int a[],int n) // enter the size of the required array
{   int sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter element # %d: ",(i+1));
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    return sum;
}

int main()
{   int n=10;
    int a[10];
    printf("enter the values of the array\n");
    int r=sum_array(a,n);
    printf("The sum of the array= %d",r);

}