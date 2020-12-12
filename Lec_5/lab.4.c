#include<stdio.h>

int main()
{   int a[10];
    int sum=0,avg;
    for (int i = 0; i < 10; i++)
    {
        printf("enter element # %d: ",(i+1));
        scanf("%d",&a[i]);
        sum+=a[i];
    }
   
    /*for (int i = 9; i >= 0; i--)
    {
        sum+=a[i];
    }*/
    printf("the value of the sum is %d:\n ",sum);
    printf("the value of the Avg is %d:\n ",(sum/10.0));


}