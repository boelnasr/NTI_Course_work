#include<stdio.h>

int main(){
    int sum=0,in;
    for (int i = 0; i < 10; i++)
    {   printf("Enter integer #%d:",(i+1));
        scanf("%d",&in);
        sum+=in;
    }
    printf("the sum is %d\n",sum);
    printf("the average is%f",sum/10.0);
    

}