#include<stdio.h>

int main()
{   int a[10];
    int sum=0,avg;
    for (int i = 0; i < 10; i++)
    {
        printf("enter element # %d: ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("The values in reversed order\n");
    for (int i = 9; i >= 0; i--)
    {
        sum+=a[i];
    }
    printf("the calue of the sum is %d: ",sum);
    printf("the calue of the Avg is %d: ",(sum/10));


}